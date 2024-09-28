using System.Collections;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.Rendering.Universal;

public class WeatherAPIManager : MonoBehaviour
{
    private string apiUrl = "https://api.weatherapi.com/v1/current.json?key=9033f7a972934033938215935242109&q=London";

    // Reference to the RainScript2D component
    public DigitalRuby.RainMaker.RainScript2D rainScript;
    public Light2D light2dScript;
    public Color whiteLight, sunLight;

    // Start is called before the first frame update
    void Start()
    {
        // Call the coroutine to get weather data
        StartCoroutine(GetWeatherData());
    }

    IEnumerator GetWeatherData()
    {
        // Format the URL with the city and API key
        string url = string.Format(apiUrl);

        // Create a UnityWebRequest to make the API call
        UnityWebRequest request = UnityWebRequest.Get(url);

        // Wait for the request to complete
        yield return request.SendWebRequest();

        // Check if the request was successful
        if (request.result == UnityWebRequest.Result.Success)
        {
            // Parse and handle the JSON response
            string jsonResponse = request.downloadHandler.text;
            Debug.Log("Weather Data: " + jsonResponse);

            // Parse the JSON response to check current condition
            ParseWeatherData(jsonResponse);
        }
        else
        {
            // Handle error
            Debug.LogError("Error fetching weather data: " + request.error);
        }
    }

    void ParseWeatherData(string jsonResponse)
    {
        // Deserialize the JSON response
        WeatherResponse weatherResponse = JsonUtility.FromJson<WeatherResponse>(jsonResponse);

        // Log temperature and other details
        Debug.Log("Temperature: " + weatherResponse.current.temp_c + "°C");
        Debug.Log("Condition: " + weatherResponse.current.condition.text);

        // Handle the weather condition using a switch statement
        HandleWeatherCondition(weatherResponse.current.condition.text);
    }

    void HandleWeatherCondition(string condition)
{
    if (rainScript == null)
    {
        Debug.LogError("RainScript2D reference is not set in WeatherAPIManager.");
        return;
    }

    // Convert the condition to lowercase for consistent comparison
    condition = condition.ToLower();

    // Handle weather conditions using a simplified switch statement
    switch (condition)
    {
        case "partly cloudy":
            Debug.Log("It's partly cloudy, reducing rain.");
            rainScript.RainIntensity = 0f;  // No rain
            rainScript.enabled = false;  // Disable rain effects
            light2dScript.intensity = 0.8f;
            light2dScript.color = whiteLight;
            break;

        case "sunny":
            Debug.Log("It's sunny, turning off rain.");
            rainScript.RainIntensity = 0f;  // No rain
            rainScript.enabled = false;  // Disable rain effects
            light2dScript.intensity = 1.05f;
            light2dScript.color = sunLight;
            break;

        case "light rain":
            Debug.Log("It's light rain, moderate rain intensity.");
            rainScript.RainIntensity = 0.1f;  // Moderate rain
            rainScript.enabled = true;  // Enable rain effects
            light2dScript.intensity = 0.8f;
            light2dScript.color = whiteLight;
            break;

        case "heavy rain":
            Debug.Log("It's heavy rain, increasing rain intensity.");
            rainScript.RainIntensity = 0.5f;  // Full rain effect
            rainScript.enabled = true;  // Enable rain effects
            light2dScript.intensity = 0.8f;
            light2dScript.color = whiteLight;
            break;

        default:
            // Handle any condition that contains "rain"
            if (condition.Contains("rain"))
            {
                Debug.Log("It's raining (general), adjusting rain intensity.");
                rainScript.RainIntensity = 0.7f;  // Default rain intensity for general rain
                rainScript.enabled = true;  // Enable rain effects
                light2dScript.intensity = 0.8f;
                light2dScript.color = whiteLight;
            }
            else if(condition.Contains("mist"))
            {
                Debug.Log("Mist, adjusting rain intensity.");
                rainScript.RainIntensity = 0.02f;  // Default rain intensity for general rain
                rainScript.enabled = true;  // Enable rain effects
                light2dScript.intensity = 0.8f;
                light2dScript.color = whiteLight;
            }
            else if(condition.Contains("storm"))
            {
                Debug.Log("Storm, adjusting rain intensity.");
                rainScript.RainIntensity = 1f;  // Default rain intensity for general rain
                rainScript.enabled = true;  // Enable rain effects
                light2dScript.intensity = 0.77f;
                light2dScript.color = whiteLight;
            }
            else
            {
                Debug.Log("Weather condition not recognized or no rain: " + condition);
                rainScript.RainIntensity = 0f;  // No rain
                rainScript.enabled = false;  // Disable rain effects
                light2dScript.intensity = 0.9f;
                light2dScript.color = whiteLight;
            }
            break;
    }
}

}

// JSON structure for parsing the WeatherAPI response
[System.Serializable]
public class WeatherResponse
{
    public Current current;
}

[System.Serializable]
public class Current
{
    public float temp_c;
    public Condition condition;
}

[System.Serializable]
public class Condition
{
    public string text;  // e.g., "Partly cloudy", "Sunny", "Rain", etc.
}

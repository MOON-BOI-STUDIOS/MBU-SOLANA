// Turn Options


public static class TurnOptions
{
    public enum Phase1Turns
    {
        Rock,
        Paper,
        Scissor,
        None
    };

    public enum PhaseAttackTurns
    {
        Attack,
        LightAttack,
        HeavyAttack,
        None
    };

    public enum PhaseDefenceTurns //PhaseSpecialAbilityOptions
    {
        DoubleAttack,
        PlayerIncreseDamage,
        DecreaseEnemyAttack,
        BlockAttack,
        HealPortionOfHealth,
        HealMaxHealth,
        EnemyDefenceReducedOnNextRound,
        None
    }
}

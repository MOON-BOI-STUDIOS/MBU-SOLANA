// Turn Options


public static class TurnOptions
{
    public enum Phase1Turns
    {
        Rock,
        Paper,
        Scissor
    };

    public enum PhaseAttackTurns
    {
        Attack,
        LightAttack,
        HeavyAttack,
    };

    public enum PhaseDefenceTurns
    {
        DoubleAttack,
        BlockAttack,
        OtherSpecialCard
    }
}

/*
      BlockEnemyDamage,
        IncreasePlayerDefence,
        HealPortionHealth,
        HealMaxHealth,
        DoubleDamage,
        NxtRdReduceEnemyDefence,
        NxtRdReduceEnemyAttack
 */

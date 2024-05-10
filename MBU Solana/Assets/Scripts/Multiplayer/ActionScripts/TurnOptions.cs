// Turn Options


public static class TurnOptions
{
    public enum Phase1Turns
    {
        Rock,
        Paper,
        Scissor,
        DefaultMaxPhase1
    };

    public enum PhaseAttackTurns
    {
        Attack,
        LightAttack,
        HeavyAttack,
        DefaultMaxPhase2
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
        DefaultMaxPhase3
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

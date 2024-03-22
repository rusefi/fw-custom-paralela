# COUPE-BK2-comparing-against-current-COUPE-BK2-default

// canned tune https://rusefi.com/online/view.php?msq=1507

```
    // default 0.0
    engineConfiguration->cylinderBankSelect[4] = 1;
    // default 0.0
    engineConfiguration->cylinderBankSelect[5] = 1;
    // default 0.0
    engineConfiguration->cylinderBankSelect[6] = 1;
    // default 0.0
    engineConfiguration->cylinderBankSelect[7] = 1;
    // default 0.0
    engineConfiguration->cylinderBankSelect[8] = 1;
    // default 0.0
    engineConfiguration->cylinderBankSelect[9] = 1;
    // default 0.0
    engineConfiguration->cylinderBankSelect[10] = 1;
    // default 0.0
    engineConfiguration->cylinderBankSelect[11] = 1;
    // default "GPPWM Output 3"
    engineConfiguration->ignBlends[0].blendParameter = GPPWM_Zero;
    // default "Aux Linear 1"
    engineConfiguration->veBlends[2].blendParameter = GPPWM_Zero;
    // default "IAT"
    engineConfiguration->boostOpenLoopBlends[0].blendParameter = GPPWM_Zero;
    // default "Aux Temp 2"
    engineConfiguration->boostClosedLoopBlends[1].blendParameter = GPPWM_Zero;
    // default 300.0
    engineConfiguration->idle.solenoidFrequency = 200;
    // default "false"
    engineConfiguration->stepperDcInvertedPins = true;
    // default 0.0
    engineConfiguration->idleTimingPid.dFactor = 5.0E-5;
    // default 20.0
    engineConfiguration->knockRetardAggression = 0;
    // default 3.0
    engineConfiguration->knockRetardReapplyRate = 0;
    // default "MAP"
    engineConfiguration->debugMode = DBG_22;
    // default 200.0
    engineConfiguration->rpmSoftLimitWindowSize = 0;
    // default 4.0
    engineConfiguration->rpmSoftLimitTimingRetard = 0;
    // default 250.0
    engineConfiguration->etbRevLimitRange = 0;
    // default 2000.0
    engineConfiguration->boostControlMinRpm = 0;
    // default 30.0
    engineConfiguration->boostControlMinTps = 0;
    // default 110.0
    engineConfiguration->boostControlMinMap = 0;


	coupleBK2cannedtpsTpsAccelTable();
	coupleBK2cannedboostTableOpenLoop();
	coupleBK2cannedvvtTable1();
	coupleBK2cannedvvtTable2();
	coupleBK2cannedscriptTable2();
	coupleBK2cannedscriptTable3();
	coupleBK2cannedscriptTable4();
	coupleBK2cannedALSTimingRetardTable();
	coupleBK2cannedALSFuelAdjustment();
	coupleBK2cannedALSIgnSkipTable();
	coupleBK2cannedignitionTable();
	coupleBK2cannedignitionIatCorrTable();
	coupleBK2cannedveTable();
	coupleBK2cannedmapEstimateTable();
	coupleBK2cannedinjectionPhase();
	coupleBK2cannedpedalToTpsTable();
	coupleBK2cannedthrottle2TrimTable();
	coupleBK2cannedmaxKnockRetardTable();
	coupleBK2cannedlambdaTable();
	coupleBK2cannedhpfpCompensation();
	coupleBK2cannedpostCrankingFactor();
```

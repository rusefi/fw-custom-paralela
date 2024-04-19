```
static void cannedtpsTpsAccelTable() {
	static const float hardCodedtpsTpsAccelTable[8][8] = {
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{1.200,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{2.040,	1.200,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{2.760,	2.040,	1.200,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{3.360,	2.760,	2.040,	1.200,	0.000,	0.000,	0.000,	0.000,	},
{3.840,	3.360,	2.760,	2.040,	1.200,	0.000,	0.000,	0.000,	},
{4.200,	3.840,	3.360,	2.760,	2.040,	1.200,	0.000,	0.000,	},
{4.440,	4.200,	3.840,	3.360,	2.760,	2.040,	1.200,	0.000,	},
};
	copyTable(config->tpsTpsAccelTable, hardCodedtpsTpsAccelTable);
}

static void cannedboostTableOpenLoop() {
	static const float hardCodedboostTableOpenLoop[8][8] = {
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{14.000,	14.000,	14.000,	14.000,	14.000,	14.000,	14.000,	14.000,	},
{29.000,	29.000,	29.000,	29.000,	29.000,	29.000,	29.000,	29.000,	},
{43.000,	43.000,	43.000,	43.000,	43.000,	43.000,	43.000,	43.000,	},
{57.000,	57.000,	57.000,	57.000,	57.000,	57.000,	57.000,	57.000,	},
{71.000,	71.000,	71.000,	71.000,	71.000,	71.000,	71.000,	71.000,	},
{86.000,	86.000,	86.000,	86.000,	86.000,	86.000,	86.000,	86.000,	},
{100.000,	100.000,	100.000,	100.000,	100.000,	100.000,	100.000,	100.000,	},
};
	copyTable(config->boostTableOpenLoop, hardCodedboostTableOpenLoop);
}

static void cannedvvtTable1() {
	static const float hardCodedvvtTable1[8][8] = {
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{2.000,	5.000,	16.000,	16.000,	8.000,	5.000,	0.000,	0.000,	},
{3.000,	7.000,	24.000,	24.000,	12.000,	8.000,	0.000,	0.000,	},
{3.000,	10.000,	40.000,	40.000,	20.000,	13.000,	0.000,	0.000,	},
{3.000,	10.000,	40.000,	40.000,	20.000,	13.000,	0.000,	0.000,	},
{3.000,	10.000,	40.000,	40.000,	20.000,	13.000,	0.000,	0.000,	},
{3.000,	10.000,	40.000,	40.000,	20.000,	13.000,	0.000,	0.000,	},
};
	copyTable(config->vvtTable1, hardCodedvvtTable1);
}

static void cannedvvtTable2() {
	static const float hardCodedvvtTable2[8][8] = {
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
};
	copyTable(config->vvtTable2, hardCodedvvtTable2);
}

static void cannedscriptTable3() {
	static const float hardCodedscriptTable3[8][8] = {
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
};
	copyTable(config->scriptTable3, hardCodedscriptTable3);
}

static void cannedscriptTable4() {
	static const float hardCodedscriptTable4[8][10] = {
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
};
	copyTable(config->scriptTable4, hardCodedscriptTable4);
}

static void cannedALSTimingRetardTable() {
	static const float hardCodedALSTimingRetardTable[4][4] = {
{0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	},
};
	copyTable(config->ALSTimingRetardTable, hardCodedALSTimingRetardTable);
}

static void cannedALSFuelAdjustment() {
	static const float hardCodedALSFuelAdjustment[4][4] = {
{0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	},
};
	copyTable(config->ALSFuelAdjustment, hardCodedALSFuelAdjustment);
}

static void cannedALSIgnSkipTable() {
	static const float hardCodedALSIgnSkipTable[4][4] = {
{0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	},
};
	copyTable(config->ALSIgnSkipTable, hardCodedALSIgnSkipTable);
}

static void cannedignitionTable() {
	static const float hardCodedignitionTable[16][16] = {
{12.100,	10.000,	10.000,	10.000,	29.300,	16.600,	30.000,	40.000,	40.000,	40.000,	41.000,	42.000,	42.000,	42.000,	42.000,	42.000,	},
{15.000,	15.000,	15.000,	19.200,	24.500,	29.700,	35.000,	38.000,	0.000,	0.000,	0.000,	0.000,	40.000,	40.000,	40.000,	42.000,	},
{15.000,	15.000,	10.000,	10.000,	10.000,	10.000,	35.000,	38.000,	0.000,	0.000,	0.000,	0.000,	40.000,	40.000,	40.000,	42.000,	},
{15.000,	15.000,	10.000,	10.000,	10.000,	10.000,	35.000,	38.000,	-5.000,	-5.000,	-5.000,	-5.000,	42.000,	42.000,	42.000,	42.000,	},
{15.000,	15.000,	15.000,	19.200,	24.500,	30.000,	35.000,	38.000,	-5.000,	-5.000,	-5.000,	-5.000,	42.000,	42.000,	42.000,	42.000,	},
{15.000,	15.000,	15.000,	19.200,	24.500,	30.000,	35.000,	38.000,	-5.000,	-5.000,	-5.000,	42.000,	42.000,	42.000,	42.000,	42.000,	},
{15.000,	16.100,	18.200,	21.000,	24.500,	29.700,	30.000,	40.000,	40.000,	40.000,	41.000,	42.000,	42.000,	42.000,	42.000,	42.000,	},
{15.000,	16.100,	18.200,	21.000,	24.500,	29.700,	30.000,	40.000,	40.000,	40.000,	41.000,	42.000,	42.000,	42.000,	42.000,	42.000,	},
{15.000,	16.100,	18.200,	21.000,	24.500,	29.700,	30.000,	40.000,	40.000,	40.000,	41.000,	42.000,	42.000,	42.000,	42.000,	42.000,	},
{15.000,	16.000,	17.900,	20.500,	23.700,	27.500,	29.400,	30.800,	31.100,	31.500,	31.800,	32.200,	32.600,	32.900,	33.300,	34.000,	},
{15.000,	15.900,	17.700,	20.200,	23.200,	27.000,	28.900,	30.300,	30.600,	31.000,	31.300,	31.700,	32.100,	32.400,	32.800,	33.500,	},
{15.000,	15.900,	17.600,	19.800,	22.700,	26.500,	28.400,	29.800,	30.100,	30.500,	30.800,	31.200,	31.600,	31.900,	32.300,	33.000,	},
{15.000,	15.800,	17.400,	19.500,	22.200,	26.000,	27.900,	29.300,	29.600,	30.000,	30.300,	30.700,	31.100,	31.400,	31.800,	32.500,	},
{15.000,	15.700,	17.200,	19.200,	21.700,	25.500,	27.400,	28.800,	29.100,	29.500,	29.800,	30.200,	30.600,	30.900,	31.300,	32.000,	},
{15.000,	15.700,	17.100,	18.900,	21.200,	25.000,	26.900,	28.300,	28.600,	29.000,	29.300,	29.700,	30.100,	30.400,	30.800,	31.500,	},
{15.000,	15.600,	16.900,	18.600,	20.700,	24.500,	26.400,	27.800,	28.100,	28.500,	28.800,	29.200,	29.600,	29.900,	30.300,	31.000,	},
};
	copyTable(config->ignitionTable, hardCodedignitionTable);
}

static void cannedveTable() {
	static const float hardCodedveTable[16][16] = {
{15.400,	15.400,	21.000,	15.500,	13.100,	10.000,	10.000,	10.000,	10.000,	10.000,	10.000,	10.000,	10.000,	10.000,	10.000,	10.000,	},
{18.000,	18.000,	18.000,	18.000,	18.000,	10.000,	10.000,	5.000,	5.000,	5.000,	5.000,	5.000,	5.000,	10.000,	10.000,	10.000,	},
{21.400,	18.000,	18.000,	18.000,	18.000,	10.000,	10.000,	5.000,	5.000,	5.000,	5.000,	5.000,	5.000,	10.000,	10.000,	10.000,	},
{25.100,	22.900,	21.300,	25.000,	25.000,	10.000,	10.000,	5.000,	5.000,	5.000,	5.000,	5.000,	5.000,	10.000,	10.000,	10.000,	},
{25.900,	24.700,	40.000,	40.000,	33.300,	25.000,	15.000,	15.000,	5.000,	5.000,	5.000,	5.000,	5.000,	5.000,	5.000,	5.000,	},
{29.600,	50.000,	50.000,	40.000,	31.100,	29.400,	22.600,	21.000,	20.000,	20.000,	20.000,	20.000,	20.000,	20.000,	20.000,	20.000,	},
{41.800,	50.000,	50.000,	45.000,	43.000,	40.400,	41.600,	36.000,	32.500,	33.900,	37.100,	37.400,	37.400,	37.400,	37.400,	37.400,	},
{43.900,	49.200,	51.700,	47.300,	42.800,	58.500,	60.300,	55.300,	51.700,	53.800,	56.000,	51.000,	51.000,	51.000,	51.000,	51.000,	},
{54.300,	59.800,	65.000,	62.000,	58.500,	66.300,	67.300,	61.500,	57.400,	59.200,	61.000,	56.000,	56.000,	56.000,	56.000,	56.000,	},
{59.600,	62.800,	65.700,	64.800,	63.600,	68.300,	69.600,	72.700,	70.700,	71.600,	72.400,	69.900,	69.800,	69.700,	69.700,	69.700,	},
{64.900,	65.800,	66.400,	67.500,	68.700,	70.200,	71.900,	85.900,	85.900,	85.900,	85.800,	85.700,	85.600,	85.400,	85.300,	85.300,	},
{66.100,	67.000,	67.600,	68.700,	69.900,	71.400,	73.100,	85.800,	85.900,	85.800,	85.600,	85.300,	84.900,	84.400,	84.100,	83.900,	},
{67.400,	68.300,	68.900,	70.000,	71.200,	72.700,	74.400,	85.600,	90.800,	90.700,	90.400,	89.800,	89.200,	88.300,	87.900,	87.500,	},
{68.600,	69.500,	70.100,	71.200,	72.400,	73.900,	75.600,	87.600,	92.800,	92.700,	95.400,	94.800,	94.100,	93.200,	92.800,	92.400,	},
{69.900,	70.800,	71.400,	72.500,	73.700,	75.200,	76.900,	89.600,	94.700,	94.600,	97.300,	96.700,	96.100,	95.200,	94.800,	94.300,	},
{71.100,	72.000,	72.600,	73.700,	74.900,	76.400,	78.100,	92.900,	98.200,	98.100,	100.800,	100.200,	99.600,	98.700,	98.300,	97.900,	},
};
	copyTable(config->veTable, hardCodedveTable);
}

static void cannedinjectionPhase() {
	static const float hardCodedinjectionPhase[16][16] = {
{-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	},
{-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	},
{-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	},
{-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	},
{-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	},
{-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	},
{-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	},
{-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	},
{-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	},
{-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	},
{-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	},
{-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	},
{-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	},
{-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	},
{-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	},
{-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	-360.000,	},
};
	copyTable(config->injectionPhase, hardCodedinjectionPhase);
}

static void cannedpedalToTpsTable() {
	static const float hardCodedpedalToTpsTable[8][8] = {
{0.000,	0.000,	0.000,	0.000,	6.000,	6.000,	3.000,	1.000,	},
{5.000,	5.000,	5.000,	5.000,	5.000,	5.000,	5.000,	5.000,	},
{7.000,	7.000,	10.000,	10.000,	10.000,	10.000,	10.000,	10.000,	},
{15.000,	15.000,	20.000,	20.000,	20.000,	20.000,	20.000,	20.000,	},
{25.000,	25.000,	40.000,	40.000,	40.000,	40.000,	40.000,	40.000,	},
{30.000,	30.000,	50.000,	50.000,	50.000,	50.000,	50.000,	50.000,	},
{40.000,	40.000,	70.000,	70.000,	70.000,	70.000,	70.000,	70.000,	},
{50.000,	90.000,	90.000,	90.000,	90.000,	90.000,	90.000,	90.000,	},
};
	copyTable(config->pedalToTpsTable, hardCodedpedalToTpsTable);
}

static void cannedthrottle2TrimTable() {
	static const float hardCodedthrottle2TrimTable[6][6] = {
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
};
	copyTable(config->throttle2TrimTable, hardCodedthrottle2TrimTable);
}

static void cannedmaxKnockRetardTable() {
	static const float hardCodedmaxKnockRetardTable[6][6] = {
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
};
	copyTable(config->maxKnockRetardTable, hardCodedmaxKnockRetardTable);
}

static void cannedlambdaTable() {
	static const float hardCodedlambdaTable[16][16] = {
{14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	},
{14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	},
{14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	},
{14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	},
{14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	14.700,	},
{14.000,	14.000,	14.000,	14.000,	14.000,	14.000,	14.000,	14.000,	14.000,	14.000,	14.000,	14.000,	14.000,	14.000,	14.000,	14.000,	},
{13.500,	13.500,	13.500,	13.500,	13.500,	13.500,	13.500,	13.500,	13.500,	13.500,	13.500,	13.500,	13.500,	13.500,	13.500,	13.500,	},
{13.200,	13.200,	13.200,	13.200,	13.200,	13.200,	13.200,	13.200,	13.200,	13.200,	13.200,	13.200,	13.200,	13.200,	13.200,	13.200,	},
{13.100,	13.100,	13.100,	13.100,	13.100,	13.100,	13.100,	13.100,	13.100,	13.100,	13.100,	13.100,	13.100,	13.100,	13.100,	13.100,	},
{12.900,	12.900,	12.900,	12.900,	12.900,	12.900,	12.900,	12.900,	12.900,	12.900,	12.900,	12.900,	12.900,	12.900,	12.900,	12.900,	},
{12.600,	12.600,	12.600,	12.600,	12.600,	12.600,	12.600,	12.600,	12.600,	12.600,	12.600,	12.600,	12.600,	12.600,	12.600,	12.600,	},
{12.300,	12.300,	12.300,	12.300,	12.300,	12.300,	12.300,	12.300,	12.300,	12.300,	12.300,	12.300,	12.300,	12.300,	12.300,	12.300,	},
{11.800,	11.800,	11.800,	11.800,	11.800,	11.800,	11.800,	11.800,	11.800,	11.800,	11.800,	11.800,	11.800,	11.800,	11.800,	11.800,	},
{11.300,	11.300,	11.300,	11.300,	11.300,	11.300,	11.300,	11.300,	11.300,	11.300,	11.300,	11.300,	11.300,	11.300,	11.300,	11.300,	},
{11.000,	11.000,	11.000,	11.000,	11.000,	11.000,	11.000,	11.000,	11.000,	11.000,	11.000,	11.000,	11.000,	11.000,	11.000,	11.000,	},
{10.700,	10.700,	10.700,	10.700,	10.700,	10.700,	10.700,	10.700,	10.700,	10.700,	10.700,	10.700,	10.700,	10.700,	10.700,	10.700,	},
};
	copyTable(config->lambdaTable, hardCodedlambdaTable);
}

static void cannedinjectorStagingTable() {
	static const float hardCodedinjectorStagingTable[6][6] = {
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
};
	copyTable(config->injectorStagingTable, hardCodedinjectorStagingTable);
}

static void cannedhpfpCompensation() {
	static const float hardCodedhpfpCompensation[10][10] = {
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
{0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	0.000,	},
};
	copyTable(config->hpfpCompensation, hardCodedhpfpCompensation);
}

static void cannedpostCrankingFactor() {
	static const float hardCodedpostCrankingFactor[6][6] = {
{1.200,	1.000,	1.000,	1.000,	1.000,	1.000,	},
{1.200,	1.000,	1.000,	1.000,	1.000,	1.000,	},
{1.200,	1.000,	1.000,	1.000,	1.000,	1.000,	},
{1.200,	1.000,	1.000,	1.000,	1.000,	1.000,	},
{1.200,	1.000,	1.000,	1.000,	1.000,	1.000,	},
{1.200,	1.000,	1.000,	1.000,	1.000,	1.000,	},
};
	copyTable(engineConfiguration->postCrankingFactor, hardCodedpostCrankingFactor);
}

```
#include "pch.h"

Gpio getCommsLedPin() {
	return Gpio::D15;
}

Gpio getRunningLedPin() {
	return Gpio::Unassigned;
}

Gpio getWarningLedPin() {
	return Gpio::Unassigned;
}

void setBoardDefaultConfiguration() {
	engineConfiguration->vbattDividerCoeff = 10.2f;
	engineConfiguration->vbattAdcChannel = EFI_ADC_12;
}

static Gpio OUTPUTS[] = {
    Gpio::D11, // 
    Gpio::D12, // 
    Gpio::D13, //
    Gpio::D14, //
    Gpio::E11, //
    Gpio::E12,
};

int getBoardMetaOutputsCount() {
    return efi::size(OUTPUTS);
}

Gpio* getBoardMetaOutputs() {
    return OUTPUTS;
}

void setCustomVbatt() {
	// set vbatt_divider 5.835
	// 33k / 6.8k
	engineConfiguration->vbattDividerCoeff = 10.2; // 5.835

	engineConfiguration->vbattAdcChannel = EFI_ADC_12;

}

static void setInjectorPins() {
	engineConfiguration->injectionPins[0] = E0;
	engineConfiguration->injectionPins[1] = E6;
	engineConfiguration->injectionPins[2] = D9;
	engineConfiguration->injectionPins[3] = E3;
}

static void setIgnitionPins() {
	engineConfiguration->ignitionPins[0] = A8;
	engineConfiguration->ignitionPins[1] = C9;
	engineConfiguration->ignitionPins[2] = A10;
	engineConfiguration->ignitionPins[3] = C8;
}

void setBoardDefaultConfiguration() {
	engineConfiguration->map.sensor.hwChannel = EFI_ADC_0;
	engineConfiguration->clt.adcChannel = EFI_ADC_1;
	engineConfiguration->iat.adcChannel = EFI_ADC_13;
	engineConfiguration->afr.hwChannel = EFI_ADC_14;

	
	engineConfiguration->triggerInputPins[0] = B1;
	engineConfiguration->triggerInputPins[1] = A6;
}

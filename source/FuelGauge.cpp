#include "FuelGauge.h"

FuelGauge::FuelGauge()
	: fuelLevel(5)
{
	logger = GetColorLogger(ColorCode::Yellow);
}
void FuelGauge::DecrementFuelLevel()
{
	--fuelLevel;
	if (fuelLevel < 2)
	{
		logger->Log("Low fuel!");
	}
}

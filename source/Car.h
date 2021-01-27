#pragma once

#include "FuelGauge.h"
#include "Logger.h"

class Car
{
public:
	Car(int carId);
	void TurnLeft();
	void TurnRight();
	void Accelerate();
private:
	FuelGauge fuelGauge;
	ILogger* logger;
};

#include "Car.h"

Car::Car(int carId)
	: logger(new Logger())
{
	if (carId == 1)
	{
		logger = GetColorLogger(ColorCode::Cyan);
	}
	else if (carId == 2)
	{
		logger = GetColorLogger(ColorCode::Magenta);
	}
	else
	{
		logger = GetColorLogger(ColorCode::Black);
	}
	
}
void Car::TurnLeft()
{
	logger->Log("Turning left");
	fuelGauge.DecrementFuelLevel();
}
void Car::TurnRight()
{
	logger->Log("Turning right");
	fuelGauge.DecrementFuelLevel();
}
void Car::Accelerate()
{
	logger->Log("Moving ahead");
	fuelGauge.DecrementFuelLevel();
	fuelGauge.DecrementFuelLevel();
}

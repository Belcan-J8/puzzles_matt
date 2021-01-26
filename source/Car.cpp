#include "Car.h"

Car::Car()
	: logger(new Logger())
{
}
void Car::TurnLeft()
{
	logger->Log("Turning left", ColorCode::Blue);
	fuelGauge.DecrementFuelLevel();
}
void Car::TurnRight()
{
	logger->Log("Turning right", ColorCode::Blue);
	fuelGauge.DecrementFuelLevel();
}
void Car::Accelerate()
{
	logger->Log("Moving ahead", ColorCode::Blue);
	fuelGauge.DecrementFuelLevel();
	fuelGauge.DecrementFuelLevel();
}

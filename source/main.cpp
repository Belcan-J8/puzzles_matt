#include "Car.h"
#include "Logger.h"

int main(int argc, char* argv[])
{
	Logger logger;

	logger.Log("Starting application");

	Car car(1);
	car.TurnLeft();
	car.TurnRight();
	car.Accelerate();

	Car car2(2);
	car2.TurnLeft();
	car2.TurnRight();
	car2.Accelerate();

	logger.Log("Exiting application");
}

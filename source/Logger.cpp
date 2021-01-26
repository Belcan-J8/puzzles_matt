#include "Logger.h"
#include <termcolor/termcolor.hpp>

#include <iostream>

void Logger::Log(std::string string)
{
	std::cout << termcolor::reset << string << std::endl;
}

void BlueLogger::Log(std::string string)
{
	std::cout << termcolor::blue << string << std::endl;
}
void RedLogger::Log(std::string string)
{
	std::cout << termcolor::red << string << std::endl;
}
ILogger* GetColorLogger(ColorCode color)
{
	ILogger* returnColor;
	switch (color)
	{
	case ColorCode::Grey:
		returnColor = new Logger();
		break;
	case ColorCode::Red:
		returnColor = new RedLogger();
		break;
	case ColorCode::Green:
		returnColor = new Logger();
		break;
	case ColorCode::Yellow:
		returnColor = new Logger();
		break;
	case ColorCode::Blue:
		returnColor = new BlueLogger();
		break;
	case ColorCode::Magenta:
		returnColor = new Logger();
		break;
	case ColorCode::Cyan:
		returnColor = new Logger();
		break;
	case ColorCode::White:
		returnColor = new Logger();
		break;
	default:
		returnColor = new Logger();
	}
	return returnColor;
}
#include "Logger.h"
#include <termcolor/termcolor.hpp>

#include <iostream>

void Logger::Log(std::string string)
{
	std::cout << termcolor::reset << string << std::endl;
}

void YellowLogger::Log(std::string string)
{
	std::cout << termcolor::yellow << string << std::endl;
}
void CyanLogger::Log(std::string string)
{
	std::cout << termcolor::cyan << string << std::endl;
}
void MagentaLogger::Log(std::string string)
{
	std::cout << termcolor::magenta << string << std::endl;
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
		returnColor = new Logger();
		break;
	case ColorCode::Green:
		returnColor = new Logger();
		break;
	case ColorCode::Yellow:
		returnColor = new YellowLogger();
		break;
	case ColorCode::Blue:
		returnColor = new Logger();
		break;
	case ColorCode::Magenta:
		returnColor = new MagentaLogger();
		break;
	case ColorCode::Cyan:
		returnColor = new CyanLogger();
		break;
	case ColorCode::White:
		returnColor = new Logger();
		break;
	case ColorCode::Black:
	default:
		returnColor = new Logger();
	}
	return returnColor;
}
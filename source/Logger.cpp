#include "Logger.h"
#include <termcolor/termcolor.hpp>

#include <iostream>

void Logger::Log(std::string string)
{
	std::cout << termcolor::reset << string << std::endl;
}

void Logger::Log(std::string string, ColorCode rgb)
{
	switch (rgb)
	{
		case ColorCode::Grey:
			std::cout << termcolor::grey;
			break;
		case ColorCode::Red:
			std::cout << termcolor::red;
			break;
		case ColorCode::Green:
			std::cout << termcolor::green;
			break;
		case ColorCode::Yellow:
			std::cout << termcolor::yellow;
			break;
		case ColorCode::Blue:
			std::cout << termcolor::blue;
			break;
		case ColorCode::Magenta:
			std::cout << termcolor::magenta;
			break;
		case ColorCode::Cyan:
			std::cout << termcolor::cyan;
			break;
		case ColorCode::White:
			std::cout << termcolor::white;
			break;
		default:
			std::cout << termcolor::reset;
	}
	std::cout << string << std::endl;
}

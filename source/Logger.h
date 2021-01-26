#pragma once

#include <string>

struct ILogger
{
	virtual void Log(std::string string) = 0;
};

enum class ColorCode
{
	Grey = 0,
	Red,
	Green,
	Yellow,
	Blue,
	Magenta,
	Cyan,
	White
};

class Logger : public ILogger
{
public:

	void Log(std::string string);
	void Log(std::string string, ColorCode rgb);
};


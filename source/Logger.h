#pragma once

#include <string>

struct ILogger
{
	virtual void Log(std::string string) = 0;
};

enum class ColorCode
{
	Black = 0,
	Grey,
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
};

class CyanLogger : public ILogger
{
public:
	void Log(std::string string);
};

class YellowLogger : public ILogger
{
public:
	void Log(std::string string);
};

class MagentaLogger : public ILogger
{
public:
	void Log(std::string string);
};

ILogger* GetColorLogger(ColorCode color);
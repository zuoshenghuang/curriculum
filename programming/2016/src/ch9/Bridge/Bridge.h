#pragma once
#include <iostream>
#include <string>

class Bridge
{
public:
	virtual std::string toUSA() = 0;
};

class ChinaLocation
{
public:
	virtual std::string where() = 0;
	void setBridge(Bridge * b) { bridge = b;}
	void go()
	{
		std::cout << where() << " " << bridge->toUSA() << std::endl;
	}
private:
	Bridge * bridge;
};

class SouthChina : public ChinaLocation
{
	std::string where()
	{
		return "SouthChina";
	}
};

class EastChina : public ChinaLocation
{
	std::string where()
	{
		return "EastChina";
	}
};

class NorthEastChina : public ChinaLocation
{
	std::string where()
	{
		return "NorthEastChina";
	}
};

class SanFransiscoBridge : public Bridge
{
	std::string toUSA()
	{
		return " to USA SanFransisco";
	}
};

class LosAngelesBridge : public Bridge
{
	std::string toUSA()
	{
		return " to USA LosAngeles";
	}
};
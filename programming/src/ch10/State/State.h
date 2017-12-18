#pragma once
#include <iostream>
#include <string>

class WaterState
{
public:
	virtual std::string name() = 0;
};

class Vapor : public WaterState
{
public:
	std::string name() { return "Vapor"; }
};

class Liquid : public WaterState
{
public:
	std::string name() { return "Liquid"; }
};

class Ice : public WaterState
{

public:
	std::string name() { return "Ice"; }
};

class H2O
{
public:
	H2O(WaterState *s) : state(s) {}
	~H2O()
	{
		if (NULL != state)
		{
			delete state;
			state = NULL;
		}
	}

	void heat()
	{
		if (state == NULL)
		{
			std::cout << "H2O without state" << std::endl;
			return;
		}

		if (state->name() == "Vapor")
		{
			std::cout << "boiled water heating" << std::endl;
			return;
		}
		
		if (state->name() == "Ice")
		{
			changeState(new Liquid());
			return;
		}

		if (state->name() == "Liquid")
		{
			changeState(new Vapor());
			return;
		}
	}

	void froze()
	{
		if (state == NULL)
		{
			std::cout << "H2O without state" << std::endl;
			return;
		}

		if (state->name() == "Ice")
		{
			std::cout << "ice water frozing" << std::endl;
			return;
		}

		if (state->name() == "Vapor")
		{
			changeState(new Liquid());
			return;
		}

		if (state->name() == "Liquid")
		{
			changeState(new Ice());
			return;
		}
	}

	void changeState(WaterState * w)
	{
		if (NULL != state)
		{
			if (NULL != w)
				std::cout << state->name() << "-->" << w->name() << std::endl;
			else
				std::cout << state->name() << "-->" << "NULL" << std::endl;

			delete state;
			state = NULL;
		}
		else
		{
			if (NULL != w)
				std::cout << "NULLL" << "-->" << w->name() << std::endl;
			else
				std::cout << "NULLL"  << "-->" << "NULL" << std::endl;
		}
		state = w;
	}
private:
	WaterState * state;
};
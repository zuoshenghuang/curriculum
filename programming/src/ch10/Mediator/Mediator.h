#pragma once
#include <iostream>
#include <string>

class Client;
class Mediator
{
public:
	virtual void send(std::string msg, Client * src) = 0;
};

class Client
{
public:
	virtual void sendMessage(std::string) = 0;
	virtual void recvMessage(std::string) = 0;

	void setMediator(Mediator * m) { med = m; }
protected:
	Mediator * med;
};

class Renter : public Client
{
public:
	void sendMessage(std::string msg)
	{
		if (NULL != med)
			med->send(msg, this);
	}
	void recvMessage(std::string msg)
	{
		std::cout << "Renter rev:" << msg << std::endl;
	}
};

class LandLord : public Client
{
public:
	void sendMessage(std::string msg)
	{
		if (NULL != med)
			med->send(msg, this);
	}
	void recvMessage(std::string msg)
	{
		std::cout << "LandLord recv :" << msg << std::endl;
	}
};

class HouseMediator : public Mediator
{
public:
	void setRenter(Renter * r)
	{
		renter = r;
	}

	void setLandLord(LandLord * r)
	{
		landlord = r;
	}

	void send(std::string msg, Client * src)
	{
		if (src == renter)
			landlord->recvMessage(msg);
		if (src == landlord)
			renter->recvMessage(msg);
	}
private:
	Renter * renter;
	LandLord * landlord;
};

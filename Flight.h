#pragma once
#include <string>

class Flight
{
public:
	void setNumber(const std::string flightNumber);
	std::string getNumber();
private: 
	std::string number;
};

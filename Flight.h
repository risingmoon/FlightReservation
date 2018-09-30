#pragma once
#include <string>

using namespace std;
class Flight
{
public:
	void display();

	//Getter and Setter
	void setNumber(string flightNumber);
	string getNumber();

private: 
	string number;
};

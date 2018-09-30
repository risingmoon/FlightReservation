#pragma once
#include <string>

using namespace std;

class Passenger
{
public:
	Passenger() = default;
	Passenger(string firstName, string lastName);

	//Getters and Setters
	void setFirstName(string fName);
	string getFirstName();

	void setLastName(string lName);
	string getLastName();

private:
	string firstName;
	string lastName;
};


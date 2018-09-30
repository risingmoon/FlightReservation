#pragma once
#include "Flight.h"
#include <vector>

class Schedule
{
public: 
	Schedule() = default;

	void pushFlight(Flight& flight);
	void addFlight(
		string airline,
		string number,
		string departureTime,
		string arrivalTime,
		string depatureDate,
		string arrivalDate,
		string origin,
		string destination);
	Flight& operator[](int index);
	void display();
private:
	vector<Flight> flights;
};


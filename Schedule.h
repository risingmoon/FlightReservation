#pragma once
#include "Flight.h"
#include <vector>

class Schedule
{
public: 
	Schedule() = default;

	void addFlight(Flight& flight);
	void display();
private:
	vector<Flight> flights;
};


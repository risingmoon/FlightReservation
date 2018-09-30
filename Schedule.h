#pragma once
#include "Flight.h"
#include <vector>

class Schedule
{
public: 
	Schedule() = default;

	void addFlight(Flight& flight);
private:
	vector<Flight> flights;
};


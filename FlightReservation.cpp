#include "pch.h"
#include "Flight.h"
#include <string>
#include <iostream>

int main()
{
	Flight flight;
	flight.setNumber("UA123");
	std::cout << "Flight Number: " << flight.getNumber() << std::endl;
}
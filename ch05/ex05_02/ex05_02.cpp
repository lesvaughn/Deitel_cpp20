/*
 * ex05_02.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 5.2  (Parking Charges)
 *
 * les vaughn
 * Sep 6, 2023
 */

#include <iostream>
#include <cmath>
#include <format>

double calculateCharges(double hours);

int main()
{
    std::cout << "Enter hours parked for Customer 1:  ";
    double hoursParked_C1{ 0 };
    std::cin >> hoursParked_C1;

    std::cout << "Enter hours parked for Customer 2:  ";
    double hoursParked_C2{ 0 };
    std::cin >> hoursParked_C2;

    std::cout << "Enter hours parked for Customer 3:  ";
    double hoursParked_C3{ 0 };
    std::cin >> hoursParked_C3;

    double totalHours{ hoursParked_C1 + hoursParked_C2 + hoursParked_C3 };

    double car1Charge{ calculateCharges(hoursParked_C1) };
    double car2Charge{ calculateCharges(hoursParked_C2) };
    double car3Charge{ calculateCharges(hoursParked_C3) };

    double totalCharge{ car1Charge + car2Charge + car3Charge };

    std::cout << "Car\tHours\tCharge\n";
    std::cout << std::format("1{:>12.1f}{:>9.2f}\n",
        hoursParked_C1, car1Charge);

    std::cout << std::format("2{:>12.1f}{:>9.2f}\n",
        hoursParked_C2, car2Charge);

    std::cout << std::format("3{:>12.1f}{:>9.2f}\n",
        hoursParked_C3, car3Charge);

    std::cout << std::format("TOTAL{:>8.1f}{:>9.2f}\n",
        totalHours, totalCharge);
}

double calculateCharges(double hours)
{
    double charge{ 20.0 };

    if (ceil(hours) > 3) {
        charge += (ceil(hours) - 3) * 5.0;
    }

    if (charge > 50.0) {
        charge = 50.0;
    }

    return charge;
}

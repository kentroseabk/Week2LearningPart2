// Week2LearningPart2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

template <typename T>
T NumberPower(T base, int power);

int GetBaseNumber();

template <typename T>
T NumberPower(T base, int power) 
{
    if (power == 1) return base;

    return base * NumberPower(base, power - 1);
}

int GetBaseNumber() 
{
    cout << "What is your base number?" << endl;
    
    int base;

    cin >> base;

    return base;
}

int GetPowerNumber() 
{
    cout << "What is your power number?" << endl;

    int power;

    cin >> power;

    return power;
}

int main()
{
    int base = GetBaseNumber();
    int power = GetPowerNumber();

    cout << base << " raised to " << power << " is " << NumberPower(base, power);
}
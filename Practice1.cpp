// File: Practice1
// Created by Sean Bigler on 9/28/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;
// Constants, Structs, Classes
struct Money
{
    int dollars;
    int quarters;
    int dimes;
    int nickles;
    int pennies;

};

// Prototypes
void CountMoney(struct Money m);

// Main Program Program
int main()
{
    Money m1 = {6, 3, 2, 1, 1};
    Money m2;

    cout << "How many dollar bills do you have?: ";
    cin >> m2.dollars;
    cout << "\nHow many quarters do you have?: ";
    cin >> m2.quarters;
    cout << "\nHow many dimes do you have?: ";
    cin >> m2.dimes;
    cout << "\nHow many nickles do you have?: ";
    cin >> m2.nickles;
    cout << "\nHow many pennies do you have?: ";
    cin >> m2.pennies;

    cout << "\nm2: ";
    CountMoney(m2);

    cout << "\nm1: ";
    CountMoney(m1);


    return 0;
}

// Function Definitions
void CountMoney(struct Money m)
{
    double Total;

    Total = m.dollars + (m.quarters * 0.25) + (m.dimes * 0.1) + (m.nickles * .05) + (m.pennies * .01);

    cout << "Your total amount of money is: " << Total << endl;
}
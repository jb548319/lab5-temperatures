/*
 *        File: temps.cc
 *      Author: Jonah Brautigam
 *        Date: 2/16/2021
 * Description: Find highest and lowest temperatures of the month
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main(int argc, char const *argv[]) {

    double highest_temp;
    double lowest_temp;

    cout << "\nEnter the high temperature for today in Fahrenheit: ";
    double today_high;
    cin >> today_high;

    cout << "\nEnter the low temperature for today in Fahrenheit: ";
    double today_low;
    cin >> today_low;

    highest_temp = today_high;
    lowest_temp = today_low;

    while(today_high != -100 || today_low != -100)
    {
        if (today_high > highest_temp)
        {
            highest_temp = today_high;
        }

        if (today_low < lowest_temp)
        {
            lowest_temp = today_low;
        }

        cout << "\nThe highest temperature so far this month is " << highest_temp << " degrees Fahrenheit." << endl;
        cout << "\nThe lowest temperature so far this monthe is " << lowest_temp << " degrees Fahrenheit." << endl;

        cout << "\n--Enter \"-100\" for both the high and low to stop entering temperatures.--" << endl;

        cout << "\nEnter the high temperature for today: ";
        cin >> today_high;

        cout << "\nEnter the low temperature for today: ";
        cin >> today_low;
    }

    cout << "\nThe highest daily temperature this month was " << highest_temp << " degrees Fahrenheit." << endl;
    cout << "\nThe lowest daily temperature this month was " << lowest_temp << " degrees Fahrenheit." << endl;

    cout << "\nDone!" << endl;

    return 0;
}// main
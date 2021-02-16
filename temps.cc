/*
 *        File: temps.cc
 *      Author: Jonah Brautigam
 *        Date: 2/16/2021
 * Description: Find highest and lowest temperatures of the month
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

    double highest_temp; // Variable that will store the highest temperature
    double lowest_temp; // Variable that will store the lowest temperature

    cout << "\nEnter the high temperature for today in Fahrenheit: "; // Asks user for the first day's high
    double today_high;
    cin >> today_high; 

    cout << "\nEnter the low temperature for today in Fahrenheit: "; // Asks user for the first day's low
    double today_low;
    cin >> today_low;

    highest_temp = today_high; // today_high is highest_temp because it is the only high entered
    lowest_temp = today_low; // today_low is lowest_temp because it is the only low entered

    while(today_high != -100 || today_low != -100) // Will kick user out if both the low and high are "-100"
    {
        if (today_high > highest_temp) // Declares the today high as highest temperature if the today high is larger
        {
            highest_temp = today_high;
        }

        if (today_low < lowest_temp) // Declares the today low as lowest temperature if the today low is smaller
        {
            lowest_temp = today_low;
        }

        cout << "\nThe highest temperature so far this month is " << highest_temp << " degrees Fahrenheit." << endl; // Prints highest
        cout << "\nThe lowest temperature so far this month is " << lowest_temp << " degrees Fahrenheit." << endl; // Prints lowest

        cout << "\n--Enter \"-100\" for both the high and low to stop entering temperatures.--" << endl; // Tells user how to end program

        cout << "\nEnter the high temperature for today: "; // User enters the new daily high
        cin >> today_high;

        cout << "\nEnter the low temperature for today: "; // User enters the new daily low
        cin >> today_low;
    }

    cout << "\nThe highest daily temperature this month was " << highest_temp << " degrees Fahrenheit." << endl; // Prints highest of the month
    cout << "\nThe lowest daily temperature this month was " << lowest_temp << " degrees Fahrenheit." << endl; // Prints lowest of the month

    cout << "\nDone!" << endl;

    return 0;
}// main
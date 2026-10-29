/*  Program File Name: Chapter 5 Exercise 27
    Programmer: Christian Min
    Date: 10/28/26
    Requirements:
    Write a program that produces a bar chart showing the population growth of Prairieville, a small town in the Midwest, at 20-year intervals during the past 100 years.
    he program should read in the population figures (rounded to the nearest 1,000 people) for 1910, 1930, 1950, 1970, 1990, and 2010 from a file.For each year it should
    display the date and a bar consisting of one asterisk for each 1,000 people.
*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ifstream peopleTxt;     //read in file
    int populationFigures, year = 1910;     //to hold the population figure and starting year date

    peopleTxt.open("People-2.txt");

    if (!peopleTxt) {       //*input validation: checks to see if file is found and read in
        cout << "Error: The file containing the population figures could not be opened!" << endl;
        return 1;
    }

    cout << "PRAIRIEVILLE POPULATION GROWTH" << "\n";
    cout << "(each * represents 1000 people) " << "\n";
    
    while (peopleTxt >> populationFigures) {        //read in the population figures and print out the year and newly calculated * for the values
        cout << year << " ";

        int marker = (populationFigures / 1000);
        for (int i = 0; i < marker; i++) {
            cout << "*";
        }

        cout << endl;
        year += 20;
    }

    peopleTxt.close();
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

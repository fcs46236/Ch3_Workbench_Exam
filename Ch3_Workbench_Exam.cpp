/* Program File Name: Ch3_Workbench_Exam
Programmer: Frank Sonsini
Date: October 2026
Requirements:
Write a program that inputs a customer's maximum credit amount and current amount of credit used
   then calculates and displays the customer's remaining available credit
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double max_credit, credit_used, available_credit;

    cout << fixed << setprecision(2);

    cout << "What is the customer's maximum credit amount?" << endl;
    cin >> max_credit;
    cout << "What is the customer's current amount of credit used?" << endl;
    cin >> credit_used;

    available_credit = max_credit - credit_used;

    if (available_credit < 0)
        cout << "The customer's maximum credit has been exceeded by $" << -available_credit << "." << endl;

    if(available_credit >= 0)
        cout << "The customer's available credit is $" << available_credit << "." << endl;

    return(0);
}
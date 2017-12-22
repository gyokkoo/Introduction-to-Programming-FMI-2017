/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 34
* @compiler GCC
*
* Assignment:
*  Напишете програма, използвайки отделни функции, за изчисляване на доходността,
*  която получава вложител в банка. Входни параметри на задачата се явяват:
*    1. Първоначалната сума, която вложителят внася в банката на депозитна сметка
*    2. Годишна процентна лихва, по която се начислява доходът от вложената сума
*    3. Броят години, за които е открит депозитът
*    4. Броят периоди в годината, когато се извършва начисляване на лихвa
*/
#include <iostream>
#include <cmath>

using namespace std;

double calculateDepositForYear (double m, double r)
{
    return m * (1 + r / 100);
}

double calculateDepositAfterYears(double m, double r, double y)
{
    return m * pow((1.0 + r / 100.0), y);
}

double calculateDepositNTimesPerYear (double m, double r, double y, double n)
{
    return m * pow((1 + (r / (100 * n))), n * y);
}

int main()
{
    double initialValue = 0, interestRatePercent = 0;
    double depositYears = 0, interestFreqency = 0;

    cout << "Enter initial value: ";
    cin >> initialValue;
    cout << "Enter interest rate percent: ";
    cin >> interestRatePercent;

    cout << "Enter deposit years: ";
    cin >> depositYears;
    cout << "Enter interest frequency per year: ";
    cin >> interestFreqency;

    cout << "Initial value = " << initialValue << endl;;
    cout << "Interest rate = " << interestRatePercent << "%" << endl;
    cout << "Deposit years = " << depositYears << endl;
    cout << "Interest frequency = " << interestFreqency << " times per year"<< endl;

    cout << "Output:" << endl;
    cout << "Deposit for first year: ";
    cout << calculateDepositForYear(initialValue, interestRatePercent) << endl;

    cout << "Deposit for all years: ";
    cout << calculateDepositAfterYears(initialValue, interestRatePercent, depositYears) << endl;

    cout << "Deposit for all years, with frequency: ";
    cout << calculateDepositNTimesPerYear(
      initialValue,
      interestRatePercent,
      depositYears,
      interestFreqency) << endl;

    return 0;
}

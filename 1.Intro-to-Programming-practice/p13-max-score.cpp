#include <iostream>

using namespace std;

/*
    Да се напише програма, в която потребителя въвежда оценка по програмиране от 0 до 100
    и ако е получил максимум точки, да се изведе подходящо съобщение на екрана.
*/

int main()
{
    int points = 0;
    cin >> points;

    if (points == 100)
    {
        cout << "Congratulations your score is 100!" << endl;
    }

    return 0;
}

#include <iostream>

using namespace std;

/*
    Да се напише програма, в която потребителят въвежда оценка от 2 до 6
    и извежда на екрана оценката с думи[Пример: Вход '2', Изход 'Слаб'].
*/
int main()
{
    int grade = 0;
    cout << "Enter integer number between 2 and 6" << endl;
    cin >> grade;

    switch (grade)
    {
        case 2:
            cout << "Slab" << endl;
            break;
        case 3:
            cout << "Sreden" << endl;
            break;
        case 4:
            cout << "Dobyr" << endl;
            break;
        case 5:
            cout << "Mnogo dobyr" << endl;
            break;
        case 6:
            cout << "Otlichen" << endl;
            break;
        default:
            cout << "Invalid number" << endl;
            break;
    }

    return 0;
}

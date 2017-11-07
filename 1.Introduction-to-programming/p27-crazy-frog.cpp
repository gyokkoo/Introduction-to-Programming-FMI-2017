#include <iostream>

using namespace std;

/*
    Една жаба живеела на дъното на кладенец. Гледайки непрекъснато светлото петно
    над себе си решила да се покачи и да го разгледа. Всеки ден тя се изкачвала по
    2 метра нагоре, но през нощта се разколебавала и слизала по 1 метър надолу.
    Да се състави програма, която чрез цикъл while описва движението на жабата.
    Дълбочината на кладенеца се въвежда от клавиатурата.

    Пример:
        при 20 метра дълбочина на кладенеца жабата се изкачва на 19-тия ден.
*/
int main()
{
    int depth;
    int currentDepth = 0;
    int daysCounter = 0;

    cout << "Enter depth" << endl;
    cin >> depth;

    while (currentDepth < depth)
    {
        currentDepth += 2;
        daysCounter++;
        if (currentDepth >= depth)
        {
            break;
        }

        currentDepth -= 1;
    }

    cout << daysCounter << endl;
    return 0;
}

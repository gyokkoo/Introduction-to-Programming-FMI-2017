#include<iostream>
using namespace std;

int main() 
{
	int age = 0;
	while (age < 18) 
	{
		cout << "can't drink at age " << age << endl;
		age++;
	}

	cout << "age " << age << ", can finally drink!" << endl;

    int money = 0;
    int drinkPrice = 2;
    int drinksDrunk = 0;
    do 
	{
        money = money - drinkPrice;
        drinksDrunk++;
        cout << "drank a drink, money remaining: " << money << endl;
    } while(money > drinkPrice);

    if (money < 0) 
	{
        cout << "security beat you up for drinking a drink and then not paying it" << endl;
    }

    // P.S.: drink, drank, drunk, drinking... what is this, a C++ lecture or an English lesson?

    return 0;
}

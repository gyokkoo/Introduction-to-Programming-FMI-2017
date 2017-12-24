/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 19
* @compiler GCC
*
* Assignment:
*   В играта спортен бридж се използва колода от 52 карти.
*   Те се разпределят по групи както следва:
*   2, 3, 4, 5, 6, 7 ,8, 9, 10, вале, дама, поп и асо.
*   Всяка от тях има 4 разновидности: спатия, каро, купа и пика.
*   Да се състави програма, която при въвеждане на естествено число
*   от интервала [1 - 52] извежда точната карта от колодата.
*/

#include <iostream>

int main()
{
    std::string cardSuit[4] = { "Spatiq", "Karo", "Kupa", "Pika" };
    std::string cardFaces[13] = { "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};

    int cardNumber = 0;

    std::cout << "Enter card number:\n";
    std::cin >> cardNumber;

    for (int i = 0; i <= 51; i++) {
        // std::cout << cardSuit[i % 4] << " " << cardFaces[i / 4] << "\n";
        if (cardNumber == i + 1) {
            std::cout << cardSuit[i % 4] << " " << cardFaces[i / 4] << "";
        }
    }

    return 0;
}

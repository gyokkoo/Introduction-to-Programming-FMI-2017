#include <iostream>

using namespace std;

/*
    В играта спортен бридж се използва колода от 52 карти.
    Те се разпределят по групи както следва:
    2, 3, 4, 5, 6, 7 ,8, 9, 10, вале, дама, поп и асо.
    Всяка от тях има 4 разновидности: спатия, каро, купа и пика. 
    Да се състави програма, която при въвеждане на естествено число
    от интервала [1 - 52] извежда точната карта от колодата. 
*/
int main()
{
    string cardSuit[4] = { "Spatiq", "Karo", "Kupa", "Pika" };
    string cardFaces[13] = { "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};

    int cardNumber;
    cin >> cardNumber;

    for (int i = 0; i <= 51; i++) {
        int suitRemainder = i % 4;
        string suit = cardSuit[suitRemainder];

        int cardFaceNumber = i / 4;
        string card = cardFaces[cardFaceNumber];

        if (cardNumber == i + 1) {
            cout << card << " " << suit << endl;
        }
    }

    return 0;
}

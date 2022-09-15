#include <iostream>
using namespace std;

int main(){
    srand(time(0));
    const int random = rand() % 11; // 4

    int barian = 4;
    int guess;

    cout << "Guess any number b/w 0 and 10: ";
    cin >> guess; // 7

    while (barian--) // 0
    {
        if (guess == random) break;
        cout << "Try again: ";
        cin >> guess; // 9
    }
    
    if (guess == random) // 9 == 4
        cout << "You guessed it right! And you've won!\n";
    else 
        cout << "You lost! The correct answer was " << random << endl;



}
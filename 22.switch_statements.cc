#include <iostream>
using namespace std;

int main(){
    const unsigned long
        lucky_prize     = 100,
        bonus_prize     = 3,
        first_prize     = 98,
        second_prize    = 116,
        third_prize     = 77;
    
    unsigned long lottery_number;
    cout << "Enter your lottery number: ";
    cin >> lottery_number;

    switch (lottery_number)
    {
        case lucky_prize:
            cout << "You have won the lucky prize!\n";

        case bonus_prize: // 3
            cout << "You have won the bonus prize!\n";
            // break;
            
        case first_prize:
            cout << "You have won the first prize!\n";
            break;
        
        case second_prize:
            cout << "You have won the second prize!\n";
            break;
        
        case third_prize:
            cout << "You have won the third prize!\n";
            break;

        case 90:
            cout << "You entered 90\n";
            break;

        default:
            cout << "You didn't win anything! Try again!\n";
        
    }
    


}
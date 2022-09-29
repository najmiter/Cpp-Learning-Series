#include <iostream>
using std::cout;
using std::cin;
using std::endl;

const size_t ROWS = 4;
const size_t COLS = 4;

int main(){
    int spiral[ROWS][COLS] = {
        {11, 78, 33, 13},        
        {55, 43, 39, 89},        
        {61, 24, 90, 31},        
        {12, 87, 44, 59}    
    };

    int top, right, bottom;

    top = 0;
    bottom = ROWS - 1;   // 3
    right = COLS - 1;    // 3

    int elements = ROWS * COLS; // 16

    while (elements > -1 and elements)
    {
        // TOP
        for (int i = top; i <= right; i++) // 
        {
            cout << spiral[top][i] << ' ';
            elements--;
        }
        // RIGHT
        for (int i = top + 1; i <= bottom; i++)
        {
            cout << spiral[i][right] << ' ';
            elements--;
        }
        // BOTTOM
        for (int i = --right; i > top-1; i--)
        {
            cout << spiral[bottom][i] << ' ';
            elements--;
        }
        // LEFT
        for (int i = --bottom; i > top; i--)
        {
            cout << spiral[i][top] << ' ';
            elements--;
        }
        top++;
    }

    cout<< endl;

}
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
    // char name[] = {'c', 'o', 'd', 'e', '\0'};

    // char name[] = "code\0";
    // cout << name << '\n';

    // string number = "1234";

    // const auto result = stoi(number);

    // const auto result = stof(number);

    // cout << result << '\n';

    // char number = '3';
    // cout << isalnum(number) << '\n';

    char line[100];

    cout << "Enter some text: ";
    cin.getline(line, 100); // '\0' == 0 == false

    size_t vowels = 0, consonants = 0;

    for (size_t i = 0; line[i]; i++)
    {
        if(isalpha(line[i]))
        {
            switch (tolower(line[i]))
            {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                vowels++;
                break;
            default:
                consonants++;
            }
        }
    }

    cout << "Your input contained " << vowels << " vowels and " << consonants << " consonants\n";
}
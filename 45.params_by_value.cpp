#include <iostream>

float getPercentage(float math, float phy, float CS, float eng) // math = 78.f, phy = 61.f
{ // math = 
    float percentage = 0.f;
    percentage = (math + phy + CS + eng) / 4;
    return percentage;
}

int main()
{
    float result;

    int a = 10;
    int b = a;


    float math = 78.f;
    float phy = 61.f;
    float CS = 89.f;
    float eng = 87.f;

    // result = getPercentage(78.f, 61.f, 89.f, 87.f);
    result = getPercentage(78.f, phy, CS, eng);

    std::cout<< "The percentage is = " << result << std::endl;



}
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <fstream>
using namespace std;

float calculateTaxiFare(float distance)
{
    float cost;
    if (distance <= 10)
        cost = distance * 10000;
    if (distance > 10 && distance <= 30)
        cost = 10 * 10000 + (distance - 10) * 6000;
    if (distance >= 31)
        cost = 10 * 10000 + 20 * 6000 + (distance - 10 - 20) * 4000;
    return cost;
}
int main()
{
    float distance, cost, c;
    cin >> distance;
    c = calculateTaxiFare(distance);
    cout << c;

    return 0;
}

#include <iostream>

using namespace std;

int silnia(int x)
{
    int i = x;
    x--;
    while (x > 0)
    {
        i = i * x;
        x--;
    }
    return i;
}

int main()
{
    int y;
    cin >> y;
    cout << silnia(y);
    return 0;
}
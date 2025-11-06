#include <iostream>
using namespace std;
int factorial(int n)
{

    if (n < 0)
    {
        cout << "invalid input";
        return -1;
    }
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int x;
    cout << "enter a numbers";
    cin >> x;

    cout << "factorial = "<<factorial(x);
}

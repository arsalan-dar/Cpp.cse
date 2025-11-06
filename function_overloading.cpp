#include <iostream>
#include <string>
using namespace std;
int sum(int x, int y)
{
    int sum = x + y;
    return sum;
}
int sum(int x, int y, int z)
{
    int sum = x + y + z;
    return sum;
}

string sum(string x, string y)
{
    string sum = x + y;
    return sum;
}

int main()
{
    int a, b, c, n;
    cout << "enter no of elements or if you want to add strings press 1";
    cin >> n;
    if (n == 3)
    {
        cout << "enter three numbers";
        cin >> a >> b >> c;
        sum(a, b, c);
        cout << "sum =" << sum(a, b, c);
    }
    if (n == 2)
    {
        cout << "enter two elements";
        cin >> a >> b;
        sum(a, b);
        cout << "sum =" << sum(a, b);
    }

    string x, y;
    if (n == 1)
    {
        cout << "enter two strings";
        cin >> x >> y;
        sum(x, y);
        cout << "sum =" << sum(x, y);
    }
}
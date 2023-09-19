#include <math.h> 
#include <iostream>
using namespace std;

// приклад поліному: y = 2 * x^3 + 3 * x^2 + 4 * x + 5, x = 2

int main()
{
    float x;
    int n;
    int  y = 0;

    cout << "Enter n : "; cin >> n; cout << endl;

    int* a = new int[n + 1];

    cout << "Enter x : "; cin >> x; cout << endl;

    for (int i = 0; i <= n; ++i)
    {
        cout << "Enter a" << i << " : "; cin >> a[i]; cout << endl;
    }

    int n1 = n;
    y = a[n1]; 

    for (int i = 0; i < n1; ++i)
    {
        y += a[i] * pow(x,n);
        n--;
    }
    cout << "Polynom's result = " << y; cout << endl;
    system("pause");

    return 0;
}


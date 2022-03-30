#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "¬ведите высоту елочки" << endl;
    int n, b;
    cin >> n;
    b = 1;
    for (int i = 0; i < n; i++)
    {
        int k = n - i;
        for (int j = k; j > 0; j--)
            cout << " ";
        for (int m = b; m > 0; m--)
        {
            cout << "*";
        }
        b+=2;
        cout << endl;
    }
    return 0;
}

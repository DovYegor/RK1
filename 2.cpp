#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "¬ведите размер матрицы" << endl;
    int n, m; float a[100][100];
    cin >> n >> m;
    float* b = new float[m];
    for (int i = 0; i < n; i++){
        float c;
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
            c += a[i][j];
        }
        b[i] = c / n;
        cout << b[i];
    }
    delete[] b;
    return 0;
}

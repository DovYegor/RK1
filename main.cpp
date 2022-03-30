#include <iostream>

using namespace std;

void elochka(){
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
}

float* srznach(float** a, float* b, int n, int m){ // 5
    for (int i = 0; i < n; i++){
        float c = 0;
        for (int j = 0; j < m; j++){
            c += a[i][j];
        }
        b[i] = c / m;
        cout << b[i] << endl;
    }
    return b;
}

int dvoichny(int a){
    int k = 0, b = 1;
    while (a != 0){
        k += (a % 2) * b;
        a = a / 2;
        b = b * 10;
    }
    FILE *file2 = fopen ("C:\\kuda-to_tam\\RK1\\dvoichny.txt", "a");
    fprintf(file2, "%d", k);
    fclose(file2);
    return k;
}

int main()
{
    setlocale(LC_ALL, "rus");

    cout << "Zadanie 2. Vvedite chislo" << endl;
    int z, t;
    cin >> z;
    t = dvoichny(z);
    cout << t << endl;

    cout << "Zadanie 4. Vvedite vysotu elochki" << endl;
    elochka();


    cout << "Zadanie 5. Vvedite razmer matritsy" << endl;
    int n, m;
    cin >> n >> m;
    //cout << "¬водите элементы матрицы";
    float* b = new float[m];
    float** a = new float* [m];
    for (int i = 0; i < n; i++){
        a[i] = new float [n];
        for (int j = 0; j < m; j++){
        //    cin >> a[i][j];
            a[i][j] = rand()%100;
        }
    }
    cout << endl << endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl << endl;
    b = srznach(a, b, n, m);

    return 0;
}

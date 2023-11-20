//Дан целочисленный массив A размера N. 
//Переписать в новый цело?численный массив B того же размера
// // вначале все элементы исходного мас?сива с четными номерами,
//а затем — с нечетными. ДИНАМИЧЕСКИЙ


#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int* a,*b, n;
    int i,j =0;

    cout << "Введите размер массива";
    cin >> n;
    a = new int[n];
    b = new int[n];


    for (i = 0; i < n; ++i) {
        cout << "a[" << i << "]";
        cin >> a[i];
    }


    for (i = 0; j< n, i < n; i += 2, j++) {//chet
        b[j] = a[i];

    }
    for (i = 1; j <n, i < n; i += 2, j++) {//no-chet
        b[j] = a[i];

    }
    for (i = 0; i < n; i++) {
        cout << b[i] << endl;
    }
    delete[] a, b;
}
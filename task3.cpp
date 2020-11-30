#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int mas[n][n];
// заполняем двумерный массив (i-строки, j-столбцы)
    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
// если главная диагональ
            if (i==j)
            cout << 0 << " ";
// если выше главной диагонали
            if (j>i)
            cout << 1 << " ";
// если ниже главной диагонали
            if (j<i)
            cout << -1 << " ";
        }
        cout << endl;
    }
  
    
}

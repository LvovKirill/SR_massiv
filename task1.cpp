#include <iostream>
#include <stdlib.h>

using namespace std;

// функция рандомных чисел, принимает значения first_number и second_number (возвращает рандомное значение от first_number до second_number)
int irand (int first_number, int second_number){
    return + rand()%(second_number-first_number+1);
}

int main() {
    int n;
    cin >> n;
    int mas[n];
    for (int i = 0; i<n; i++){
// используем нашу функцию irand
        mas[i] = irand(50,250);
    }
    
    // Для проверки правильности (выведет все элементы рандомного массива)
    
    //  for (int i = 0; i<n; i++){
    //     cout << mas[i] << " ";
    // }
    // cout << endl;


// выводим массив    
    for (int i = 0; i<n; i++){
        if (i%2==0)
        cout << mas[i] << " ";
    }
    
}

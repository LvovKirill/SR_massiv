#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int mas[n];
  
    // заполняем массив
    for (int i = 0; i < n; i++){
        mas[i] = n-i;
    }

// выводим массив
    for (int i = 0; i < n; i++){
        cout << mas[i]<< " ";
    }
  
    
}

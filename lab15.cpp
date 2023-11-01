#include <iostream>
#include <iomanip>
using namespace std;

void MatrixSize(int &m, int &n) {
    do {
        cout << "Кол-во строк массива: ";
        cin >> n;
    }
    while (n > 150);
    do {
        cout << "Кол-во столбцов массива: ";
        cin >> m;
    }
    while (m > 150);
}



int main() {
    setlocale (LC_ALL, "rus");
    
    int n, m, i, j;
    int A[150][150]; //матрица размера n × m
    MatrixSize(n, m);
    
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            A[i][j] = -100 + rand() % 201; //числа от -100 до 100 
        }
    }
    
    //вывод матрицы
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            cout << A[i][j] << " "; 
        }
        cout << endl;
    }
    
    
    
}

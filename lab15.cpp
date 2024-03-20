#include <iostream> 
#include <iomanip> 
using namespace std;

void MatrixSize(int& m, int& n) { // матрица размера n x m 
    do {
        cout << "Кол-во строк массива: ";
        cin >> n;
    } while (n > 150);
    do {
        cout << "Кол-во столбцов массива: ";
        cin >> m;
        cout << endl;
    } while (m > 150);
}

void RandValue(int A[150][150], int n, int m) { // заполнение матрицы числами от -100 до 100 
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            A[i][j] = -100 + rand() % 201;
        }
    }
}

void ShowMatrix(int A[150][150], int n, int m) { // вывод матрицы 
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

int PosNum(int A[150][150], int B[150], int n, int m) { //поиск кол-ва (k) положит эл-тов i-той строки 
    int i, j, t = 0, k = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (A[i][j] > 0) {
                k++;
            }
        }
        for (t = 0; t < m; t++) {
            B[t] = k;
        }
    }
    return B[t];
}

int LineMax(int B[150], int m, int max_) { // поиск номера строки с наиб кол-вом положит чисел 
    int t;
    int max = B[0];
    for (t = 0; t < m; t++) {
        if (B[t] > max) {
            max = B[t];
            max_ = t;
        }
    }
    return max_;
}

void Answer(int max_) {
    cout << "Номер строки с наиб кол-вом положит чисел: " << max_ << endl;
}

int main() {
    setlocale(LC_ALL, "rus");

    int n, m, i, j, t, max_ = 0;
    int A[150][150]; //матрица размера n × m 
    int B[150]; //массив, содержащий эл-ты k (кол-во положит чисел i-той строки) 

    MatrixSize(n, m);
    RandValue(A, n, m);
    ShowMatrix(A, n, m);
    PosNum(A, B, n, m);
    LineMax(B, m, max_);
    Answer(max_);
}

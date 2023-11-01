#include <iostream>
#include <iomanip>
using namespace std;

void MainMatrix(int** a, int n, int m) //вывод эл-тов матрицы
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++) {
			cout << setw(5) << a[i][j];
		}
		cout << endl;
	}
}

int main() {
	setlocale(LC_ALL, "rus");

	int n, m, i, j;
	int** a;
	int* tmp = new int [n];
	a = new int* [n];
	tmp = new int[n];

	cout << "Введите n: ";
	cin >> n;
	cout << "Введите m: ";
	cin >> m;

	for (i = 0; i < n; i++) {
		a[i] = new int[m];
	}	
	cout << "Items=";
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
		
	MainMatrix(a, n, m);


}
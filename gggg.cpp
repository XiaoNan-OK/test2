#include<iostream>
using namespace std;
int main() {
	int a[100][100],
		maxRow[100], maxCol[100],
		minRow[100], minCol[100],
		rowMin[100],
		colMax[100] = { 0 };
	int m, n;
	cout << "m= "; cin >> m;
	cout << "n= "; cin >> n;
//cin the matrix
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[m][n];
		}
	}
	for (int i = 0; i < 100; i++) {
		rowMin[i] = 999999;
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] < rowMin[i]) 
				rowMin[i] = a[i][j];
			if (a[j][i] > colMax[i]) 
				colMax[i] = a[j][i];
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (rowMin[i] == colMax[j]) {
				cout << "鞍點在第" << i << "行，第" << j << "列"
					<< "\n值為: " << a[i][j] << endl;
			}
		}
	}
}

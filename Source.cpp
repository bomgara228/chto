#include<iostream>
using namespace std;
double aboba(int x, int y) {
	double q =( x + y) / 2.0;
	return q;
}
double amogus(int x, int y) {
	return sqrt(x * y);
}
int main() {
	/* Описать процедуру Mean(X, Y, AMean, GMean), вычисляющую
среднее арифметическое AMean = (X+Y)/2 и среднее геометрическое
GMean =√X·Y двух положительных чисел X и Y (X и Y — входные,
AMean и GMean — выходные параметры вещественного типа). С помощью
этой процедуры найти среднее арифметическое и среднее геометрическое
для пар (A, B), (A, C), (A, D), если даны A, B, C, D.*/
	int a,b,c,d;
	cin >> a >> b >> c>>d;
	
	cout <<endl << aboba(a, b) << ' ' << amogus(a,b) << endl;
	cout << aboba(a, c) << ' ' << amogus(a, c) << endl;
	cout << aboba(a, d) << ' ' << amogus(a, d) << endl;
	


	return 0;
}
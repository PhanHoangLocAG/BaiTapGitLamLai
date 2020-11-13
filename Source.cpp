#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b) {
	return a*b;
}
float thuong(int a, int b);
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout << "====================================";
	int p , q;
	cout << "\nNhap p: ";
	cin >> p;
	cout << "\nNhap q: ";
	cin >> q;
	cout << "\nTich cua p*q = " << tich(p,q);
	system("pause");
	return 0;
} 
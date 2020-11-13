#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b)
{
	if(a==0)
		return 0;
	else if(b==0)
		cout<<"Khong the chia cho 0";
	else
		return a/b;	
}
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	int a,b;
	cout<<"Nhap a:";
	cin>>a;
	cout<<"Nhap b:";
	cin>>b;
	cout<<"Ket qua a chia b:"<<thuong(a,b);
	system("pause");
	return 0;
} 
#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b)
{
	return a-b;
}
int tich(int a, int b) {
	return a*b;
}
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
	int a,b;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout<<"\nNhap a:";
	cin>>a;
	cout<<"\nNhap b:";
	cin>>b;
	cout<<"Hieu la: "<<hieu(a,b);
	cout << "\nTich la: " << tich(a,b);
	cout<<"Thuong a chia b la: "<<thuong(a,b);
	system("pause");
	return 0;
} 
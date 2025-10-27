#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);

int tong (int a,int b){
    return a+b;
}
int hieu(int a,int b){
	return a+b;
}
int main()
{
    int a,b;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
    cout<<"nhap vao a: "; cin>>a;
    cout<<"nhap vao b: "; cin>>b;
    cout<<"tong cua a va b la: "<<tong(a,b)<<endl;
	cout<<"Hieu= "<<hieu(a,b)<<endl;
	system("pause");
	return 0;
}

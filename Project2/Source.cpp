#include<iostream>
#include<clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a, b, c, d;
	cout << "������� 3 ��������� " << endl;
	cin >> a >> b >> c;
	d = a + b + c;
	cout << "�����: " <<d<<endl;
	system("Pause");

}
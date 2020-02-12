#include<iostream>
#include<clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int a, b, c, d;
	cout << "Введите 3 слагаемых " << endl;
	cin >> a >> b >> c;
	d = a + b + c;
	cout << "Сумма: " <<d<<endl;
	system("Pause");



}
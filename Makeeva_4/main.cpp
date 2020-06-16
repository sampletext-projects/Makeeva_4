#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");

	cout << "Программу сделала Гузь Ева Евгеньевна УМЛ - 111\n";
	cout << "Программа для вычисления таблицы функции\n";

	for (double x = 0; x <= 0.9; x += 0.1)
	{
		double y = 1;
		for (int a = 0; a <= 10; a++)
		{
			y *= x - 0.5 * a;
		}
		cout << "Y(" << x << ") = " << y << "\n";
	}

	system("pause");

	return 0;
}

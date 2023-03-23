#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	const int SIZE = 100;
	int x[SIZE][SIZE];
	int n, m, max, count = 0, proz = 1;
	int G;
	cout << "Введите число строк массива (макс.100): ";
	cin >> m;
	cout << "Введите число столбцов массива (макс.100): ";
	cin >> n;
	cout << endl << "Введите элементы массива: " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> x[i][j];
		}
	}
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		count = 0;
		for (int j = 0; j < m; j++)
		{
			if (count == 0)
			{
				max = x[j][i];
				count++;
			}
			else
			{
				if (x[j][i] > max)
				{
					max = x[j][i];
				}
			}
		}
		proz *= max;
	}
	cout << endl << "Произведение максимальных элементов столбцов " << proz;
	cout << endl << endl;
	system("pause");
}
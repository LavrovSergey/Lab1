#include "Header.h"
#include<iostream>
using namespace std;
int l5()
{
	setlocale(LC_ALL, "Russian");
	int N;
	cout << "Введите число N. Не больше 1000 ";
	cin >> N;
	while (N > 1000) {
		cout << "Слишком большое. Максимум 1000";
		cin >> N;
	}
	for (int x = 0; x < N; ++x)
	{
		for (int y = 1; y < N; ++y)
		{
			for (int z = 2; z < N; ++z)
			{
				if ((x * x + y * y - z * z == 0) &&
					(x < y) &&
					(y < z))
				{
					std::cout << x << ", \t" << y << ", \t" << z << "\n";
				}
			}
		}
	}


	return 0;
}
string Sum(string s1, string s2)
{
	int n1 = s1.length(), n2 = s2.length();//находим длину
	if (n1 > n2) {
		swap(s1, s2);
		swap(n1, n2);
	}
	string s3;//строка для записи результата
	//переворот строк
	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());
	int octatok = 0;
	for (int i = 0; i < n1; i++)
	{
		int sum = ((s1[i] - '0') + (s2[i] - '0') + octatok);
		s3.push_back(sum % 10 + '0');
		octatok = sum / 10;
	}
	for (int i = n1; i < n2; i++)
	{
		int sum = ((s2[i] - '0') + octatok);
		s3.push_back(sum % 10 + '0');
		octatok = sum / 10;
	}
	if (octatok) s3.push_back(octatok + '0');
	reverse(s3.begin(), s3.end());
	return s3;
}
int l13()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите числа, которые надо сложить"<<endl;
	string s1;
	string s2;
	cin >> s1 >> s2;
	cout << Sum(s1, s2);
	return 0;

}
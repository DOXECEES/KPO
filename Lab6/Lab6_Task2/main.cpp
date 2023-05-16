
#include <iostream>
#include <vector>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	int n;
	std::vector<int> primes;
	std::cout << "Введите границу поиска " << std::endl;
	std::cin >> n;

	int curStep = 2;

	std::vector<bool> arr(n+1, true);

	for (int i = 2; i <= n; i++)
	{
		if (arr[i] == true)
		{
			primes.push_back(i);

			for (int j = i * i; j <= n; j += i)
			{
				arr[j] = false;
			}
		}
	}

	std::cout << "Простые числа " << std::endl;

	for (auto i: primes)
	{
		std::cout << i << " ";
	}






}
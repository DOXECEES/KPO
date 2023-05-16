
#include <iostream>
#include <vector>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	size_t vecSize;
	std::vector<int> vec;

	std::cout << "Введите количество чисел" << std::endl;
	std::cin >> vecSize;

	for (int i = 0; i < vecSize; i++)
	{
		int input;
		std::cin >> input;
		vec.push_back(input);
	}

	std::vector<int> result;
	std::vector<int> tempResult;
	int ans = vec[0];
	int sum = 0;
	

	for (int i = 0; i < vec.size(); ++i) 
	{
		sum += vec[i];
		tempResult.push_back(vec[i]);

		if (sum > ans) {
			ans = sum;
			result = tempResult;
		}

		if (sum < 0) 
		{
			sum = 0;
			tempResult.clear();
		}
	}

	std::cout << "Максимальная последовательность равна " << std::endl;

	for (auto i : result)
	{
		std::cout << i << " ";
	}

}
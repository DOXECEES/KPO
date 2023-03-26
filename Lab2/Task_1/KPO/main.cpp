#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <Windows.h>

void sort(std::vector<std::string>& vec);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::vector<std::string> vecOfBinaryStrings;
	std::string input;
	int size;
	std::cout << "¬ведите число строк" << std::endl;
	std::cin >> size;

	std::cout << "¬ведите строки" << std::endl;
	for (int i = 0; i < size; ++i)
	{
		std::cin >> input;
		vecOfBinaryStrings.push_back(input);
	}

	sort(vecOfBinaryStrings);

	std::cout << "ќтсортированный массив" << std::endl;

	for (int i = 0; i < size; ++i)
	{
		std::cout << vecOfBinaryStrings[i] << std::endl;
	}

}


void sort(std::vector<std::string>& vec)
{
	std::string temp;

	for (int i = 0; i < vec.size() - 1; i++)
	{
		for (int j = 0; j <vec.size() - i - 1; j++)
		{
			if (vec[j].size() < vec[j + 1].size())
			{
				temp = vec[j];
				vec[j] = vec[j + 1];
				vec[j + 1] = temp;
				continue;
			}
			if (vec[j].compare(vec[j + 1]) < 0)
			{
				temp = vec[j];
				vec[j] = vec[j + 1];
				vec[j + 1] = temp;
				continue;
			}
		}
	}

}
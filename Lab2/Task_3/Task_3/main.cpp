#include <iostream>
#include<string>

int Sum(int n)
{
	int result = 0;
	

	std::string nOnString = std::to_string(n);

	nOnString += nOnString;

	for (int i = 1; i < n; ++i)
	{
		std::string temp;
		temp = std::to_string(i);
		temp += temp;

		result += std::stoi(temp);
	}

	result += std::stoi(nOnString);
	return result;
}



int main()
{
	int n;
	std::cin >> n;
	std::cout << Sum(n);
}
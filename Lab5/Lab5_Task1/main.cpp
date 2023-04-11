

#include <iostream>
#include <stack>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	bool isOrderCorrect = true;
	std::stack<char> brackets;

	std::string str;

	std::cout << "Введите строку " << std::endl;
	std::cin >> str;

	for (auto i : str)
	{
		if (i == '{' || i == '[' || i == '(')
		{
			brackets.push(i);
			continue;
		}
		
		if (i == '}' || i == ']' || i == ')')
		{
			if (brackets.empty())
			{
				isOrderCorrect = false;
				break;
			}
			
			if((brackets.top() == '(' && i == ')') ||
				(brackets.top() == '{' && i == '}') ||
				(brackets.top() == '[' && i == ']'))
			{
				brackets.pop();

			}
			else
			{
				isOrderCorrect = false;
				break;
			}

		}
		
	}

	if (brackets.size() != 0)
	{
		isOrderCorrect = false;
	}


	if(isOrderCorrect == true)
		std::cout << "Строка " << str << " правильная" << std::endl;
	else 
		std::cout << "Строка " << str << " не правильная" << std::endl;


}


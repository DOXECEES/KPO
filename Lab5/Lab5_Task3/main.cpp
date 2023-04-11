
#include <chrono>
#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <Windows.h>
#include <string>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int amountOfInputData = 0;
	std::size_t offset = 0;
	std::unordered_map <std::string, std::chrono::year_month_day> map;
	std::unordered_set<std::string> names;
	std::chrono::year_month_day date;
	std::string str;

	std::cout << "¬ведите количество данных" << std::endl;
	std::cin >> amountOfInputData;

	std::cin.ignore(1);

	for (int i = 0; i < amountOfInputData; ++i)
	{
		std::getline(std::cin, str);
		names.insert(str.substr(0, str.find('Ц', 0)));
		offset = str.find('Ц', 0);

		std::string temp;
		temp = str.substr(offset+2, str.length()-1);


		int year;
		int month;
		int day;

		day = std::stoi(temp.substr(0,2));
		month = std::stoi(temp.substr(3,4 ));
		year = std::stoi(temp.substr(6, 9));
		temp.clear();

		date = (std::chrono::year(year) / std::chrono::month(month) / std::chrono::day(day));

		temp = str.substr(0, str.find('Ц', 0));

		if (names.find(temp) != names.end())
		{
			if (map[temp] < date)
			{
				map[temp] = date;
			}
		}

	}

	std::cout << std::endl;
	
	for (auto i : map)
	{
		std::cout <<i.first << "- " << i.second.day() << "." << static_cast<unsigned>(i.second.month()) << "." << i.second.year() << std::endl;
	}


}
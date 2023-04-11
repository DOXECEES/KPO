

#include <Windows.h>
#include <iostream>
#include <string>
#include <unordered_set>

void RemovePunctuation(std::string &str)
{
	str.erase(std::remove(str.begin(), str.end(), ','), str.end());
	str.erase(std::remove(str.begin(), str.end(), '{'), str.end());
	str.erase(std::remove(str.begin(), str.end(), '}'), str.end());
	str.erase(std::remove(str.begin(), str.end(), '['), str.end());
	str.erase(std::remove(str.begin(), str.end(), ']'), str.end());
	str.erase(std::remove(str.begin(), str.end(), '('), str.end());
	str.erase(std::remove(str.begin(), str.end(), ')'), str.end());
	str.erase(std::remove(str.begin(), str.end(), '.'), str.end());
	str.erase(std::remove(str.begin(), str.end(), ':'), str.end());
	str.erase(std::remove(str.begin(), str.end(), ';'), str.end());
	str.erase(std::remove(str.begin(), str.end(), '»'), str.end());
	str.erase(std::remove(str.begin(), str.end(), '«'), str.end());
	str.erase(std::remove(str.begin(), str.end(), ' '), str.end());
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);	
	std::string str;
	int offset = 0;
	std::string temp;
	
	std::unordered_set<std::string> words;

	
	std::getline(std::cin, str);
	
	for (auto i : str)
	{
		if (i == ' ')
		{
			RemovePunctuation(temp);
			words.insert(temp);
			temp.clear();
			continue;
		}
		temp += i;
	}
	
	for (auto i : words)
	{
		std::cout << i << std::endl;
	}

}

#include <iostream>
#include <set>
#include <fstream>
#include <unordered_map>
#include <windows.h>
#include <algorithm>


bool Compare(const std::pair<std::string, int>& a, const std::pair<std::string, int >& b)
{
	return b.second < a.second;
}


void SortMap(std::unordered_map<std::string, int>& map)
{
	std::vector<std::pair<std::string,int>> vec;
	for (auto i : map) {
		vec.push_back(make_pair(i.first, i.second));
	}

	sort(vec.begin(), vec.end(), Compare);

	for (auto v : vec) {
		std::cout << v.second << " " << v.first << std::endl;
	}
	
}


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
	setlocale(LC_ALL, "rus");

	std::ifstream file;
	std::set<std::string> setOfWords;
	std::unordered_map<std::string, int> numberOfRepetitionsOfWords;


	file.open("C:\\rep\\KPO\\Lab4\\test.txt");
	std::string temp;

	while (file >> temp)
	{

		RemovePunctuation(temp);
		
		// Если в setOfWords нет прочитаного слова, то добавляем его
		// и устанавливаем количество повторений в 1
		if (setOfWords.find(temp) == setOfWords.end() && static_cast<int>(temp[0]) != 0x20)
		{
			setOfWords.insert(temp);
			numberOfRepetitionsOfWords[temp] = 1;
			temp.clear();
		}
		else
		{
			numberOfRepetitionsOfWords[temp] += 1;
			temp.clear();
		}

	}
	
	SortMap(numberOfRepetitionsOfWords);


}



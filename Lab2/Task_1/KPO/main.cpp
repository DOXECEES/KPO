#include "main.h" 

int main()
{

}

int BinToDec(std::string str)
{
	int dec = 0;

	for (int i = 2; i < str.size(); ++i)
	{
		dec += (str[i] - 48) * static_cast<int>(pow(2, str.size() - i - 1));
	}

	return dec;
}

void sort(std::vector<std::string>& vec)
{
	std::string temp;

	for (int i = 0; i < vec.size() - 1; i++)
	{
		for (int j = 0; j <vec.size() - i - 1; j++)
		{
			
			if (BinToDec(vec[j]) < BinToDec(vec[j+1]))
			{
				temp = vec[j];
				vec[j] = vec[j + 1];
				vec[j + 1] = temp;
			}
		}
	}

}
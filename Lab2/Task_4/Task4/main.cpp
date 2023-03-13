#include <iostream>
#include <vector>

bool MultipleOfFour(const std::vector<float> &vec)
{
	int lessThan5055f = 0;

	for (std::vector<float>::const_iterator i = vec.cbegin(); i != vec.cend(); ++i)
	{
		if (*i < 50.55f)
		{
			lessThan5055f++;
		}
	}

	if(lessThan5055f == 0)
	{
		return false;
	}

	if (lessThan5055f % 4 != 0) 
	{
		return false;
	}

	return true;
}



int main()
{

}
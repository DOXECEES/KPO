#include "../Task_2/main.h"

uint64_t FindFibonachiByRecurtion(int number)
{
	if (number == 0)
		return 0;
	if (number == 1)
		return 1; 
	return FindFibonachiByRecurtion(number - 1) + FindFibonachiByRecurtion(number - 2);

}

uint64_t FindFibonachi(int number)
{
	std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
	uint64_t number1 = 0;
	uint64_t number2 = 1;
	if (number == 0)
	{
		return 0;
	}

	for (int i = 1; i < number; ++i)
	{
		number2 = number1 + number2;
		number1 = number2 - number1;
	}

	std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

	std::cout << "Время выполнения функции без рекурсии : "
		<< std::chrono::duration_cast<std::chrono::seconds>(end - begin).count()
		<< " секунд "
		<< std::chrono::duration_cast<std::chrono::milliseconds>(end - begin).count()
		<< " миллисекунд "
		<< std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count()
		<< " микросекунд "
		<< std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count()
		<< " наносекунд "
		<< std::endl;

	return number2;

}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n;

	std::cout << "Введите номер числа Фибоначчи" << std::endl;
	std::cin >> n;

	std::cout << "Результат : " << FindFibonachi(n) << std::endl;

	std::cout << std::endl;

	std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
	std::cout << "Результат : " << FindFibonachiByRecurtion(n) << std::endl;

	std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

	std::cout << "Время выполнения функции c рекурсией : "
		<< std::chrono::duration_cast<std::chrono::seconds>(end - begin).count()
		<< " секунд "
		<< std::chrono::duration_cast<std::chrono::milliseconds>(end - begin).count()
		<< " миллисекунд "
		<< std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count()
		<< " микросекунд "
		<< std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count()
		<< " наносекунд "
		<< std::endl;

}
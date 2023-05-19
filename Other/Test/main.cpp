
#include <string>
#include <iostream>
#include <vector>
#include <windows.h>
#include <tuple>

std::tuple<int,int,int> FindDevider(int min,int max)
{
    int deviderCount = 0;
    int maxDevider   = 0;
    int minVal       = MAXINT;
    int maxVal       = 0;
    int temp         = 0;

    while (min <= max)
    {
        for (int i = 1; i <= min; i++)
        {
            if (min % i == 0)
                deviderCount++;
        }

        if (deviderCount == maxDevider)
        {
            if (deviderCount > temp)
            {
                minVal = MAXINT;
            }

            if (minVal > min)
                minVal = maxVal;

            temp = deviderCount;
        }

        if (deviderCount >= maxDevider)
        {

            if (min >= maxVal)
                maxVal = min;

            if (min < maxVal && deviderCount == maxDevider)
                minVal = min;

            maxDevider = deviderCount;

        }
        
        min++;
        deviderCount = 0;
    }


    return { maxVal ,minVal,maxDevider };
}


bool Input(int& min, int& max)
{
    std::cin >> min;
    std::cin >> max;

    std::cout << '[' << min << ", " << max << "]" << std::endl;

    if (min < 1 || max < 0)
    {
        std::cout << "Ошибка! Введён неверный интервал. Повторите действие ёще раз:  " << std::endl;
        return false;
    }

    return true;
}




int main()
{   
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    int intervalMin = 0;
    int intervalMax = 0;

    std::cout << "Введите интервал натуральных чисел от а до b" << std::endl;

    if (!Input(intervalMin, intervalMax))
        Input(intervalMin, intervalMax);


    const auto [max,min,devider] = FindDevider(intervalMin, intervalMax);

    std::cout << std::endl;

    std::cout << "Число с максимальным количеством делителей: " <<
        max << std::endl <<
        "Минимальное из чисел с максимальным количеством делителей: " <<
        min << std::endl <<
        "Количество делителей: " <<
        devider << std::endl;

}


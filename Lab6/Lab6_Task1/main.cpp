

#include <iostream>
#include <vector>
#include <random>
#include <windows.h>

int Partition(std::vector<int>& arr, int left, int right) 
{
    if (left != right)
        std::swap(arr[left + rand() % (right - left)], arr[right]);
    
    int x = arr[right];
    int i = left - 1;
    
    for (int j = left; j <= right; j++) 
    {
        if (arr[j] <= x)
            std::swap(arr[++i], arr[j]);
    }
    return i;
}


int nth(std::vector<int> arr, int k) 
{
    int left = 0;
    int right = arr.size() - 1;

    while(true) 
    {
        int pivot = Partition(arr, left, right);

        if (pivot < k)
            left = pivot + 1;
        else if (pivot > k)
            right = pivot - 1;
        else 
            return arr[k];
    }
}


int main()
{	
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    srand(time(0));

    std::vector<int> arr;

    for (int i = 0; i < 100; i++)
    {
        arr.push_back(1 + rand() % 200);
    }
	


    std::cout << "4 Максимальных элемента в массиве равны: " << std::endl;

    std::cout << nth(arr, arr.size() - 1) << std::endl;
    std::cout << nth(arr, arr.size() - 2) << std::endl;
    std::cout << nth(arr, arr.size() - 3) << std::endl;
    std::cout << nth(arr, arr.size() - 4) << std::endl;

    std::cout << std::endl;
    std::cout << "Элементы в массиве: " << std::endl;

    for (auto i : arr)
    {
        std::cout << i << " ";
    }







}
#include <iostream>


int main()
{
    int n;
    std::cout << "Количество элементов массива: ";
    std::cin >> n;
    int *arr{new int[n]{}};
    std::cout << "Введите элементы массива: ";
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    //insertion_sort

    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }

    std::cout << "\n";
    delete[] arr;
    return 0;
}
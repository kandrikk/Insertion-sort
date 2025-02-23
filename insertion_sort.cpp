#include <iostream>

void insertion_sort(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j > -1 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = key;
    }
}

int main()
{
    int n;
    std::cout << "Количество элементов массива: ";
    std::cin >> n;
    int *arr = new int [n];
    std::cout << "Введите элементы массива: ";
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    insertion_sort(arr, n);
    
    std::cout << "Отсортированный массив: ";

    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }

    std::cout << "\n";
    delete[] arr;
    return 0;
}
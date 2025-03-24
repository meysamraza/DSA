#include<iostream>
using namespace std;
void display(int arr[], const int& size)
{
    cout << "sorted array : " << "\n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
void sort(int arr[], const int& size)
{
    int temp = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    display(arr, size);
}
int main()
{
    const int size = 5;
    int arr[size] = { 17,28,223,45,56 };
    sort(arr, size);
}

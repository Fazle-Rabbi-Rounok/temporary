// inserting an element in an array
#include <iostream>
using namespace std;
int main()
{
    int size = 5;
    int arr[size] = {1, 2, 4, 5, 6};
    int element = 3;
    int index = 2;
    for (int i = size - 2; i >= index; i--)
        arr[i + 1] = arr[i];
    arr[index] = element;
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

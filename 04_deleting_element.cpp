// deleting an element from an array
#include <iostream>
using namespace std;
int main()
{
    int size = 6;
    int arr[size] = {1, 2, 3, 4, 5, 6};
    int index = 2;
    for (int i = index; i < size - 1; i++)
        arr[i] = arr[i + 1];
    arr[5] = 0;
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

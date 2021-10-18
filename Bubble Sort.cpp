
#include <bits/stdc++.h>
using namespace std;
void Bubble_Sort(int arr[], int size)
{
    int temp;
    for (int round = 1; round <= size - 1; round++)
    {
        for (int i = 0; i <= size - round - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                //Swap
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}

int main()
{
    int size = 10;
    int arr[size] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    Bubble_Sort(arr, size);
    for (int i = 0; i < size; i++)
    {
        printf("%d \t", arr[i]);
    }
    int github=100;
    cout<<github<<endl;
}

#include <iostream>
#include <algorithm> 
using namespace std;
void Sorting(int arr[], int size)
{
    if (size > 2)
    {

        for (int k = 0; k < size - 1;k++)
        {
            for (int i = k + 1;i < size;i++)
            {
                if (arr[k] > arr[i])
                    swap(arr[k], arr[i]);
            }
        }
    }
}
bool Test()
{
   
    int arr[10];
    int cpy[10];
    bool Flag = true;
    for (int i = 0; i < 1000;i++)
    {
        for (int j = 0; j < 10;j++)
        {
            cpy[j] = arr[j] = rand() % 100;

        }
        Sorting(arr, 10);
        sort(cpy, cpy + 10);
        for (int i = 0; i < 10; i++)
        {
            Flag &= (arr[i] == cpy[i]);
        }

    }return Flag;
}
int main()
{
    bool test = Test();
    cout << test;
}


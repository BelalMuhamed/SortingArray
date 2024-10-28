#include <iostream>
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
int main()
{
   
}


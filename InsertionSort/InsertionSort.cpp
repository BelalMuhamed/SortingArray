#include <iostream>
#include <algorithm> 
using namespace std;

void Sort(int arr[], int size)
{
    int cpy,j;
    for (int i = 1;i < size;i++)
    {
        cpy = arr[i];
        j = i - 1;
        for (;j >= 0;j--)
        {
            if (arr[j] < cpy)
                break;
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = cpy;
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
        Sort(arr, 10);
        sort(cpy, cpy + 10);
        for (int i = 0; i < 10; i++)
        {
            Flag &= (arr[i] == cpy[i]);
        }

    }return Flag;
}
int main()
{
  bool flag =  Test();
  cout << flag;

}


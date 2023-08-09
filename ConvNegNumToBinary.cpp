#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int m, rem;
    int arr1[32] = {0};

    cout << "Enter a Negative number for convert into binary number" << endl;
    cin >> m;
    int n1 = (m * -1);
    int i = 0;
    while (n1 != 0)
    {
        rem = n1 % 2;
        n1 = n1 / 2;
        arr1[i] = rem;
        i++;
    }

    int arr[32] = {0};
    int j = 0;

    for (int i = 31; i >= 0; i--)
    {
        arr[j] = arr1[i];
        j++;
    }
    cout << "Before 2's complement " << endl;
    for (int j = 0; j < 32; j++)
    {
        cout << arr[j] << " ";
    }
    int sum = 0;

    for (int i = 31; i >= 0; i--)
    {
        sum += 1;
        if (arr[i] == 0)
        {
            continue;
        }
        if (arr[i] == 1)
        {
            break;
        }
    }
    for (int i = 31 - sum; i >= 0; i--)
    {
        if (arr[i] == 1)
        {
            arr[i] = 0;
        }
        else
        {
            arr[i] = 1;
        }
    }
    cout<<endl;
    cout << "After 2's complement " << endl;
    for (int i = 0; i < 32; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
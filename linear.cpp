#include <iostream>
using namespace std;


int linearSearch(int array[], int size, int searchValue)
{
    for(int i = 0; i < size; i++)
    {
        if (searchValue == array[i]) //element value compare
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int a[] = {5, 3, 7, 15, 100};
    int userinput;

    cout << "Enter an integer: " << endl;
    cin >> userinput;

    int result = linearSearch(a, 5, userinput);

    if(result >= 0)
    {
        cout << "The number " << a[result] << " was found at the"
                " element with index " << result << endl;
    }
    else
    {
        cout << "The number " << userinput << " was not found. " << endl;
    }

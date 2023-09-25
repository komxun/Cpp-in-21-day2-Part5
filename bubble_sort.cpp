#include <iostream>
using namespace std;

int main()
{
    int i, j, temp;
    int a[5] = {10, 2, 0, 32, 12};
    cout << "Input List : " << endl;
    for (i=0; i<5; i++)
    {
        cout << a[i] << "  ";
    }

    // Bubble Sorting
    for(i=0; i<5; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }

    // Display
    cout << "\nSorted Elemented List: " << endl;
    for (i=0; i<5; i++)
    {
        cout << a[i] << "  ";
    }
    return 0;
}
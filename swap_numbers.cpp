/*Given an array,a, of size n distinct elements, 
sort the array in ascending order using the Bubble Sort algorithm above.
Once sorted, print the following 3 lines:

        Array is sorted in numSwaps swaps.
            where  numSwaps is the number of swaps that took place.
        First Element: firstElement
            where first element is the first element in the sorted array.
        Last Element: lastElement
            where lastElement is the last element in the sorted array.
            ex.     original a: 4 3 1 2
                    round 1  a: 3 1 2 4 swaps this round: 3
                    round 2  a: 1 2 3 4 swaps this round: 2
                    round 3  a: 1 2 3 4 swaps this round: 0     */
#include <iostream>

using namespace std;
int main()
{
    int t,swapc=0;
    cin >> t;
    int d[t];
    for (int i = 0; i < t; i++)
    {
        cin >> d[i];
    }
    cout <<"Before array:";
    for (int i = 0; i < t; i++)
    {
        cout << d[i];
    }
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t - 1; j++)
        {
            if (d[j] > d[j + 1])
            {
                swap(d[j], d[j + 1]);
                swapc++;
            }
        }
        if (swapc == 0)
        {
            break;
        }
        }
        cout << "Array is sorted in " << swapc << " swaps." << endl;
        cout << "First Element: " << d[0] << endl;
        cout << "Lasts Element: " << d[t - 1] << endl;

    cout <<"After array:";
    for (int i = 0; i < t; i++)
    {
       cout << d[i]<<" ";
    }
    return 0;
}
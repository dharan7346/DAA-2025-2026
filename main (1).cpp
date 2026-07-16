#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    // Process Starts
    clock_t start = clock();

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Process Ends
    clock_t end = clock();

    cout << "\nSorted Array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << "\n\n----------- Time Analysis -----------";
    cout << "\nProcess Start Time : " << start << " clock ticks";
    cout << "\nProcess End Time   : " << end << " clock ticks";
    cout << "\nTotal Execution Time : "
         << (double)(end - start) / CLOCKS_PER_SEC
         << " seconds";

    return 0;
}
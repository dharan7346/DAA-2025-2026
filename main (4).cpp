#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int n, i, j, key;

    cout << "\n===== Insertion Sort =====\n";

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements:\n";
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Start Time
    clock_t start = clock();

    // Insertion Sort Process
    for(i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }

    // End Time
    clock_t end = clock();

    cout << "\nSorted Array: ";
    for(i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n\n========== Time Analysis ==========";
    cout << "\nStarting Time (Clock Ticks): " << start;
    cout << "\nEnding Time   (Clock Ticks): " << end;
    cout << "\nExecution Time: "
         << (double)(end - start) / CLOCKS_PER_SEC
         << " Seconds";

    return 0;
}
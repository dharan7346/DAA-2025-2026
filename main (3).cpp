/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int n, i, j, minIndex, temp;

    cout << "\n===== Selection Sort =====\n";

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

    // Selection Sort Process
    for(i = 0; i < n - 1; i++)
    {
        minIndex = i;

        for(j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
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

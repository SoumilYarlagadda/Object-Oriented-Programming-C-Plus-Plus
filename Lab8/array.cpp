#include <iostream>
#include <vector>

using namespace std;

void printMemArr(const int * arr, int size)
{

    printf("Array -  each int is worth %lu bytes\n", sizeof(arr[0]));
    for (int i = 0; i < size; i++)
    {
        printf("Value : %i at Memory Location: %p\n", arr[i], arr + i);
    }
}

void incArrBy10(int * arr, int size)
{

    for (int i = 0; i < size; i++)
    {
        arr[i] += 10;
    }
}

int main()
{
    const int SIZE = 5;
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++)
    {

        arr[i] = 100 + i;
    }
    printf("Before------------\n");
    printMemArr(arr, SIZE);
    incArrBy10(arr, SIZE);
    printf("After------------\n");
    printMemArr(arr, SIZE);
    // Calculate the difference between the memory addresses of the last element and the first element
    uintptr_t addressDifference = reinterpret_cast<uintptr_t>(&arr[SIZE - 1]) - reinterpret_cast<uintptr_t>(&arr[0]);
    
    // Calculate the size of each element in bytes
    size_t elementSize = sizeof(arr[0]);
    
    // Calculate the size of the array
    size_t arraySize = SIZE;

    // Calculate the total memory difference
    size_t totalMemoryDifference = addressDifference * arraySize;

    cout << "Memory Difference: " << totalMemoryDifference << " bytes" << endl;
    return 0;
}


#include <iostream>
#include <cstdlib>
using namespace std;


int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

void fillArrWithNumbers(int arr[100], int& length)
{
    cout << "How Many Elements of Array?\n";
    cin >> length;

    for (int i = 0; i < length; i++)
        arr[i] = RandomNumber(-100, 100);
}


int countPositiveNumbersInArray(int arr[100], int length)
{
    int counter = 0;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] > 0)
            counter++;
    }
    return counter;
}

void printArray(int arr[100], int length)
{
    cout << "Array Elements: ";
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n ";
    cout << "Positive numbers count is : " << countPositiveNumbersInArray(arr, length);
    cout << "\n ";
}



int main()
{
    srand((unsigned)time(NULL));

    int arr[100], length;

    fillArrWithNumbers(arr, length);
    printArray(arr, length);



    return main();

}
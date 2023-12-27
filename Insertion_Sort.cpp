#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;

void insertion_sort(vector<int> &unsorted_array)
{
    int i, j, temp;

    for (i = 1; i < unsorted_array.size(); i++) // For traversing
    {
        temp = unsorted_array[i];

        for (j = i - 1; j >= 0; j--) // For data shifting purpose
        {
            if (temp < unsorted_array[j])                  // If condition is true then shift
                unsorted_array[j + 1] = unsorted_array[j]; // Shifting code
            else
                break; // If temp >= unsorted_array[j] then break
        }
        unsorted_array[j + 1] = temp;
    }
}

int main(void)
{
    char type;
    vector<int> array;
    int size = 0, input = 0;

    cout << "\nEnter the number of elements : \t";
    cin >> size;

    cout << "\nEnter the elements : \n";
    for (int i = 0; i < size; i++)
    {
        cin >> input;
        array.push_back(input);
    }

    insertion_sort(array);

    cout << "\nSorted elements are : ";
    for (int i = 0; i < array.size(); i++)
        cout << array[i] << " ";

    return 0;
}

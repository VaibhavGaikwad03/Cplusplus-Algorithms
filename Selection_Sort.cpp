#include <iostream>
#include <vector>
#include <algorithm>
using std::cin;
using std::cout;
using std::swap;
using std::vector;

void selection_sort(vector<int> &unsorted_array)
{
    for (int i = 0; i < unsorted_array.size() - 1; i++) //Traverse linearly up to n - 1
    {
        int min_index = i;

        for (int j = i + 1; j < unsorted_array.size(); j++) //Starting searching for smallest element from the frontward of 'i'
        {
            if (unsorted_array[j] < unsorted_array[min_index])      //If there is minimum element in array assign that minimum element index to min_index variable
                min_index = j;
        }
        //For making more efficient
        if (min_index == i)         //If array already sorted then break the loop      
            break;
        swap(unsorted_array[i], unsorted_array[min_index]);
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

    selection_sort(array);

    cout << "\nSorted array is : ";
    for (int i = 0; i < array.size(); i++)
        cout << array[i] << " ";

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using std::cin;
using std::cout;
using std::swap;
using std::vector;

void bubble_sort(vector<int> &unsorted_array, char type)
{
    for (int i = 1; i <= unsorted_array.size(); i++)
    {
        for (int j = 0; j < unsorted_array.size()-i; j++)   //n-i (i is displacement)
        {
            if (type == 'I' || type == 'i')     //If user wants to sort in increasing order
            {
                if (unsorted_array[j] > unsorted_array[j+1])
                    swap(unsorted_array[j], unsorted_array[j + 1]);
                continue;
            }
            //If user wants to sort in decreasing order
            if (unsorted_array[j] < unsorted_array[j+1])
                swap(unsorted_array[j], unsorted_array[j + 1]);
        }
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

    while (type != 'I' && type != 'i' && type != 'd' && type != 'D')
    {
        cout << "\nIn which order you want to sort array ? (i/d)\n";
        cin >> type;
    }

    bubble_sort(array, type);

    for (int i = 0; i < array.size(); i++)
        cout << array[i] << " ";

    return 0;
}
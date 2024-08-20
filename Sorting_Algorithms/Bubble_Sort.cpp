#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;

/* Version 1 for bubble sorting starts */
void swap_v1(int *a, int *b)
{
    (*a) = ((*a) + (*b));
    (*b) = ((*a) - (*b));
    (*a) = ((*a) - (*b));
}
 
int *bubble_sort_v1(int *array, int length, char type = 'I')
{
    int i, j;

    for (i = 1; i <= length; i++)
    {
        for (j = 0; j < length - i; j++)
        {
            if ((type == 'I' || type == 'i')) /* For sorting in increasing order */
            {
                if (array[j + 1] < array[j])
                    swap_v1(&array[j + 1], &array[j]);
            }
            else /* For sorting in decreasing order */
            {
                if (array[j + 1] > array[j])
                    swap_v1(&array[j + 1], &array[j]);
            }
        }
    }
    return array;
}
/* Version 1 for bubble sorting ends */

/* Version 2 for bubble sorting starts */
void swap(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

vector<int> &bubble_sort_v2(vector<int> &array, char type = 'I')
{
    int i, j;
    int length = array.size();

    for (i = 1; i <= length; i++)
    {
        for (j = 0; j < length - i; j++)
        {
            if (type == 'I' || type == 'i') /* For sorting in increasing order */
            {
                if (array[j + 1] < array[j])
                    swap(array[j + 1], array[j]);
            }
            else /* For sorting in decreasing order */
            {
                if (array[j + 1] > array[j])
                    swap(array[j + 1], array[j]);
            }
        }
    }
    return array;
}
/* Version 2 for bubble sorting ends */

int main()
{
    int i, n, x;
    int *array_v1 = nullptr;
    vector<int> array_v2;

    cout << "\nEnter the number of elements: ";
    cin >> n;

    array_v1 = new int[n];

    if (array_v1 == nullptr)
        exit(EXIT_FAILURE);

    cout << "\nEnter the data: ";
    for (i = 0; i < n; i++)
    {
        cin >> x;
        array_v1[i] = x;
        array_v2.push_back(x);
    }

    bubble_sort_v1(array_v1, n);

    cout << "\nArray after sorting in "
         << "\'increasing\' order with \'version 1\': ";
    for (i = 0; i < n; i++)
        cout << array_v1[i] << " ";
    cout << '\n';

    bubble_sort_v1(array_v1, n, 'D');

    cout << "\nArray after sorting in "
         << "\'decreasing\' order with \'version 1\': ";
    for (i = 0; i < n; i++)
        cout << array_v1[i] << " ";
    cout << '\n';

    bubble_sort_v2(array_v2);

    cout << "\nArray after sorting in "
         << "\'increasing\' order with \'version 2\': ";
    for (i = 0; i < n; i++)
        cout << array_v2[i] << " ";
    cout << '\n';

    bubble_sort_v2(array_v2, 'D');

    cout << "\nArray after sorting in "
         << "\'decreasing\' order with \'version 2\': ";
    for (i = 0; i < n; i++)
        cout << array_v2[i] << " ";
    cout << '\n';

    return 0;
}

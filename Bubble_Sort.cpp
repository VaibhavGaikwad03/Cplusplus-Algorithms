#include<iostream>
using namespace std;

class Array
{
    public :
        int *Arr;
        int size;

        Array(int);
        void swap(int *, int *);
        void accept();
        void display();
        void bubbleSort(char);
};

Array::Array(int arrsize)       //allocating resources 
{
    this->size = arrsize;
    this->Arr = new int[arrsize];
}

void Array::swap(int *p, int *q)    //for swapping the array elements
{
    int temp = 0;

    temp = *p;
    *p = *q;
    *q = temp;
}

void Array::accept()       //to accept the input from the user
{
    cout<<"Enter the elements into the array : \n";
    for(int i = 0; i < size; i++)
    {
        cin>>Arr[i];
    }
}

void Array::display()       //to display data from array
{
    cout<<"Elements from array are : \n";
    for(int i = 0; i < size; i++)
    {
        cout<<Arr[i]<<" ";
    }
    cout<<endl;
}

void Array::bubbleSort(char type)       //to sort an array
{
    int i = 0, j = 0;

    if((type == 'I') || (type == 'i'))      //for increasing order
    {
        for(i = 0; i < size; i++)
        {
            for(j = 0; j < size - i - 1; j++)
            {
                if(Arr[j] > Arr[j + 1])
                {
                    swap(&Arr[j], &Arr[j+1]);
                }
            }
        }
    }
    else if((type == 'D') || (type == 'd'))     //for decreasing order
    {
        for(i = 0; i < size; i++)
        {
            for(j = 0; j < size - i - 1; j++)
            {
                if(Arr[j] < Arr[j + 1])
                {
                    swap(&Arr[j], &Arr[j+1]);
                }
            }
        }
    }
}

int main()
{
    int iSize = 0;
    char ch = '\0';

    cout<<"Enter the size of array : \n";
    cin>>iSize;

    Array obj(iSize);
    obj.accept();
    obj.display();

    cout<<"Enter \"I\" for Increasing order or Enter \"D\" for Decreasing order"<<endl;
    cin>>ch;

    obj.bubbleSort(ch);
    obj.display();

    return 0;
}
// Write a program in C++ to sort the numbers in an array using separate functions for read, display, sort and swap.
// NAME-Tejas Amol Ghadage
// PRN-B25ET1063

#include<iostream>
using namespace std;

// This function takes array elements from the user
void accept(int &a, int c[])
{
    cout<<"\nEnter number of array elements";
    cin>>a;

    cout<<"\nEnter array elements";
    for(int i=0;i<a;i++)
    {
        cin>>c[i];
    }
}

// This function displays the array
void display(int m,int arr1[])
{
    cout<<"The array is"<<endl;

    for(int i=0;i<m;i++)
    {
        cout<<arr1[i]<<endl;
    }
}

// This function sorts the array
void sort(int m,int arr1[])
{
    // Compare the array elements
    for(int i=0;i<m-1;i++)
    {
        for(int j=0;j<m-i-1;j++)
        {
            // Swap if the first number is bigger
            if(arr1[j] > arr1[j+1])
                swap(arr1[j], arr1[j+1]);
        }
    }
}

// This function swaps two numbers
void swap(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

int main()
{
    int n, arr[10];

    // Take array elements from the user
    accept(n, arr);

    cout << "\nthe unsorted array is" << endl;
    display(n, arr);

    // Sort the array
    sort(n, arr);

    cout << "\nthe sorted array is" << endl;
    display(n, arr);

    return 0;
}

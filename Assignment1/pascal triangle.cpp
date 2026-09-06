//Write a C++ program to print Pascal Triangle.
//NAME-Tejas Amol Ghadage
//PRN-B25ET1063
#include<iostream>
using namespace std;

// This function finds the factorial of a number
int fact(int p)
{
    int res=1;

    // Multiply the numbers from p to 2
    for(int i=p;i>1;i--)
    {
        res*=i;
    }

    return res;
}

// This function calculates the binomial coefficient
int BinoCoef(int n,int r)
{
    int coef;

    // Formula for nCr
    coef=fact(n)/(fact(r)*fact(n-r));

    return coef;
}

// This function prints the Pascal triangle
void printTriangle(int n)
{
    // Loop for each row
    for(int l=0;l<n;l++)
    {
        // Print the values in each row
        for(int m=0;m<=l;m++)
        {
            cout<<"\t"<<BinoCoef(l,m);
        }

        cout<<endl;
    }
}

int main()
{
    int rows;

    // Ask the user for number of rows
    cout<<"enter no of rows:";
    cin>>rows;

    // Call the function to print triangle
    printTriangle(rows);

    return 0;
}


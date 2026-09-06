// Find out the sum of even numbers between 1 to 50 using loops.
// NAME-Tejas Amol Ghadage
// PRN-B25ET1063

#include<iostream>
using namespace std;

int main()
{
    int sum=0,count=0;

    // Loop until 50 numbers are checked
    for(int i=1;count<50;i++)
    {
        // Check if the number is even
        if(i%2==0)
            sum=sum+i;

        count++;
    }

    // Display the final sum
    cout << "Sum of first 50 even numbers = " << sum<<endl;

    return 0;
}


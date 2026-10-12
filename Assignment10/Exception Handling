#include<iostream> 
using namespace std; 

int main()
{ 
    // Declare three integer variables
    int a, b, c; 

    // Ask the user to enter two numbers
    cout << "Enter two integer numbers for division \n"; 
    cin >> a >> b; 
    
    // Start the try block to check for errors
    try 
    { 
        // Check if the divisor is zero
        if(b == 0) 
        { 
            // Throw an exception because division by zero is not allowed
            throw b; 
        } 

        // Perform division if b is not zero
        c = a / b; 

        // Display the division result
        cout << "The division is \n" << c; 
    } 
    
    // Catch the exception if division by zero occurs
    catch (int x) 
    { 
        // Display an error message
        cout << "\nError: Cannot divide by " << 0; 
    } 

    // This statement runs after the try-catch block
    cout << "\nAfter the division operation"; 

    // End the program successfully
    return 0; 
}

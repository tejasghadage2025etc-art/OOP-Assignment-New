// Write a program in C++ to perform the following operations on complex numbers: Add, Subtract, Multiply, Divide and Complex Conjugate. Design a class for complex number representation and the operations to be performed.
// NAME-Tejas Amol Ghadage
// PRN-B25ET1063

#include<iostream>
using namespace std;

// Class for complex numbers
class complex
{
    public:
    double real,img;

    public:

    // This function accepts real and imaginary parts
    void accept(int r,int i)
    {
        real=r;
        img=i;
    }

    // This function displays the complex number
    void display()
    {
        if(img>=0)
            cout<<endl<<real<<"+i\t"<<img;
        else
            cout << endl << real << " - i" << -img;
    }

    // This function adds two complex numbers
    complex add(complex x)
    {
        complex sum;
        sum.real=real+x.real;
        sum.img=img+x.img;
        return sum;
    }

    // This function subtracts two complex numbers
    complex subtract(complex x)
    {
        complex sub;
        sub.real=real-x.real;
        sub.img=img-x.img;
        return sub;
    }

    // This function multiplies two complex numbers
    complex multiply(complex x)
    {
        complex mul;
        mul.real=real*x.real-img*x.img;
        mul.img=real*x.img+img*x.real;
        return mul;
    }

    // This function divides two complex numbers
    complex divide(complex x)
    {
        complex divide;
        int denominator=x.real*x.real+x.img*x.img;

        divide.real=((real*x.real)+(img*x.img))/denominator;
        divide.img=((img*x.real)-(real*x.img))/denominator;

        return divide;
    }
};

int main()
{
    complex c1,c2,c3;

    // Enter the first complex number
    c1.accept(4,3);
    c1.display();

    // Enter the second complex number
    c2.accept(3,2);
    c2.display();

    // Perform addition
    c3=c1.add(c2);

    // Perform subtraction
    c3=c1.subtract(c2);

    cout<<"\nadditon ";
    c3.display();

    cout<<"\nsubtraction ";
    c3.display();

    // Perform multiplication
    cout<<"\nmultiplication";
    c3=c1.multiply(c2);
    c3.display();

    // Perform division
    cout<<"\ndivision";
    c3=c1.divide(c2);
    c3.display();
}


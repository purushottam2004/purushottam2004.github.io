#include <iostream>
#include <vector>
using namespace std;

// classes are like structures but they have some extra features
// like they can have functions inside them
// they can have private and public variables
// they can have constructors and destructors

// defining a class
class complex_num{
    public :   // this keyword makes accessing the class variables possible outside the class
    int real;
    int imaginary;

    complex_num add(complex_num& num){
        // "this" keyword is a pointer which points to the object which is calling the function
        complex_num new_num;
        new_num.real = this->real + num.real;
        new_num.imaginary = this->imaginary + num.imaginary;
        return new_num;
    }
};


// using classes

int main(){
    // creating a object of a class
    complex_num num1;
    // accessing the variables of the class
    num1.real = 1;
    num1.imaginary = 2;

    // creating another object of the class
    complex_num num2;
    num2.real = 3;
    num2.imaginary = 4;

    // using methods of the class
    complex_num num3 = num1.add(num2);

    cout<<num3.real<<" + "<<num3.imaginary<<"i"<<endl;

    

}
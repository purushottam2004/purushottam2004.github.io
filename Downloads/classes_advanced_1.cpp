#include <iostream>
#include <vector>
using namespace std;

class complex_num{
    private: // the variables and functions declared in this block are private and cannot be accessed outside the class
    // only the class member functions can access the private variables
    int real;
    int imaginary;

    public:
    // the variables and functions declared in this block are public and can be accessed outside the class

    complex_num add(complex_num& num){
        // "this" keyword is a pointer which points to the object which is calling the function
        complex_num new_num;
        new_num.real = this->real + num.real;
        new_num.imaginary = this->imaginary + num.imaginary;
        return new_num;
    }

    complex_num subtract(complex_num& num){
        // "this" keyword is a pointer which points to the object which is calling the function
        complex_num new_num;
        new_num.real = this->real - num.real;
        new_num.imaginary = this->imaginary - num.imaginary;
        return new_num;
    }

    complex_num multiply(complex_num& num){
        // "this" keyword is a pointer which points to the object which is calling the function
        complex_num new_num;
        new_num.real = this->real * num.real - this->imaginary * num.imaginary;
        new_num.imaginary = this->real * num.imaginary + this->imaginary * num.real;
        return new_num;
    }

    int absolute_value(){
        return (this->real * this->real + this->imaginary * this->imaginary);
    }

// since the variables real and imaginary are private , we cannot access them outside the class
// cout<<num1.real is invalid outside the class
// hence we need to create a function which can access the private variables and return them
    int get_real(){
        return this->real;
    }

    int get_imaginary(){
        return this->imaginary;
    }

    int set_real(int real){
        this->real = real;
    }

    int set_imaginary(int imaginary){
        this->imaginary = imaginary;
    }

    // constructors and destructors
    // constructors are used to initialize the variables of the class
    // like vector<int> vec(5) , this constructor initializes the vector with 5 elements
    // similarly we can create a constructor for our class

    //creating a constructor
    complex_num(int real,int imaginary){
        this->real = real;
        this->imaginary = imaginary;
    }

    // we can create multiple constructors for our class which takes different type of arguements
    // this is called constructor overloading
    // like vector<int> vec(5) , this constructor initializes the vector with 5 elements
    // like vector<int> vec(5,10) , this constructor initializes the vector with 5 elements with value 10
    // similarly we can create multiple constructors for our class

    complex_num(){
        this->real = 0;
        this->imaginary = 0;
    }


    // creating a destructor
    // destructors are used to delete the objects of the class
    // like delete(vec) , this destructor deletes the vector vec
    // similarly we can create a destructor for our class
    // destructor is called when the object is deleted from the memory
    ~complex_num(){
        cout<<"The object with real = "<<this->real<<" and imaginary = "<<this->imaginary<<" is deleted"<<endl;
    }
    // if you do not create a destructor , then the default destructor is called, which does nothing

    // copy constructor
    // copy constructor is used to copy the object into another object
    // like vector<int> vec1 = vec2 , this copies the vector vec2 into vec1
    // similarly we can create a copy constructor for our class
    // copy constructor is called when we create a object using another object
    // like complex_num num1 = num2 , this copies the object num2 into num1
    // if you do not create a copy constructor , then the default copy constructor is called, which copies the object into another object
    complex_num(complex_num& num){
        this->real = num.real;
        this->imaginary = num.imaginary;
    }

    // operator overloading
    // operator overloading is used to overload the operators
    // like we can overload the + operator to add two objects of the class
    // like we can overload the - operator to subtract two objects of the class


    // overloading the + operator
    complex_num operator+(complex_num& num){
        complex_num new_num;
        new_num.real = this->real + num.real;
        new_num.imaginary = this->imaginary + num.imaginary;
        return new_num;
    }

    // overloading the - operator
    complex_num operator-(complex_num& num){
        complex_num new_num;
        new_num.real = this->real - num.real;
        new_num.imaginary = this->imaginary - num.imaginary;
        return new_num;
    }

    // overloading the * operator
    complex_num operator*(complex_num& num){
        complex_num new_num;
        new_num.real = this->real * num.real - this->imaginary * num.imaginary;
        new_num.imaginary = this->real * num.imaginary + this->imaginary * num.real;
        return new_num;
    }

    // overloading the = operator
    complex_num operator=(complex_num& num){
        this->real = num.real;
        this->imaginary = num.imaginary;
        return *this;
    }

    // overloading the == operator
    bool operator==(complex_num& num){
        if(this->real == num.real && this->imaginary == num.imaginary){
            return true;
        }
        else{
            return false;
        }
    }

    // overloading the != operator
    bool operator!=(complex_num& num){
        if(this->real != num.real || this->imaginary != num.imaginary){
            return true;
        }
        else{
            return false;
        }
    }

    // similarly for other classes like in which comparision is possible , we can overload the comparision operators
    // like we can overload the < operator to compare two objects of the class
    // like we can overload the > operator to compare two objects of the class
    // like we can overload the <= operator to compare two objects of the class
    // like we can overload the >= operator to compare two objects of the class


    


};

int main(){

    // creating class object by dynamic memory allocation
    complex_num* num1 = new complex_num(1,2); // same as structures

    // creating using simple declaration
    complex_num num2(3,4); // same as structures

    // using methods of the class
    complex_num num3 = num1->add(num2); 

    // -> arrow operator is used to access the methods of the class using pointer to the object
    // . dot operator is used to access the methods of the class using object

    complex_num num4 = num1->subtract(num2); 

    complex_num num5 = num2.add(num3);
    complex_num num6 = num6.add(*(num1));

    cout<<num3.get_real()<<" + "<<num3.get_imaginary()<<"i"<<endl; // same as structures
     
    // example to demostrate overloading of operators

    complex_num num7 = num2+num2; 
    complex_num num8 = num2-num7;
    complex_num num9 = num7*num8;

    cout<<num7.get_real()<<" + "<<num7.get_imaginary()<<"i"<<endl;
    cout<<num8.get_real()<<" + "<<num8.get_imaginary()<<"i"<<endl;
    cout<<num9.get_real()<<" + "<<num9.get_imaginary()<<"i"<<endl;


    if(num7 == num8){
        cout<<"num7 is equal to num8"<<endl;
    }
    else{
        cout<<"num7 is not equal to num8"<<endl;
    }

    if(num7 != num8){
        cout<<"num7 is not equal to num8"<<endl;
    }
    else{
        cout<<"num7 is equal to num8"<<endl;
    }

    
}
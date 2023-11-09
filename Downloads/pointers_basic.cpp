#include <iostream>
using namespace std;

int main(){
    // Pointer :- A Pointer to an object means the meomory address in our cpu where the object in the programe is stored
    // & : referencing operator , &variable_name denotes address of variable_name in the memory
    // * : dereferening operator, *(some_address) means the object which is stored at memory location some_address

    //ex 
    int a = 3;
    int* add_of_a = &a; // the pointer for an object of data type x, has data type x*
// dtype* addressname = address_of_variable_by_reference_operator
    cout<<a<<endl;  // prints the value in variable which is 3 in this case
    cout<<add_of_a<<endl; // prints the address of variable, which is a hexagecimal number
    cout<<*(add_of_a)<<endl; // prints the value which is stored at this address which is 3 in this case

    // address of address
    // address of a variable is also a new variable
    // it is also stored in memory at some location when we create it via &operator
    // that location will be address of address
    // ex
    string name = "my_name";
    string* add_of_name = &name;
    string** add_of_add_of_name = &add_of_name;

    cout<<name<<endl;  // prints "my_name"
    cout<<add_of_name<<endl; // print address of name variable
    cout<<add_of_add_of_name<<endl; // prints address of add_of_name variable
    cout<<*(add_of_add_of_name)<<endl; // prints address of name variable
    cout<<*(*(add_of_add_of_name))<<endl; // prints "my_name"
    cout<<*(add_of_name)<<endl; // prints "my_name"

    // thus how muchever times & and * can be used to make address or dereference addreses

    
}
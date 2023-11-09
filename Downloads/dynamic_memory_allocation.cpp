#include <iostream>
#include <vector>

using namespace std;

int main(){
    // there are two types of memory which are used by out program
    // one is stack memory and one is heap memory
    // stack memory is function specific and the objects created in stack memory get deleted when the function in which the object is created returns
    // but objects in heap memory are not deleted until they are deleted by some delete(ptr_to_object) keyword

    //adding objects in stack memory
    int a = 4;
    // this type of declaration adds object in stack memory
    int* add_of_a_integer = new int(4);
    cout<<*(add_of_a_integer)<<endl;
    // this type of declartion adds the object into heap memory and return a pointer pointing at their memory location

    // adding array of objects in heap memory with certain size
    int* add_of_array = new int[4];
    // this type of declaration adds the array of objects in heap memory and return a pointer pointing at their memory location
    // the size of array is fixed and cannot be changed
    // the size of array is not stored in the pointer variable
    // so we have to store the size of array in some other variable
    // we can access the array elements using pointer variable as we do in normal array
    // we can also use pointer arithmetic to access the array elements
    // we can also use the subscript operator to access the array elements
    
    // printing the array elements
    string* add_of_string_array = new string[4];
    add_of_string_array[0] = "hello";
    add_of_string_array[1] = "world";
    add_of_string_array[2] = "this";
    add_of_string_array[3] = "is";

    for(int i=0;i<4;i++){
        cout<<*(add_of_string_array+i)<<endl;
    }

    
    

}
#include <iostream>
#include <vector>
using namespace std;

int main(){

    // how does a 2D vector looks :-
    // it's acutally vector of vector
    vector<vector<int>> collection = {{1,2,3}, {1,2}, {1,2,3,4}};

    // all method of 1D vectors work similarly on 2D vectors
    // ex.  since collection is a vector of vectors, new vectors can be pushed inside it
    collection.push_back({1,2,3});
    vector<int> vec = {32,88};
    collection.push_back(vec);



    int num_of_inner_vectors = collection.size();

    // looping thourght multi-dimensional vector and accessing it's elements using multi-indices
    for (int i = 0; i < num_of_inner_vectors; i++)
    {
        int inner_vector_size = collection[i].size();
        for (int j = 0; j < inner_vector_size; j++)
        {
            cout<<collection[i][j]<<" ";    // that means jth object of ( ith object of collection)
        }
        cout<<endl;
    }

    // same works for higher dimensions
    // ex. 
    vector<vector<vector<int>>> _3dvec = {{{1,2,3},{4,5,6},{7,8,9}},{{10,11,12},{13,14,15},{16,17,18}},{{19,20,21},{22,23,24},{25,26,27}}};
    for (int i = 0; i < _3dvec.size(); i++)
    {
        for (int j = 0; j < _3dvec[i].size(); j++)
        {
                for (int k = 0; k < _3dvec[i][j].size(); k++)
                {
                    cout << _3dvec[i][j][k]<<" ";
                }
                cout<<endl;     
        }
        cout<<endl;
        cout<<endl;
        cout<<endl;
    }

    // alternative method to access them
    // here & in front of auto denotes that the element is not being copied but directly given access over that
    // i.e. if something obtained by auto is changed then it will temporarily change inside the loop
    // but  if something obtained by auto& is changed, then it will actualy change in the programe

    for(auto& _2dvec : _3dvec){
        for(auto& _1dvec : _2dvec){
            for(auto& integer : _1dvec){
                cout<<integer<<" ";
            }
            cout<<endl;
        }
        cout<<"\n\n\n";
    }

    return 0;
    

}
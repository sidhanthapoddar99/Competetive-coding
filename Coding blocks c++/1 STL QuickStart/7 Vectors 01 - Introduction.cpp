#include <iostream>
#include <vector>

//array which can grow and shrink in size

using namespace std;

int main()
{

    // vector<type> a;
    vector<int> a;
    vector<int> b(5,10); // array having 5 elements of value 0;
    vector<int> c(b.begin(),b.end());
    vector<int> d{1,2,3,4,5,6};

    // itteration over vector
    for(int i=0;i<c.size();i++)
    {
        cout<<c[i]<<" ";
    }

    cout<<endl;

    for(int i:d)
    cout<<i;

    // adding element to the vector
    d.push_back(10);
    
    // when we assign a new element to the array new memory is created 
    // eg if vector size is 10 to add the 11th element 
    // a block of 20 is assigned and all ten elements are copied from block of 10 to block of 20

    // v.size() size of vector
    // v.capacity() space allocated
    // v.max_size() max size the vector can hold
    


    return 0;
}
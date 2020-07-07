#include <iostream>
#include <vector>

//array which can grow and shrink in size

using namespace std;

int main()
{

    // vector<type> a;
    vector<int> d{1,2,3,4,5,6};

  

    for(int i:d)
    cout<<i;

    // adding element to the vector 
    // O(1) 
    d.push_back(10);

    // deleting an element
    //O(1)
    d.pop_back();

    //Insert element in the middle O(N)
    d.insert(d.begin()+3,4,100); // isert 100 4 times

    //erase some elements
    d.erase(d.begin()+2);
    d.erase(d.begin()+2,d.begin()+5); //remove from 2 to 5


    d.resize(8);
    //resize does not DECREASE capacity but it removes the extra elements
    //resize does INCREASE the capacity 

    d.clear();//delete all elements but does not remove the sapce occupied

    d.empty();// is empty bool

    d.front(); //first element
    d.back(); //last element

    d.reserve(1000);// capacity 1000 space reserved



    // v.size() size of vector
    // v.capacity() space allocated
    // v.max_size() max size the vector can hold
    


    return 0;
}
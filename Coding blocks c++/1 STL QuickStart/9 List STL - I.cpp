#include <iostream>
#include <list>

using namespace std;

// list reffers to  doubely linked list
// it is better for insertion
// insertion works in O(1) every time 

int main()
{

    list<string> s{"apple","mango","banana"};


    /* Functions availabe in linked list
        push_back
        push_front
        pop_back
        pop_front
        insert
        erase
        remove
        reverse
        sort

        same as vectors
        */

       /*
        Iterators are used to point at the memory addresses of STL containers. 
        They are primarily used in sequence of numbers, characters etc. 
        They reduce the complexity and execution time of program.
       void showlist(list <int> g) 
        { 
            list <int> :: iterator it; 
            for(it = g.begin(); it != g.end(); ++it) 
                cout << '\t' << *it; 
            cout << '\n'; 
        } 

        list<int> l{1,2,3,4,5,6,7,8,9};
        for(auto i=l.begin();i!=l.end();i++)
            cout<<*i<<endl;

       */

}
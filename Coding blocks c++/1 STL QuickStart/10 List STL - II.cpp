#include <iostream>
#include <list>

using namespace std;

// list reffers to  doubely linked list
// it is better for insertion
// insertion works in O(1) every time 

int main()
{

    list<string> s{"apple","mango","banana","Kiwi","cherry"};

    //direct access does not work as the memory is not linera

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

       s.remove("apple");//remove all instances of apple
       //remove 3rd element
       auto it = s.begin();
       it++;
       it++;
       s.erase(it);

       it = s.begin();
       it++;
       it++;
       // insert the instance in place of the removed location
       s.insert(it,"the new string");

        for(string ss:s)
        cout<<ss<<endl;


}
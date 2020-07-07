#include <iostream>
#include<queue>

using namespace std;
int main()
{
    //FIFO same as stack just top to front and LIFO to FIFO
    queue<int> st;
    // stack has major 4 operation
    //push
    //pop
    //empty
    //top

    //insertion
    st.push(10);

    cout<<st.front();
    st.pop();

    while (!st.empty())
    {
        cout<<st.front();//the first element
        st.pop();//the first element
    }

    //we can also implement stack using list vector or array
    
}
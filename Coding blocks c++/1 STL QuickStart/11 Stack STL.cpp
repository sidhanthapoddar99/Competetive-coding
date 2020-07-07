#include <iostream>
#include<stack>

using namespace std;
int main()
{
    stack<int> st;
    // stack has major 4 operation
    //push
    //pop
    //empty
    //top

    //insertion
    st.push(10);

    cout<<st.top();
    st.pop();

    while (!st.empty())
    {
        cout<<st.top();
        st.pop();
    }

    //we can also implement stack using list vector or array
    
}
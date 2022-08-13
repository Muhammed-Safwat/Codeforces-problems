#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n ;
    cin>>n;
    string s ;
    stack <int> st ;

    for(int i =0  ;i <n ;i++){
        cin>>s;
        if(s=="push"){
            int temp ;
            cin>>temp;
            st.push(temp);
        }else if(s=="top"){
            cout<<st.top()<<endl;
        }else{
            st.pop();
        }
    }
    return 0;
}

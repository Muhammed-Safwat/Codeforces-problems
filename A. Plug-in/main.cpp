#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
    stack<char> st ;
    string s ;
    cin>>s;
    for(int i= 0 ;i<s.length() ;i++){
            char ch = s.at(i);
        if(st.empty() ||st.top()!=ch ){
            st.push(ch);
        }else{
            st.pop();
        }
    }
    string ans="" ;
    while( !st.empty() ) {
        ans+=st.top();
        st.pop();
    }
    reverse(ans.begin(),ans.end());
	cout << ans << endl;
        return 0;
}

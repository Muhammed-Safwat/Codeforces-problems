#include <iostream>

using namespace std;

int main()
{
    int n ;
    int c=0;
    cin>>n;int j=0;
    int *arr = new int(n);
    string s ;
    cin>>s;
    for(int i=0 ;i<n ;i++){
            int k=0;
        if(s.at(i)=='B'){
                c++;

            while(s.at(i)=='B'  ){
                i++;
                k++;
                if(i==n)break;
            }
            arr[j++]=k;
        }

    }
    cout<<c<<"\n";
     for(int i=0 ;i<j ;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

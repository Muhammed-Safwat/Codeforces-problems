#include <iostream>

using namespace std;
void swap(string *xp, string  *yp);

int main()
{
    int n ;string s ;
    cin>>s>>n;
    string  arr[n];
    for(int i =0 ; i<n ;i++){
        cin>>arr[i];
    }
    int small ;
    for(int i = 0 ; i<n ; i++){
            small = i;
        for(int j = i+1 ; j<n ; j++){
            if(arr[j]<arr[small]){
                small=j;
            }
        }
          swap(&arr[small] ,&arr[i]);
    }
    int index = 0 ; int c=0 ;
    for(int i =0  ;i<n ; i++){
        c=0;
        for(int j = 0 ;j<s.length()  ;j++){
            if(s.at(j)==arr[i].at(j)){
                c++;
                index = i ;
            }else {
                break;
            }
        }
          if(c==s.length())break;
    }

         if(c==s.length())
          cout<<arr[index];
          else cout<<s;

    return 0;
}
void swap(string *xp, string *yp)
{
    string temp = *xp;
    *xp = *yp;
    *yp = temp;
}

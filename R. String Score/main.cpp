#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin>>n ;
    string s ;
    cin>>s;
     long long score =0 ;
    for(int i = 0 ;i<n ;i++){
        if(s.at(i)=='V'){
            score+=5;
        }else if (s.at(i)=='W'){
            score+=2;
        }else if (s.at(i)=='X'){
            i++;
        }else if (s.at(i)=='Y' && i<n-1){
            s.push_back(s.at(i+1));
            n++;
            i++;
        }else if (s.at(i)=='Z'&& i<n-1){
            if(s.at(i+1)=='V'){
            score=score/5;
            i++;
             }else if (s.at(i+1)=='W'&& i<n-1){
            score =score/2;i++;
            }
        }
    }
    cout<<score;
    return 0;
}

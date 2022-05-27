#include <iostream>
#include <vector>
using namespace std;

int main()
{
   vector<int> negative, positive, zero ;
    int n;
    cin >> n ;
    for(int i=0 ; i<n ; i++)
    {
        int x  ; cin >> x;
        if(x < 0 )
            negative.push_back(x) ;
        else if (x>0 )
            positive.push_back(x);
        else
            zero.push_back(x);
    }

    if(positive.size() == 0)
    {
        positive.push_back(negative.back());
        negative.pop_back();
        positive.push_back(negative.back());
        negative.pop_back();
    }

    if(negative.size()%2 ==0)
    {
        zero.push_back(negative.back());
        negative.pop_back();
    }

    cout << negative.size() << ' ';
    for(int x: negative)
        cout << x << ' ';
    cout << endl ;

    cout << positive.size() <<' ' ;
    for(int x: positive)
        cout << x << ' ';
    cout << endl ;

    cout << zero.size() << ' ' ;
    for(int x: zero)
        cout << x << ' ';
    cout << endl ;






    return 0;
}

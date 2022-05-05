#include <iostream>

using namespace std;

int main()
{
   string s ;
   cin>>s;
   string output = "";
   for(int i = 0 ; i<s.length();i++){
        if(s.at(i)!='a'&&s.at(i)!='A'&&s.at(i)!='u'&&s.at(i)!='U'&&s.at(i)!='E'&&s.at(i)!='e'
           &&s.at(i)!='O'&&s.at(i)!='o'&&s.at(i)!='i'&&s.at(i)!='I'&&s.at(i)!='y'&&s.at(i)!='Y'){
            char a=tolower(s.at(i));
            output=output+".";
            output=output+a;

            }

    }

   cout<<output;



    return 0;
}

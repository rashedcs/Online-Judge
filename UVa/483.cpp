#include<bits/stdc++.h>
using namespace std;

string print(string str)
{
            string res=""; 
            int b = -1;
        
            for(int i=0; i<str.size()-1; i++)
            {
                 if(str[i]==' ' )
                 {
                     for (int k=i-1; k>b; k--) 
                     {
                         res += str[k];
                     }
                     res +=" ";
                     b=i;
                 }
             }
             for(int k=str.size()-1; k>b; k--) 
             {
                 res += str[k];
             }
             return res;
}


int main()
{
    string str;
    while(getline(cin,str))
    {
           cout<<print(str)<<endl;
    }
    return 0;
}

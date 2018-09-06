#include<bits/stdc++.h>
using namespace std;


bool compare(char a, char b)
{
	if( tolower(a) == tolower(b) )
	{
		return a<b;
	}
	else 
	{
	    return tolower(a) < tolower(b);
	}
}

int main()
{
    int tc; string str;
    cin>>tc;
    cin.ignore();
    while(tc--)
    {
        cin>>str;
        sort(str.begin(),str.end(),compare);
        do
        {
            cout<<str<<endl;
        }while(next_permutation(str.begin(),str.end(),compare));
    }
    return 0;
}

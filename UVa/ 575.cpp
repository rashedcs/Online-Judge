#include<bits/stdc++.h>
using namespace std;


int main()
 {
	long long sum, n, len;
	string s;
	
	while(cin>>s && s!="0")
	{
        sum = 0;
        len = s.size();

        for(int i=0; i<len; i++)
        {
            n = s[i]-'0';
            sum += n*(pow(2,(len-i))-1);
        }
        cout<<sum<<endl;
	}
	return 0;
}

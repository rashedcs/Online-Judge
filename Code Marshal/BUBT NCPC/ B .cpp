#include<bits/stdc++.h>
using namespace std;


int main()
{

    string words[10];
    string t1, t2;
    int n,temp,result,maxi,index;
    cin>>n;

    int num[10];

    for(int i=0; i<n; i++)  cin>>words[i];

    for(int j=0; j<n; j++)
    {
        t1 = words[j];

        for(int i=0; i<n; i++)
        {
            if(t1==words[i])  num[j]++;
        }

    }

    maxi = num[0];
    index = 0;

	for(int i=0; i<n; i++)
	{
		if(maxi<num[i])
		{
			maxi=num[i];
			index = i;
		}
	}

	  cout<<words[index]<<endl;

    return 0;
}


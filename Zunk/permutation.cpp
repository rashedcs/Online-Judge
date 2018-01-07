#include <iostream>
#include <string.h>
using namespace std;


bool Match(string str,int i,int j)
{
     if(i == j) 
     {
         return false;
     }
     else
     {
          for(int k=i; k<j; k++)
          {
          	    if(str[k]==str[j])	return true;	
          }
     }	
     return false;
}

void Permute(string str, int m, int n)
{
    if(m>=n)
    {
      cout<<str<<" ";
      return;
    }
    for(int i=m;i<=n;i++)
    {  
       if(!Match(str,m,i))
       {
          swap(str[i], str[m]);
          Permute(str,m+1,n);
          swap(str[i], str[m]);
       }
    
    }
}

int main()
{
  int n, tc;
  string str;
  cin>>tc;
  while(tc--)
  {
   str.clear();
    cin>>str;
    n = str.size();
    Permute(str,0,n-1);
    cout<<endl;
  }
 
  return 0;
}

//I_F_A
#include "bits/stdc++.h"
using namespace std;
 
string s;
long long len;
 
void func(long long index,long long arr[],bool used[]){
	
	if(index == len){
		
		for(long long i=0;i<len;i++){
			
			cout << s[arr[i]];
		}
		cout << '\n';
	}
	else{
		
		for(long long i=0;i<len;i++){
			
			if(used[i] == 0){
				
				used[i] = 1;
				arr[index] = i;
				func(index + 1 , arr, used);
				used[i] = 0; 
			}
		}
	}
}
 
int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	
	cin >> s;
	
	len = s.length();
	
	long long arr[len + 1 ];
	bool used[len + 1];
	
	for(long long i=0;i<=len;i++){
		
		arr[i] = 0;
		used[i] = 0;
	}
	
	func(0LL,arr,used);
	
} 


/*
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


void premutations(string str, string S)
{
    if(str.length() == S.length())
    {
        cout<<S<<" ";
        return;
    }
    
    for(int i=0;i < str.length();i++)
    {
        string STR = S;
        if(S.find(str[i]) == string::npos)
        {
            S+= str[i];
            premutations(str,S);
            S= STR;
        }
    }
}


int main() 
{
	int n;
	cin >> n;
	while(n--)
	{
	    string str;
	    cin >> str;
	    sort(str.begin(),str.end());
	    premutations(str,"");
	    cout<<endl;
	}
	
	return 0;
}


#include<bits/stdc++.h>
using namespace std;



void permute(string s,char ch[],int index,int n, bool check[])
{
	
    if(index==n)
    {
        ch[index]='\0';
        cout<<ch<<" ";
        return;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(check[i]==false)
            {
                check[i]=true;
                ch[index]=s[i];
                permute(s,ch,index+1,n,check);
                check[i]=false;
            }
        }
    }
}

int main()
 {
	    int tc;
	    string s;
        while(tc--)
        {
             cin>>s;
             sort(s.begin(),s.end());
             int n=s.length();
             char ch[n+1];
             
             memset(check,false,sizeof(check)); bool check[n];
             permute(s,ch,0,n,check);
             cout<<endl;
        }
    	return 0;
}
*/




#include<bits/stdc++.h>
using namespace std;

vector<string>res;



void permute(string arr, int m)
{
     if(m>=arr.length())
     {
         res.push_back(arr);
         return;
     }
     
     permute(arr, m+1);
     char last=arr[m];
     
     for(int i=m; i<arr.length(); i++)
     {
             if(last==arr[i])
             {
             	continue;
             }
             else
             {
             	last=arr[i];
             }
            
             last = arr[i];
             swap(arr[i], arr[m]);
             permute(arr, m+1);
             swap(arr[m], arr[i]); 
        
     }
}


int main() 
{
    int n, tc;
    string str;
    cin>>tc;
    
    while(tc--)
    {
        res.clear();
        cin>>str;
        sort(str.begin(), str.end());
        permute(str, 0);
        sort(res.begin(),res.end());
        
        for(string iterate:res)
        {
             cout<<iterate<<" ";
        }
        cout<<endl;
    }
    return 0;
}



















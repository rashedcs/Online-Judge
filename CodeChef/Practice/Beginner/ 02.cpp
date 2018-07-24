  #include<bits/stdc++.h>
  using namespace std;
  #define ll long long
  #define fast ios::sync_with_stdio(false)
 
 
  int main()
  {
         fast;
         ll a, b, tc;
	       cin>>tc;
	      while(tc--)
 	      {
	        cin>>a>>b;
	        if(a%2==0 && b%2==0 && abs(b-a)==2)      cout<<"YES"<<endl;
	     
	        else if(a%2==1 && b==a+1)                cout<<"YES"<<endl;
	     
	        else if(a%2==0 && b==a-1)                cout<<"YES"<<endl;
	      
	        else if(a%2==1 && b%2==1 && abs(b-a)==2) cout<<"YES"<<endl;
	     
	        else                                     cout<<"NO"<<endl;
   	   }
	     return 0;
  } 

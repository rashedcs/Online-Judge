      #include<bits/stdc++.h>
      using namespace std;


    	int main(int argc, char const *argv[])
    	{
	          int n, t;
	          map<int,int> mp;
	        
	          vector<int> arr; //Map result in sorting but in this problem....unsorted so use extra vector
          
		  while(cin>>t)
		  {
		      mp[t]++; 
		      if (mp[t] == 1)
		      {
			  arr.push_back(t);
		      }
		  }
    		
        	  for(int i=0; i<arr.size(); i++)
        	  {
        	    	cout<<arr[i]<<" "<<mp[arr[i]]<<endl;
        	  }
    	  	  return 0;
    	 }

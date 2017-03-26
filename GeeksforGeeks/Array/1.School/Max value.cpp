   #include<bits/stdc++.h>
   using namespace std;

   int index(int arr[],int s)
   {
      return max_element(arr, arr + s) - arr;
   }

   int midex(int arr[],int s)
   {
      return min_element(arr, arr + s) - arr;
   }


  int main()
  {
     int tc,ans,num,mi,temp,ma,arr[10];
     int x, y,a,b;
     cin>>tc;

    while(tc--)
    {
      cin>>num;
      
      for(int i=0; i<num; i++)
      {
        cin>>arr[i];
      }

      ma =  *max_element(arr,arr+num);
      a = ma;
      mi =  *min_element(arr,arr+num);
      b = mi;

      x = index(arr,num);
      y = midex(arr,num);

     cout<<a-x- b+y<<endl;

   }
   return 0;
}

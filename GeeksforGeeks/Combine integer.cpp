/*
#include<bits/stdc++.h>
using namespace std;


int main ()
{
   unsigned long r;
   char s1[32];
   char s2[16];
   int a;
   int b;
   cin>>a>>b;

   sprintf(s1,"%d",a);
   sprintf(s2,"%d",b);

   strcat(s1,s2);

   r = atol(s1);

   cout<<r<<endl;

   return 0;
}
*/

/*
#include <stdio.h>
int main()
{
  char text[40];

  int i=1, j=2, k=3, r;

  sprintf(text,"%d%d%d", i, j, k);

  r = atoi(text);

  cout<<r;

  return 0;
}

*/


/*

    #include <iostream>
    using namespace std;


    int together(int a, int b)
    {
        int magnitude = 1;

        while(magnitude <= b)
        {
          magnitude *= 10;
        }

        return magnitude*a + b;
    }


    int main()
    {
        int a=99,b=10,k;
        k = together(a,b);
        cout<<k<<endl;
        return 0;
    }


*/






    #include<bits/stdc++.h>
    using namespace std;

    int main()
     {
        char str1[50], str2[50];
        int r;

        cout<<"Enter first string : ";
        gets(str1);
        cout<<"Enter second string : ";
        gets(str2);

        strcat(str1 , str2);

        r = atol(str1);

        cout<<"String after Concatenation :  "<<r<<" "<<r+36;
        return 0;
     }




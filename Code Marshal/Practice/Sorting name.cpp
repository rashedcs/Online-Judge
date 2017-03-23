#include<bits/stdc++.h>
using namespace std;


int main()
{

     string hold, word[10];
     int n;
     cin>>n;

     for(int i=0; i<n; i++)
     {
        cin>>word[i];
     }

     for (int i=0; i<n; i++)
     {
        for (int j=0; j<n; j++)
        {
            if (word[j] > word[j+1])
            {
               swap(word[j], word[j+1]);
            }
        }
      }

     for (int i=0; i<n; i++)
     {
        cout<<word [i]<<"\t\t";
     }

    return 0;
}

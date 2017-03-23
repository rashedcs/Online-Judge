#include<bits/stdc++.h>
using namespace std;

struct student
{
          int rollno;
          char name[20];
          char college[40];
          int score;
};

     int main()
     {
          struct student s[20],temp;
          int i,j,n;

          printf("\nEnter no. of Students : ");
          scanf("%d",&n);

          printf("\nEnter the rollno,name,college name,score ");

          for(i=0;i<n;i++)
          {
             scanf("%d%s%s%d",&s[i].rollno, s[i].name, s[i].college, &s[i].score);
          }

          for(i=0;i<=n-1;i++)
          {
            for(j=0;j<=n-1;j++)
            {
                if(s[j].score<s[j+1].score)
                {
                  temp=s[j];
                  s[j]=s[j+1];
                  s[j+1]=temp;
                }
            }
          }
  

          printf("\nThe Merit List is :\n");
          for(j=0;j<n;j++)
          printf("%d\t%s\t%s\t%d\n",s[j].rollno,s[j].name,s[j].college,s[j].score);

      }

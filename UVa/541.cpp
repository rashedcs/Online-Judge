#include<bits/stdc++.h>
using namespace std;

void solu(int ** grid , int row, int col)
{
          int r=0,  c=0, tr, tc;
          pair<int,int>P[row];

          for(int i=0; i<row; i++)
          {
              for(int j=0; j<col; j++)
              {
                  P[i].first += grid[i][j];
                  P[i].second += grid[j][i];
              }
           }
          
    	   for(int k=0; k<row; k++)
    	   {
		    if(P[k].first%2!=0)
		    {
			r++, tr = k+1;
		    }
		    if(P[k].second%2!=0)
		    {
			c++, tc = k+1;
		    }
    	   }
	   if(r== 0 && c==0) printf("OK\n");
	   else if(r==1 && c==1) printf("Change bit (%d,%d)\n", tr, tc);
           else  printf("Corrupt\n");
}

int main()
{
    int n, row , col;
    while(scanf("%d", &n)==1 && n) 
    {
        row=col=n;
	    
        /*Dynamic memory allocation start */
        int** grid = new int*[row];
        for(int i=0; i<row; i++)
        {
          grid[i] = new int[col];
        }
        /*Dynamic memory allocation end */
            
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
               cin>> grid[i][j] ;
            }
        }
        solu(grid, row, col);
        free(grid);
     }
     return 0;
}

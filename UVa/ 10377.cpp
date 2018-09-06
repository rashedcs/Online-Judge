#include<bits/stdc++.h>
using namespace std;

char grid[62][62], cmd;

string str = "NESW";

int  dr[] = {-1, 0, 1,  0};
int  dc[] = {0, 1, 0, -1};

int main()
{
    ios::sync_with_stdio(false);
    int  tc,n, m, x, y, a, b, dir;

    scanf("%d",&tc);
    while (tc--)
    {
        dir=0;
        scanf("%d%d",&n,&m);
        getchar();

        for(int i=0; i<n; i++)
        {
          gets(grid[i]);
        }

        scanf("%d%d",&x,&y);
        x--; y--;
        while((cmd = getchar()) != 'Q') // while (getline(cin, s))
        {
            if(cmd=='R')        dir = (dir+1)%4;
            else if (cmd=='L')  dir = (dir+3)%4;
            else if (cmd=='F')
            {
                a =  x+dr[dir];
                b =  y+dc[dir];

                if(grid[a][b]== ' ') 
                {
                   x = a;
                   y = b;
                }
            }
        }
        printf("%d %d %c\n",x+1, y+1, str[dir]);
        if (tc) printf("\n");
        //if (tc>0) printf("\n");
      }

    return 0;
}
//Daught : http://code.geeksforgeeks.org/3QhYEK

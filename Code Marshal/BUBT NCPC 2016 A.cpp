  #include <iostream>
  using namespace std;

  int main()
  {
     int tc, temp, k , poor,own,rn,cnt=1,total;
     long long n;
    cin>>tc;

    while(tc--)
    {
        cin>>k>>n;

        if(k==0)
        {
          poor=n/3;
          temp=n - (n/3);
          rn = (temp/3) * 2;
          own = temp - rn;
          cout<<"Case "<<cnt++<<":\n"<<poor<<endl<<rn<<endl<<own<<endl;
        }

        else
        {
          rn = 2*n;
          poor = (rn+n) / 2;
          total = rn + poor + n;
          cout<<"Case "<<cnt++<<":\n"<<poor<<endl<<rn<<endl<<total<<endl;
        }


    }

    return 0;
  }


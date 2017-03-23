//Source : http://ideone.com/pR3gTZ

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,t,day;
    char month[20];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%s %d",&month,&day);
        printf("Case %d: ",i);
        if(strcmp(month,"January")==0)
        {
            printf("Pohela Falgun\n");
        }
        else if(strcmp(month,"February")==0)
        {
            if(day<13)
                printf("Pohela Falgun\n");
            else if(day==13)
                printf("Valentine's Day\n");
            else if(day>13 && day<21)
                printf("International Mother Language Day\n");
                else if(day>=21)
                    printf("International Women's Day\n");
        }
        else if(strcmp(month,"March")==0)
        {
            if(day<8)
                printf("International Women's Day\n");
            else if(day>=8 && day<21)
                printf("International Color Day\n");
            else if(day>=21 && day<26)
                printf("Bangladesh Independence Day\n");
            else if(day>=26)
                printf("April Fools Day\n");
        }
        else if(strcmp(month,"April")==0)
        {
            if(day<14)
                printf("Pohela Boishakh\n");
            else if(day>=14 )
                printf("May Day\n");

        }
        else if(strcmp(month,"May")==0)
        {
            if(day>=1)
                printf("Father's Day\n");


        }
        else if(strcmp(month,"June")==0)
        {
            if(day<19)
                printf("Father's Day\n");
            else if(day>=19)
                printf("Mandela Day\n");


        }
        else if(strcmp(month,"July")==0)
        {
            if(day<18)
                printf("Mandela Day\n");
            else if(day>=18)
                printf("World Mosquito Day\n");

        }
        else if(strcmp(month,"August")==0)
        {
            if(day<20)
                printf("World Mosquito Day\n");
           else  if(day>=20 )
                printf("Halloween\n");

        }
        else if(strcmp(month,"September")==0)
        {
            if(day>=1)
                printf("Halloween\n");

        }
        else if(strcmp(month,"October")==0)
        {
            if(day<31)
                printf("Halloween\n");
                else if(day==31)
                    printf("World Toilet Day\n");

        }
        else if(strcmp(month,"November")==0)
        {
            if(day<19)
                printf("World Toilet Day\n");
                else if(day>=19)
                    printf("Human Rights Day\n");

        }
         else if(strcmp(month,"December")==0)
        {
            if(day<10)
               printf("Human Rights Day\n");
                else if(day>=10 &&day<16)
                    printf("Victory Day of Bangladesh\n");
                else if(day>=16 && day<25)
                    printf("Christmas Day\n");
                else if(day>=25)
                    printf("Pohela Falgun\n");

        }
    }

    return 0;
}

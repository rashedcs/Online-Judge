/*
Your task is to complete the function addFraction  which adds the two fractions and prints the resulting fraction.
The function takes four arguments num1, den1, num2, den2 where num1, num2 denotes the numerators of two fractions and den1, den2 denotes their denominators.

Input:
The first line of input contains an integer T denoting the number of test cases . 
Then T test cases follow . Each test case contains four integers num1, den1, num2, den2 respectively .

Output:
For each test case output will be the fraction in the form a/b where the fraction denotes the sum of the two given fractions in reduced form.

Constraints:
1<=T<=100
1<=den1,den2,num1,num2<=1000

Example:
Input
1
1 500 2 500

Output
3/500

Explanation:
In above test case 1/500+2/500=3/500

*/



void addFraction(int a, int den1, int b,int den2)
{
   int num,den,cf;
   
   den = abs(den1 * den2) / __gcd(den1, den2);
   a=(den/den1)*a;
   b=(den/den2)*;
   num = a+b;

   cf  = __gcd(num,den);
   den = den/cf;
   num = num/cf;
   
   printf("%d/%d\n",num,den);

}


#include<bits/stdc++.h>
using namespace std;


int main()
{

    string words[10];
    string t1, t2;
    int n,temp,result,maxi,index;
    cin>>n;

    int num[10];

    for(int i=0; i<n; i++)  cin>>words[i];

    for(int j=0; j<n; j++)
    {
        t1 = words[j];

        for(int i=0; i<n; i++)
        {
            if(t1==words[i])  num[j]++;
        }

    }

    maxi = num[0];
    index = 0;

	for(int i=0; i<n; i++)
	{
		if(maxi<num[i])
		{
			maxi=num[i];
			index = i;
		}
	}

	  cout<<words[index]<<endl;

    return 0;
}





import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

// How to find repeated/duplicated words in a string using Java
 class Ideone {
    
    public static void main(String[] args) {
     //   System.out.print("Enter string to analyse:");
        Scanner sn = new Scanner(System.in);
        String input = sn.nextLine();
        
        // first let us split string into words
        String[] words = input.split(" ");
        
        // adds all words into a map
        // we also check whether the word is already in map!
        Map<String,String> wordMap = new HashMap<String,String>();
        for(int i=0;i<words.length;i++) {
            String word = words[i]; // for case insensitive comparison
            if(wordMap.get(word)!=null) {
                // we found a duplicated word!
                System.out.println("Duplicated/Repeated word:"+word);
            }else {
                wordMap.put(word, word);
            }
        }
    }   
}

links : https://www.quickprogrammingtips.com/java/java-program-to-find-repeated-words-in-a-string.html

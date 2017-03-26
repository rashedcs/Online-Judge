
#include <bits/stdc++.h>
using namespace std;



void merge(int arr[],int l,int m, int r)
{
    int i ,j ,p;

    if (l==r)  return;

    m = (l+r)/2;
    i=l;
    j=m+1;
    p=r-l+1;

   /// T *temp = new T [p];
    int *temp = new int [p];

    int k = 0;
    while(k<p)
    {
        if (j>r || (i<=m  && arr[i]<arr[j]))
        {
            temp[k++]=arr[i++];
        }

        else
        {
            temp[k++]=arr[j++];
        }
    }

    for (int k=0,i=l; k<p; k++,i++)
    {
        arr[i]=temp[k];
    }

    delete temp;
}


void merge_sort(int arr[], int l, int r)
{
    int m;
    //Check for base case
    if (l >= r)   return;

   //First, divide in half
    m = (l + r)/2;
    
    //First recursive call
    merge_sort(arr, l, m);

    //Second recursive call
    merge_sort(arr, m+1, r);

    merge(arr, l,m, r);
}




int main()
{
    int arr[] = {2,3,9,8,7,4,5,6,1};
    int l = sizeof(arr)/sizeof(arr[0]);
    merge_sort(arr,0,l-1);
    cout << "The sorting elements:\n";
    for (int k=0;k<l;k++){
        cout << arr[k] << endl;
    }
    return 0;
}

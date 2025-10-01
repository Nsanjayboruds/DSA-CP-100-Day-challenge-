#include<iostream>
#include<cmath>//Math functions ke liye (is program me actually use nahi ho raha).
using namespace std;


int deleteEle(int arr[], int n, int x)//int arr[] → Array jisme element delete karna hai //n-array ka size.//x →element jo delete karna hai.

{

    int i=0;// first loop
     for(i=0;i<n;i++){
       if(arr[i]==x)
       break;

     }

     if(i==n)
     return n;

     for(int j=i;j<n-1;j++){//second loop
        arr[j] =arr[j+1];

     }

     return n-1;
}

int main() {
   int arr[] = {3, 8, 12, 5, 6}, x = 12, n = 5;
       cout<<"Before Deletion"<<endl;
       for(int i=0; i < n; i++)
       {
       	cout<<arr[i]<<" ";
       }
       cout<<endl;
       n = deleteEle(arr, n, x);
       cout<<"After Deletion"<<endl;
       for(int i=0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }
}
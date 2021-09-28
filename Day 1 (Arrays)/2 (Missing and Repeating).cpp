#include <bits/stdc++.h>
using namespace std;

int main(){

    //missing and repeating (geeksforgeeks problem) in O(nlogn)
    int miss,n,i,j,ele,ans,dist=0,mn=INT_MAX,left,right,prv;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    sort(arr,arr+n);
    for(i=1;i<n;i++){
            if((arr[i]-arr[i-1])==2){
                miss=arr[i]-1;

            }
            if((arr[i]-arr[i-1])==0)
                 ele=arr[i];

    }
    if(arr[0]!=1)
            miss=1;
    else if(arr[n-1]!=n)
            miss=n;
    int arry[2];
    arry[0]=ele;
    arry[1]=miss;

    printf("%d %d",arry[0],arry[1]);
}

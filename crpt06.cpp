#include<iostream>
#include<cstdio>
#include<stdio.h>

using namespace std;

void KSubset(int *a,int n,int *s,int sindex,int index,int k){

    if (index>n)
        return;

    if (k==0){
        for(int i=0;i<sindex;i++)
            printf("%d ",s[i]);
        printf("\n");
        return ;
        }

    s[sindex]=a[index];
    KSubset(a,n,s,sindex+1,index+1,k-1);
    KSubset(a,n,s,sindex,index+1,k);
}


int main(){
    int n,i;
    int a[25];
    while(1){
            cin>>n;
    if(n!=0)
        {
            for(i=0;i<n;i++)
              scanf("%d",&a[i]);
            int s[6];
            KSubset(a,n,s,0,0,6);
    }
    else
        break;

}
 return 0;
}

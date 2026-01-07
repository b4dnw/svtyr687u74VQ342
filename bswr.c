//BINARY SEARCH WITHOUT RECURRSIONS

#include<stdio.h>
int bs(int a[],int n,int x){
    int l = 0;
    int h = n-1;
    while(l<=h){
        int mid = (l+h)/2;
        if(a[mid]==x){
            return mid;
        }else if(a[mid]<x){
            l = mid+1;
        }else h = mid-1;
    }
    return -1;
}

int main(){
int a[]={2,3,4,10,12};
int x = 2;
int n = sizeof(a)/sizeof(a[0]);
int r = bs(a,n,x);
if(r==-1){
    printf("Key not found");
}else printf("Key %d found at %d position", x,r);
    return 0;
}

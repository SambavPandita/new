#include<stdio.h>
int main(){
    int n,i,j;
    printf("enter the array size:");
    scanf("%d",&n);
    int arr[n];
    printf("enter array element:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<n;i++){
        int val=arr[i];
        for(j=i-1;j>=0 && arr[j]>val;j--){
            arr[j+1]=arr[j];
        }
        arr[j+1]=val;
    }
    printf("after sorting array elements are :");
    for(int i=0;i<n;i++){
        printf("%d\t",&arr[i]);
    }
}
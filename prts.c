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
    for(int i=0;i<n-1;i++){
        int min=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=i){
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
    printf("after sorting array elements are :");
    for(int i=0;i<n;i++){
        printf("%d\t",&arr[i]);
    }
}
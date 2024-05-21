#include<stdio.h>
int main(){
    int i,n,j;
    printf("enter the number of elements in array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements in array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            if(arr[j+1]<arr[j]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("after sorting array elements are : \n");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}
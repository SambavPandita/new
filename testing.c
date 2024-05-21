#include<stdio.h>
int main(){
    int n;
    //char str[100];
    //"%[^\n]s"
    printf("enter the number of students:");
    scanf("%d",&n);
    char name[n];
    int number[n];
    for(int i=0;i<n;i++){
        printf("enter the name of student(enter first name only):");
        scanf("%c",&name[i]);
        for(int k=0;k<n;k++)
        printf("\nEnter the roll number of the student:");
        scanf("%d",&number[i]);
    }
    for(int j=0;j<n;j++){
        printf("\nName:%c Roll number:%d",name[j],number[j]);  
    }
}
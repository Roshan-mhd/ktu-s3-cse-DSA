#include<stdio.h>
void sort(int arr[],int n){
    int i,current,j;
    for(i=1;i<n;i++){
        current=arr[i];
        j=i-1;
        while(arr[j]>current&&j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
}
int main(){
    int arr[100],i,n;
    printf("\nEnter the limit of array: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    printf("\nThe sorted array is: ");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}

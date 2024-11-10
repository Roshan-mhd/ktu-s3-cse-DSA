#include<stdio.h>
int arr[100],l,i,j,fix,fl,n;
void sort(){
    int temp;
    printf("\nSorted array is: ");
    for(i=0;i<n-1;i++){
        fix = arr[i];
        for (j=i+1;j<n;j++)
        {
            if(arr[j]<fix){
                fix=arr[j];
                fl=j;
            }
        }
        temp=arr[i];
        arr[i]=fix;
        arr[fl]=temp;
    }
    for(i=0;i<n;i++){
    printf("%d\t",arr[i]);
    }
    
}
void entr(){
    printf("\nEnter the max size of array(under 100): ");
    scanf("%d",&n);
    printf("Enter elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}
void main(){
    entr();
    sort();
}
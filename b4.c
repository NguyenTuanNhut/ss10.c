#include<stdio.h>
int main(){
    int arr[10]={1,3,2,5,6,7,4,8,9,10};
    int min;
    for(int i=0;i<9;i++){
          min=i;
          for(int j=i+1;j<10;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;  
    }
    for(int i=0;i<10;i++){
         printf("%d ",arr[i]);
    }
    return 0;
}
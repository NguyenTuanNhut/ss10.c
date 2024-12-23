#include<stdio.h>
int main(){
    int arr[10]={2,31,42,45,23,55,66,8,20,25};
    int temp;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
            
        }
    }
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
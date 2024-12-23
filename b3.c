#include<stdio.h>
int main(){
    int arr[10]={1,4,2,6,8,9,5,3,7,10};
    int key;
    for(int i=1;i<10;i++){
        key=arr[i];
        int j=i-1;
        while (j>=0 && arr[j] > key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
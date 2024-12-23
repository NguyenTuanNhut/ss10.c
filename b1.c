#include<stdio.h>
int main(){
    int arr[5]={1,3,4,8,9};
    int value,flag;
    printf("nhap phan tu can tim");
    scanf("%d",&value);
    flag=1;
    for(int i=0;i<5;i++){
        if(arr[i]==value){
            printf("phan tu can tim o vi tri %d",i);
            flag=0;
            break;
        }
    }
    if(flag){
        printf("khong tim thay vi tri");
    }

    return 0;
}
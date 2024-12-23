#include<stdio.h>
int main(){
    int arr[10]={1,3,2,5,6,5,4,2,9,1};
    int a[100],value,idex;
    idex=0;
    printf("nhap phan tu can tim");
    scanf("%d",&value);
    for(int i=0;i<10;i++){
        if(arr[i]==value){
            a[idex]=i;
            idex++;
        }
    }
    for(int i=0;i<idex;i++){
        printf("%d ",a[i]);
    }
    return 0;
}

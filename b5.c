#include<stdio.h>
int main(){
    int arr[10]={1,3,2,5,6,7,4,8,9,10};
    int min,value;
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
    printf("\nnhap phan tu can tiem");
    scanf("%d",&value);
    int l=0,r=9,m,flag;
    flag=0;
    while(l<=r ){
         m=(l+r)/2;
        if(arr[m]==value){
        flag=1;
        break;
        }else if(value > arr[m]){
            l=m+1;
        }else if(value < arr[m]){
            r=m-1;
        }
    }
    if(flag){
    printf("vi tri can tim la %d",m);
    }else{
        printf("khong tim thay phan tu");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int m,n,max,temp;
    printf("nhap hang");
    scanf("%d",&m);
    printf("nhap cot");
    scanf("%d",&n);
    int arr[m][n];
    printf("nhap mang");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
        
    }
    for(int i=0;i<n;i++){
         for(int a=0 ;a<m-1;a++){
         for(int j=0;j<m-a-1;j++){
         if(arr[j][i]>arr[j+1][i]){
                temp=arr[j][i];
                arr[j][i]=arr[j+1][i];
                arr[j+1][i]=temp;
             } 
        }
    }
    
     } 
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);

        }
        printf("\n");
        
    }
        
    
    return 0;
}
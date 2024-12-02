#include<stdio.h>
int main(void){
   int row, col;
    printf("moi ban nhap so dong cua mang: ");
    scanf("%d", &row);
    printf("moi ban nhap so cot cua mang: ");
    scanf("%d", &col);
    int arr[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("moi ban nhap phan tu arr[%d][%d]:  ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("mang sau khi duoc sap xep la:\n");
    for(int j=0; j<col; j++){
        int x=0;
        for(int i=0; i<row; i++){
            x++;
            int key= arr[i][j];
            int a= i-1;
            while(a>=0 && arr[a][j]>key){
                arr[a+1][j]=arr[a][j];
                a=a-1;
            }
            arr[a+1][j]=key;
            
        }
        
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d   ", arr[i][j]);
            
        }
        printf("\n");
    }
    return 0;
}


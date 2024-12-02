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
    printf("mang sau khi duoc sap xep la:\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            int key= arr[i][j];
            int a= j-1;
            while(a>=0 && arr[i][a]>key){
                arr[i][a+1]=arr[i][a];
                a=a-1;
            }
            arr[i][a+1]=key;
        }
        for(int j=0; j<col; j++){
            printf("%d   ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

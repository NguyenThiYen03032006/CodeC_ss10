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
    printf("mang sau khi sap xep duong cheo chinh la:\n");
    if(row != col){
        printf("mang khong co duong cheo chinh \n");
    }else{
        for(int k=0; k<row; k++){
            for(int i=0; i<row; i++){
                for(int j=0; j<col; j++){
                    if(i==j){
                        if(arr[i][j]>arr[i+1][j+1]){
                            int key= arr[i][j];
                            arr[i][j]=arr[i+1][j+1];
                            arr[i+1][j+1]= key;
                        }
                    }
                }
            }
        }
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                printf("%d   ", arr[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}



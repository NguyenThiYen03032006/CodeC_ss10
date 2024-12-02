#include<stdio.h>
int main(void){
    int arr[6]={3,6,1,2,7,8,};
    for(int i=1; i<6; i++){
        int key= arr[i];
        int j=i-1;
        while(j>=0 && arr[j] > key ){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    printf("mang sau khi sap xep tang dan la: ");
    for(int i=0; i<6; i++){
        printf("%d  ", arr[i]);
    }
    return 0;
}

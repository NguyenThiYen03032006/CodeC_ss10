#include<stdio.h>
int main(void){
    int arr[5]={3,5,1,9,4};
    int temp;
    for(int i=0; i<5; i++){
        for(int j=0; j<5-1-i; j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("mang sau khi sap xep tang dan la: ");
    for( int i=0; i<5; i++){
        printf("%d  ", arr[i]);
    }
    return 0;
}

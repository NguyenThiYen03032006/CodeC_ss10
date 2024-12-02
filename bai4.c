#include<stdio.h>
int main(void){
    int arr[5]={3,6,9,1,4};
    for(int i=0; i<5; i++){
        int index=i;
        for(int j=i+1; j<5; j++){
            if(arr[index]< arr[j]){
                index=j;
            }
        }
        int a= arr[index];
        arr[index]= arr[i];
        arr[i]=a;
    }
    printf("mang sau khi sap xep tang dan la: ");
    for(int i=0; i<5; i++){
        printf("%d  ", arr[i]);
    }
    return 0;
}

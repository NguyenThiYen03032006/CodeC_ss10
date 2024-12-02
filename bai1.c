#include<stdio.h>
int main(void){
    int arr[5]={1,2,3,4,5};
    int number, index=0, flag=0;
    printf("moi ban nhap phan tu bat ky: ");
    scanf("%d", &number);
    for(int i=0; i<5; i++){
        if(arr[i] == number){
            index= i;
            flag=1;
        }
    }
    if(flag==1){
        printf("phan tu %d nam o vi tri arr[%d] \n", number, index);
    }else{
        printf("phan tu %d khong co trong mang\n", number);
    }
    return 0;
}

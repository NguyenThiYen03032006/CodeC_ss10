#include<stdio.h>
int main(void){
    int arr[6]={1,5,3,2,3,7};
    int num[6];
    int number, j=0, flag =-1;
    printf("moi ban nhap vao 1 phan tu bat ky: ");
    scanf("%d", &number);
    for(int i=0; i<6; i++){
        if(number == arr[i]){
            num[j]=i;
            j++;
            flag++;
        }
    }
    if(flag!= -1){
        printf("phan tu %d xuat hien o vi tri: ", number);
        for(int i=0; i<j; i++){
            printf("arr[%d]  ", num[i] );
        }
            }else{
                printf("phan tu %d khong co trong mang\n", number);
            }
    return 0;
}

#include<stdio.h>
int main(void){
    int arr[5]={3,5,1,7,2};
    int number;
    for(int i=0; i<5; i++){
        int index=i;
        for(int j=i+1; j< 5; j++){
            if(arr[j]<arr[index]){
                index=j;
            }
            int a= arr[index];
            arr[index]= arr[i];
            arr[i]= a;
        }
    }
        for( int i=0; i<5; i++){
            printf("%d  ", arr[i]);
        }
    printf("moi ban nhap vao 1 phan tu: ");
    scanf("%d", &number);
    int start=0, end= 4, flag=-1;
    while(start<=end){
        flag++;
        int mid= (start + end)/2;
        if( number == arr[mid]){
            printf("phan tu %d o vi tri %d\n", number, mid);
            return 1;
        }else if( arr[mid]> number){
            end= mid-1;
        }else{
            start=mid+1;
        }
    }
    printf("khong tim thay vi tri cua %d\n", number);
        

    return 0;
}

#include<stdio.h>
void input(int *arr,int size);
void output(int *arr,int size);
int main()
{
    int *a[100];

    input(a,5);

    output(a,5);


    return 0;
}
void input(int *arr,int size){
    int i = 0;
    while(scanf("%d",&arr[i]) != EOF){
        i++;
        if(i > size){
            printf("OverFlow\n");
            break;
        }
    }
}
void output(int *arr, int size){
    int i;
    for(i = 0; i < size; i++){
        printf("%d ",arr[i]);
    }
}

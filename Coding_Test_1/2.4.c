#include<stdio.h>

int main()
{
    int a[10] = {1, 2, 3, 4, 5};
    int size = 5, max_size = 10;
    int value, index, i;

    for(i=0;i<size;i++){
        printf("%d ", a[i]);
    }
    printf("\n");

    while(scanf("%d%d", &index, &value)==2){
        if(index < 0 || index > size){
            printf("Index out of bound\n");
            printf("Insert Index Again\n");
        }
        else{
            for(i=size; i>index; i--){
                a[i] = a[i-1];
            }
            a[index] = value;
            size++;
            for(i=0;i<size;i++){
                printf("%d ", a[i]);
            }
        }
    }
    return 0;
}

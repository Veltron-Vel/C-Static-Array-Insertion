#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,index,value;
    int arr[10] = {1,2,3,4,5,6,7,8,9};

    int length = 9;

    printf("The current array is :\n");
    for(i=0;i<length;i++){
        printf("%d\n",arr[i]);
    }

    printf("In which index do you want add an element (0-9):\n"); // Please do not create a buffer-overflow by using 10 or higher
    scanf("%d",&index);
    printf("What is the value of the element:\n");
    scanf("%d",&value);

    for(i=length-1;i>=index;i--){
        arr[i+1] = arr[i];
    }
    arr[index] = value;
    length++;

    printf("After insertion the array stands:\n");
    for(i=0;i<length;i++){
        printf("%d\n",arr[i]);
    }
    printf("The length of the array is %d\n",length);

    return 0;
}

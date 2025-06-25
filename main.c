#include <stdio.h>

void arrayInsertion(int arr[],int *n,int value,int index);
void arrayDeletion(int arr[],int *n,int index);
void printArray(int arr[],int *n);

int main()
{

    int arr[10] = {10,20,30,40};

    int length = sizeof(arr) / sizeof(int); // Also can directly say length == 4 so you dont print the extra elements.

    arrayInsertion(arr,&length,50,4);
    printArray(arr,&length);
    arrayDeletion(arr,&length,1);
    printArray(arr,&length);

}

void arrayInsertion(int arr[],int *n,int value,int index)
{
    int i;

    if(index<0 || index>*n)
    {
        printf("Out of bounds\n");
        return;
    }

    for(i=(*n)-1;i>=index;i--)
    {
        arr[i+1] = arr[i];
    }

    arr[index] = value;
    (*n)++; // So you can do the insertion multiple times
    printf("Suceesfully added value %d at index %d\n",value,index);
    return;
}

void arrayDeletion(int arr[],int *n,int index)
{
    int i;

    if(index<0 || index>=*n)
    {
        printf("Out of bounds\n");
        return;
    }
    for(i=index;i<(*n)-1;i++)
    {
        arr[i] = arr[i+1];
    }
    (*n)--;

    printf("Element delted at index %d\n",index);
}

void printArray(int arr[],int *n)
{
    int i;

    printf("Array:\n");

    for(i=0;i<(*n);i++)
    {
        printf("%d\n",arr[i]);
    }
}

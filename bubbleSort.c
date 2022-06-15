#include<stdio.h>
#include<float.h> 
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortArr(int n, int arr[]){

    for (int steps = 0; steps < n; steps++)
    {
        for (int i = 0; i+1 < n; i++)
        {
           if (arr[i]> arr[i+1])
           {
               swap(&arr[i], &arr[i + 1]);
           }
        }
       
    }
    
}

int main(){

    int n;
    scanf( "%d", &n );
    int unSrtArr[n];

    for (int i = 0; i < n; i++)
    {
        scanf( "%d", &unSrtArr[i] );
    }

    sortArr(n, unSrtArr);

    for (int i = 0; i < n; i++)
    {
        printf( "%d ", unSrtArr[i] );
    }
    printf("\n");

    return 0;
} 

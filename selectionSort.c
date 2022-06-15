#include<stdio.h>
#include<float.h> 
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

void swap(int *step, int *pos){
    int temp = *step;
    *step = *pos;
    *pos = temp;
}

void sortArr(int n, int num[]){

    for (int steps = 0; steps < n; steps++)
    {
        int minElement = num[steps], position = steps;

        for (int i = steps; i < n; i++)
        {
            if (num[i]<minElement)
            {
                minElement = num[i];
                position = i;
            }
        }
        swap(&num[steps], &num[position]);
    }
}

int main(){

    int num;

    scanf( "%d", &num );
    int unSrtArr[num];
    for (int i = 0; i < num; i++)
    {
        scanf( "%d", &unSrtArr[i] );
    }

    sortArr(num, unSrtArr);

    for (int i = 0; i < num; i++)
    {
        printf( "%d ", unSrtArr[i] );
    }
    printf( "\n" );
    
    
    return 0;
} 

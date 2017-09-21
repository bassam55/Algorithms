#include<stdio.h>

#define MAX 100000

int main(){
    int arr[MAX], i, j, key;
    int arrSize;
    scanf( "%d", &arrSize);
    for (int k = 0; k < arrSize; k++)
        scanf( "%d", &arr[k]);
    for( i = 0; i < arrSize; i++ ){
        key = arr[i];
        j = i - 1;

        while( j >= 0 && arr[j] > key ){
            arr[j + 1] = arr [j];
            j--;

        }
        arr[j + 1] = key;
    }
    for (int k = 0; k < arrSize; k++ )
        printf( "%d ", arr[k] );


}

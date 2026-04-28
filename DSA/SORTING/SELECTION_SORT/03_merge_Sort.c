#include <stdio.h>
void merge(int x[], int y[], int arr[], int n1, int n2){
    int i = 0, j = 0, k = 0;
    while(i<n1 && j<n2){
        if(x[i]<y[j]){
            arr[k] = x[i];
            i++;
            k++;
        }
        else{
            arr[k] = y[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        arr[k] = x[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = y[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int size){
    if(size == 1) return;
    int n1 = size/2;
    int n2 = size - size/2;
    int x[n1], y[n2];

    for(int i = 0; i<n1; i++){
        x[i] = arr[i];
    }
    for(int j = 0; j<n2; j++){
        y[j] = arr[n1+j];
    }
    mergeSort(x, n1);
    mergeSort(y, n2);
    merge(x, y, arr, n1, n2);
}

int main(){
    int a[7] = {7, 3, 6, 2, 1, 4, 5};
    mergeSort(a,7);
    for(int i = 0; i<7; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
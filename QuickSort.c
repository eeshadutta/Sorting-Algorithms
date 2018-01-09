#include <stdio.h>


int partition(int arr[], int start, int end){
    int i= start +1;
    int piv= arr[start];
    int temp,j;
    for (j=start +1; j<=end; j++){
        if (arr[j]<piv){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
        }
    }
    temp=arr[start];
    arr[start]=arr[i-1];
    arr[i-1]=temp;
    return (i-1);
}

void quicksort(int arr[], int start, int end){
    if (start<end){
        int pos=partition(arr,start,end);
        quicksort(arr,start,pos-1);
        quicksort(arr,pos+1,end);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n],i;
    for (i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    quicksort(arr, 0, n-1);
    for (i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
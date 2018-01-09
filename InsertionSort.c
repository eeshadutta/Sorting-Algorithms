#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n], i, j, temp;
    for(i=0; i<n; i++){
        scanf ("%d", &arr[i]);
    }
    for (i=0; i<n; i++){
        temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    for (i=0; i<n; i++){
        printf ("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
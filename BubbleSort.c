#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n], i, j, temp, swap;
    for (i=0;i<n;i++){
        scanf ("%d", &arr[i]);
    }
    for (i=0;i<n;i++){
        swap = 0;
        for (j=0; j<n-1; j++){
            if (arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swap = 1;
            }
        }
        if (swap==0)
            break;
    }
    for (i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
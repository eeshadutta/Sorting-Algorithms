#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n], i, j, smallest, temp;
    for (i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for (i=0; i<n; i++){
        smallest=i;
        for (j=i+1; j<n; j++){
            if (arr[j]<arr[smallest]){
                smallest=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[smallest];
        arr[smallest]=temp;
    }
    for (i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
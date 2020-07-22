#include<stdio.h>

int main(){
    int n,k;
    scanf("%d %d", &n, &k);
    int arr[n];
    int count=0;
    k=k-1;
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int max=arr[k];

    for(int i=0; i<n; i++){
        if(arr[i]>=max && arr[i] !=0)
            count++;
    }
    printf("%d\n", count);
    return 0;
}

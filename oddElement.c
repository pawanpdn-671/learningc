#include<stdio.h>
int oddelemprint(int arr[], int i, int n);
int main(){
    int arr[100], oddelem, n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    oddelem = oddelemprint(arr, 0, n);
    printf("%d", oddelem);

}

int oddelemprint(int arr[], int i, int n){
    if(i == n){
        return 0;
    }
    else{
        if(arr[i]%2 != 0){
            return arr[i] + oddelemprint(arr, i+1, n);
        }
        else{
            return oddelemprint(arr, i+1, n);
        }
    }
}

#include<stdio.h>

int main(void){
    int arr[10000];
    int ind = 0;
    while(1) {
        int current;
        scanf("%d", &current);
        if(current == 0) {
            break;
        }
        arr[ind] = current;
        ind++;
    }
    for(int i = 0;i < ind;i += 2){
        printf("%d ", arr[i]);
    }
    for(int j = 1 ;j < ind;j += 2){
        printf("%d ", arr[ind - j - 1]);
    }
 
    
}
#include <stdio.h>
#define MAX 22
int binarysearch(int* a,int size,int target);
int main (void){
    int a[] ={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22};
    printf("%d",binarysearch(a,MAX,4));
    return 0;
}
int binarysearch(int* a,int size,int target){
    int L = 1 ;
    int R = size  ;
    int mid;
    while(R-L){
        mid = L +(R-L)/2;
        printf("midis:%d  ",mid);
        printf("a[mid] is : %d\n",a[mid]);
        if(a[mid]==target){
            return 1;
        }
        
        if (a[mid] > target) {
            R= mid -1;
        }
        
        else
        {
            L = mid +1;
        }
        
    }
    return -1 ;
    
} 
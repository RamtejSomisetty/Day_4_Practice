#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//Dutch national flag
//Sort array of 0s,1s,2s with void sortColors(int arr[], int n) in single pass

int* sortColors(int array[], int n){

    int low=0,mid=0;
    int high = n-1;
    int temp;
    for(int i=0;i<n;i++){
        if(array[mid]==0){
            temp=array[mid];
            array[mid]=array[low];
            array[low]=temp;
            low++;
            mid++;
        }
        else if(array[mid]==1){
            mid++;
        }
        else if(array[mid]==2){
            temp=array[high];
            array[high]=array[mid];
            array[mid]=temp;
            high--;
        }
        else{
            printf("\nthe given array have element which is not 0(or)1(or)2\n");
        }
    }
    return array;

}
int main(){

    int array[] = {0,1,2,0,0,1,2,1,0,2,1};
    int n =sizeof(array)/sizeof(array[0]);
    int *ptr =sortColors(array,n);
    printf("Array of elements after sorting:- ");
    for(int i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }
    printf("\n");
}
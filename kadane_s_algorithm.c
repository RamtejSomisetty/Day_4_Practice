#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>

int kadane_s_algoritm(int array[],int n,int* start,int* end){
    int temp_start =0;
    int max_sum= INT_MIN;
    int current_sum =0;     

    for(int i=0;i<n;i++){
        current_sum+=array[i];
        if(max_sum<current_sum){
            max_sum=current_sum;
            *start=temp_start;
            *end=i;
        }
        else if(current_sum <0){
            current_sum=0;
            temp_start=i+1;
        }
    }
    return max_sum;
}

int main(){

    int array[]={-2,-1,0,1,0,-1,2};
    int n = sizeof(array)/sizeof(array[0]);
    int start =0;
    int end =0;
   
    int max_sum = kadane_s_algoritm(array,n,&start,&end);
    printf("maximum array sum starting at %d and ending at %d is %d\n",start,end,max_sum);
}
#include <stdio.h>
#include <stdlib.h>
#define NELEMS(x) (sizeof(x)/sizeof(x[0]))

void print_array(int arr[],int n){
    printf("Array Size: %i\n",n);
    for(int i = 0; i < n; i++){    
        printf("Element %i is %i\n", i, arr[i]);
    }
}
// right now assume that nelems is even for simplicity
int a_merge

int mergesort(int *a, int nelems){
   /*
    if(nelems == 1){
        return *a;
    }

    size_t newsize = nelems/2;
    int a1[newsize], a2[newsize];
    for(int i = 0; i < newsize; i++){
        a1[i] = a[i];
        a2[i] = a[i+(newsize)];
    }

    a1 = mergesort(a1,newsize);
    mergesort(a2,newsize);

    return a_merge()
    */
}

void merge

int main(void){

    int array[10] = {0,3,1,2,15,36,5,69,894,9};
    print_array(array,NELEMS(array));
    new_array = 
    
}
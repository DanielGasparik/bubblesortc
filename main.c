#include <stdio.h>
#include <math.h>
int descendingBubbleSort(int arr[],int n){//written using pointers
int temporary;
int *p,*q;
for(p=arr;p<arr+n;p++){
    for(q=arr;q<arr+n-1;q++){
        if(*p>*q){
            temporary=*p;
            *p=*q;
            *q=temporary;


        }
    }
}
printf("Worst case complexity is O(n^2)=%.0f\n",pow(n,2));
printf("Bubble sorted array is: [ ");
for(p=arr;p<arr+n;p++){
    printf("%d,",*p);
}
printf("]");
return 0;
}
int ascendingBubbleSort(int arr[],n){//written using indexes
    int i,j;
    int temporary;
    for(i=0;i<n;i++){
        if(*arr_ptr<*(arr_ptr+1)){
            *arr_ptr=temporary;

        }

    }

}
 */
int main() {
    int input,end,n;
    //how many numbers in array
    printf("Decide how many numbers I will be sorting\n");
    scanf("%d",&n);
    int arr[n];
    //load them into an array
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    while((input=getchar())!='e') {
        switch (input) {
            case 'a':
                //ascendingBubbleSort(arr, n);
                break;
            case 'd':
                descendingBubbleSort(arr,n);
                break;

        }
    }
    return 0;
}
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
        for(j=0;j<n+1;j++){
            if(arr[i]<arr[j]){
                arr[i]=temporary;
                arr[i]=arr[j];
                arr[j]=temporary;


                }
        }

    }
    printf("Worst case complexity is O(n^2)=%.0f\n",pow(n,2));
    printf("Bubble sorted array is: [ ");
    for(i=0;i<n;i++){
        printf("%d,",arr[i]);
    }
    printf("]");
    return 0;

}
int main() {
    int input,n;
    //how many numbers in array
    printf("Decide how many numbers I will be sorting\n");
    scanf("%d",&n);
    int arr[n];
    printf("\nPlease input the siad numbers in");
    //load them into an array
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nDecide which bubble sort you want to do 'a' for ascending ,'d' for descending or 'e' if you want to end the program");
    while((input=getchar())!='e') {
        switch (input) {
            case 'a':
                ascendingBubbleSort(arr, n);
                break;
            case 'd':
                descendingBubbleSort(arr,n);
                break;

        }
    }
    return 0;
}
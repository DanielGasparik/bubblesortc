#include <stdio.h>
int ascendingBubbleSort(int *arr,int n){
int i=0,j=0,temporary;
for(i;i<n;i++){
    for(j;j<n-i;j++){
        if(arr[i]>arr[j]){


        }
    }
}
for(i=0;i<n;i++){
    printf("%d",arr[i]);
}

}
int descendingBubbleSort(int *arr,n){

}
int main() {
    int input,end,n;
    //how many numbers in array
    printf("Decide how many numbers I will be sorting");
    scanf("\n%d",&n);
    int arr[n];
    //load them into an array
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    while((input=getchar()!='e'))
    switch(input){
        case 'a':
            ascendingBubbleSort(arr,n);
            break;
        case 'd':
            descendingBubbleSort(arr,n);
            break;

    }
    return 0;
}
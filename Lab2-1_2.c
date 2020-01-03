#include<stdio.h>
int main(){
    int a[]={2,5,8,1,3,15,4,12,15,18};
    int n=10;
    printf("Insertion Sort Ascending Order:\n");
    SortAsc(a,n);
    printf("Insertion Sort Descending Order:\n");
    SortDesc(a,n);
    return 0;
}
void display(int A[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d\t",A[i]);
    }
    printf("\n");
}

int SortAsc(int A[],int n){
    int i,j,B[n];

    for(i=0; i<n; i++){
        j=i-1;
        while(B[j]>A[i] && j>=0){
            B[j+1]=B[j];
            j--;
        }
        B[j+1]=A[i];
    }
    display(B,n);
}
int SortDesc(int A[],int n){
    int i,j,B[n];

    for(i=0; i<n; i++){
        j=i-1;
        while(B[j]<A[i] && j>=0){
            B[j+1]=B[j];
            j--;
        }
        B[j+1]=A[i];
    }
    display(B,n);
}

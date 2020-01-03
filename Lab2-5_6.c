#include <stdio.h>
int interactiveSearch(int A[], int n, int x);
int recursiveSearch(int A[],int i, int n, int x);
void display(int A[], int n);
void printResult(int flag);

int main(){
    int n=10;
    int A[10] = {2,5,8,1,3,15,4,12,15,18};
    int x,flag;
    display(A,n);
    printf("Search for  interactive loop: ");
    scanf("%d",&x);
    flag = interactiveSearch(A,n,x);
    printResult(flag);
    printf("Search for recursive function: ");
    scanf("%d",&x);
    flag = recursiveSearch(A,0,n,x);
    printResult(flag);
    return 0;
}
int interactiveSearch(int A[], int n,int x)
{
    int i;
    for (i=0; i<n; i++){
        if(A[i] == x){
            return i;
        }
    }
    return -1;
}
int recursiveSearch(int A[], int i, int n, int x)
{
    if(i>=n)
        return -1;

    if(A[i] == x){
        return i;
    }
    recursiveSearch(A,i+1,n,x);
}


void display(int A[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d\t",A[i]);
    }
    printf("\n");
}

void printResult(int flag){
    if(flag != -1)
        printf("Item found at index of %d\n",flag);
    else
        printf("Item not found\n");
}


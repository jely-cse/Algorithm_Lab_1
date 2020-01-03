#include<stdio.h>
void display(int a[],int length);
void printarray(int b[], int length);
void printarrayRev(int c[], int length);
int main(){
    int a[100]={1,3,8,9,7,6,11,14,2,5};
    int length=10;
    int i,x,y;
    int flag=-1;
    //a) print the array
    for(i=0;i<length;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
    //b) insert 10th index and print
    a[10]=21;
    length=11;
    display(a,length);
    //c) update 5th index
    a[5]=11;
    display(a,length);
    //d) Search any value in the array
    printf("Search any value:");
    scanf("%d",&x);
    for(i=0;i<length;i++){
        if(a[i]==x){
            flag=i;
            break;
        }
    }
    if(flag!=1){
      printf("Found");
    }
    else{
        printf("Not Found");
    }
    // inserting and 3rd INDEX  SHIFTING ALL OTHER VALUE TO RIGHTT
    printf("3rd index insert:");
    scanf("%d",&y);
    for(i=length-1;i>2;i--){
        a[i+1]=a[i];

    }
    a[3] = y;
    length=12;
    display(a,length);
    //Recursion function printing the array
    printf("Recursion function printing the array:");
    printarray(a,length);
    // print the array recursive function to reverse order.
    printf(" print the array recursive function to reverse order:\n");
    printarrayRev(a,length);

    return 0;
}
void display(int a[], int length){
    int i;
    for(i=0;i<length;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
}
void printarray(int b[], int length)
{
    if(length<0)
        return;

    printarray(b, length-1);
    printf("%d\t", b[length-1]);
}
void printarrayRev(int c[], int length)
{
    if(length<0)
        return;

    printf("%d\t", c[length-1]);
    printarrayRev(c, length-1);
}


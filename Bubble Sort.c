#include<stdio.h>
void print_Array(int A[],int n)
{
    for(int i=0; i<n; i++)
    {
        printf("\t %d",A[i]);
    }
}
void bubble_sort(int A[],int n)
{
    int i,j,temp;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j+1];
                A[j+1]=A[j];
                A[j]=temp;

            }

        }
    }
    //print_Array(A,n);
}
int main()
{
    printf("Enter Array Size : ");
    int n;
    scanf("%d",&n);
    int A[n],i;
    printf("Enter Array Elements : \n");
    for(i=0; i<n; i++)
    {
        printf("\t A[%d] = ",i);
        scanf("%d",&A[i]);
    }
    printf("Array Elements are : \n");
    print_Array(A,n);
    bubble_sort(A,n);
    printf("\nAfter Sorted Array Elements are : \n");
    print_Array(A,n);
}

#include<stdio.h>
void print_Array(int A[],int n)
{
    printf("Array Elements are : \n");
    int i;
    for(i=0; i<n; i++)
    {
        printf("\t %d ",A[i]);
    }
}
void bubble_sort (int A[],int n)
{
    int i,j,temp;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;

            }
        }
    }
    printf("\n After Sorted Array ");
    print_Array(A,n);
    //binary_search(A,n);
}
void  binary_search(int A[],int n)
{
    printf("\n Enter Data You want to search : ");
    int d;
    scanf("%d",&d);
    int start=0;
    int end=n-1;
    int found=0;
    int mid;//=(start+end)/2;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(d==A[mid])
        {
            printf("%d Found at  %dth Position",d,mid+1);
            found=1;

        }

        if(d>A[mid])
        {
            start=mid+1;
        }
        else
            end=mid-1;
    }
    if(found==0)
    {
        printf("%d Data Not Found ",d);

    }

}


int main()
{
    printf("Enter size of Array : ");
    int n;
    scanf("%d",&n);
    int A[n],i;
    printf("Enter Array Elements : \n");
    for(i=0; i<n; i++)
    {
        printf("A[%d]  = ",i);
        scanf("%d",&A[i]);
    }
    print_Array(A,n);
    bubble_sort (A,n);
    binary_search(A,n);
}

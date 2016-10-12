#include <stdio.h>

// Swap Function
void swap(int* a, int* b)
{
    int *temp = a;
    a = b;
    b = temp;
}

//Bubble Sort
void Sorting(int arr[],int n)
{
    int i;
    for(i = 0; i<n; i++)
    {
        int k;
        int minm = arr[i];
        for(k=i+1;k<n;k++)
        {
            if(arr[k]<minm)
                minm = arr[k];
        }
        swap(&minm,&arr[i]);

    }
}

// Function to find out if required Sum of two array variables exists
int Sums(int arr[],int h,int n)
{
    int r =0, l=n-1;
    while (r<l)
    {
        if(arr[r]+arr[l]==h)
           {
             return 1;
           }
        else if(arr[r]+arr[l]>h)
            l--;
        else if(arr[r]+arr[l]<h)
            r++;
        else
           {
             printf("NO");
             return 0;
           }
    }

}

int main() {
	int a[1000];
	int t,n,x;
	int i, j,C[1000];
	scanf("%d",&t);
	for(i = 0;i<t;i++)
	{
	scanf("%d%d",&n,&x);
	for(j=0;j<n;j++)
        {
            scanf("%d",&C[j]);
        }
	Sorting(C,n);
	a[i]=Sums(C,x,n);
	}

	for(i=0;i<t;i++)
      {
        if(a[i]==1)
            printf("YES");
        else
            printf("NO");
      }

	//return 0;
}


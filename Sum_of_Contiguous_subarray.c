#include<stdio.h>

int main()
{
    int a[200],i,j,t,n,k;


    // Test cases input from user
    scanf("%d",&t);
    // Array Size input from user
    scanf("%d",&n);

    // Array input for each test case
    for(i=0;i<t;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        int maxx = a[0];
        int sum=0;
        k=0;
        while(k!=n)
        {
            sum=sum+a[k];
            // Updates maxx if the sum is more than the previous sum
            if(sum>maxx)
                maxx=sum;
            k++;
        }
        // Prints sum for each test case
        printf("%d",maxx);
    }

}

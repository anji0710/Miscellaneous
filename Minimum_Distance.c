#include<stdio.h>

// Funtion to find out minimum distance
int min_dist(int a[], int n, int x, int y)
{
    int i, md = n;

    for(i=0;i<n;i++)
        {
        if(a[i]==x || a[i]==y) // To find the first element
        prev =i;
        break;
        }
    for(;i<n;i++)
        {
            if(a[i]==x || a[i]==y) // To find second element
            {
                // To update 'prev' if there's a repetion of previous found element
                if(a[i]==a[prev] && (i-prev)<md)
                    {
                        prev = i;
                    }
                 // To find next element
                 if(a[i]!=a[prev] && (i-prev)<md)
                    {
                        md = i-prev;
                    }
            }
        }
          return md;
}


main()
{
    int a[10], n;
    a[10]={1,2,3,4,5,6,8,7,9,10};
    n=10;
    dist = min_dist(a,n);
    printf("%d",dist);

}

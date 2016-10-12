#include<stdio.h>


struct Ceil_floor
{
    int c;
    int f;
};

struct Ceil_floor Findthem(int a[],int x,int n)
{
    struct Ceil_floor ob1;
    ob1.c = ob1.f = a[0];
    while(i!=n)
    {
        if(a[i]<x && a[i]>ob1.c)
            ob1.c = a[i];
        if(a[i]>x && a[i]<ob1.f)
            ob1.f = a[i];
    }

       return ob1;

};

main(){
int x;
int A[10]= {3,45,16,5,7,22,31,10,19,28};
printf("Enter the number");
scanf("%d",&x);
struct Ceil_floor Cf = Findthem(A,x,10);
printf("%d",Cf.c);
printf("%d",Cf.f);
return 0;
}

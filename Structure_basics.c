#include<stdio.h>
struct node {
int data;
struct node *next;
};

main(){
struct node o1;
struct node *o2;

// Dynamic Memory Allocation
o2 = (struct node*)malloc(sizeof(struct node));

// Not required for non-pointer type objects
//o1 = (struct node*)malloc(sizeof(struct node));

o2->data = 4;
o1.data = 3;

printf("%d",o1.data);
printf("%d",o2->data);
return 0;
}

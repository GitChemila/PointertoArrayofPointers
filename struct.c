#include <stdio.h>
#include <stdlib.h>
typedef struct{
 	int x;
    int y;
}u;
    
u **uu;    
int main() {
    
    uu=(u**)malloc(sizeof(u*)*4); //or uu=malloc(sizeof(u*)*4)
    u test1;
    *uu=&test1;
    (*uu)->x=9;
    u test2;
    //*(uu+1)=&test2; this is also working
    uu[1]=&test2;
    (*(uu+1))->x=8;
    printf("Hello, World!%d \n",(*uu)->x);
    //*(uu+1)->x=8; this is also  working
   
    
    uu[1]->x=4;
     printf("Hello, World!%d \n",test2.x);
    
    return 0;
}
    

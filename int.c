#include <stdlib.h>
#include <stdio.h>

int main() {
    int o=8;
    int p=9;
   	int **heaparr;
    heaparr = (int **) malloc(sizeof(int*) * 4);
    *heaparr=&o;
    *(heaparr+1)=&p;
    printf("Hello, World! %d\n",**(heaparr+0));
    printf("Hello, World! %d\n",**(heaparr+1));
    **heaparr=6;
    printf("Hello, World! %d\n",**(heaparr+0));
    *heaparr=&p;
    printf("Hello, World! %d\n",**(heaparr+0));
    return 0;
}

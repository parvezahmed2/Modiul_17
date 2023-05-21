#include<stdio.h>
void world(){
    printf("world\n");
}

void hello(){

    printf("Hello start\n");
    world();
    printf("Hello end \n");
}

int main(){


     hello();
    printf("End\n");
    return 0;
}
#include<stdio.h>
int main(){

    int x,y,z;
    printf("Enter first second and third number: ");
    scanf("%d%d%d", &x,&y,&z);
    if((y<x && x<z)||(z<x&&x<y)){
        printf("1");
    }
    else if((x<y&&y<z)||(z<y&&y<x)){
        printf("2");
    }
    else{
        printf("3");
    }
    return 0;
}
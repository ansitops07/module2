#include<stdio.h>
int main(){
    int p=2000,r=5,t=3;
    int si,ci;
    printf("simple intrest is:");
    si=(p*r*t)/100;
    printf("%d",si);
    printf("\n compound intrest is:");
    ci=p*(1+r/t);
    printf("%d",ci);
    return 0;
}

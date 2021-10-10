#include <stdio.h>
int main(){

int a[7]={654,756,986,575,786,9875,785};
int max=a[0], i;
for(i=1;i<7;i++){
    if(a[i]>max)
    max=a[i];
}
    printf("the max value is:%d\n", max);
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include <math.h>

int monte_carlo(int n, double *p){
    int i;
    double x,y;
    int m;

    for (i=0; i < n; i++){
        x = (double)rand() / RAND_MAX;
        y = (double)rand() / RAND_MAX;

        if (pow(x, 2)+pow(y,2) >= 1){

            
        }


    }




int main(){
    int i;
    double num;


    for(i=0;i<100;i++){
        num = (double)rand() / RAND_MAX;
        printf("%lf\n", num);
    }

    return 0;
}
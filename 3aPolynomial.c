// to analyse the order of growth of basic operation of the algorithm to find the solution of a polynomial
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
void main(){
    srand(time(0));
    int n=10;
    int array[100];
    char f;
        int sum=0,i,j,count,num;
        float x, polySum;
        FILE *fp = NULL;
        fp = fopen("poly2.txt","w");
    for(j=0;j<10;j++){
        int p=1;
        count=0;
        num = j
        x = j;
        for (i = 0; i <= num; i++)
            array[i] = rand()%10;
        polySum = array[0];
        for (i = 1; i <= num; i++){
            p = p* x;
            sum = sum + array[i]*p;
            count+=2;
        }
        fprintf("%d %d\n",num,count);
    }
    fclose(fp);
}
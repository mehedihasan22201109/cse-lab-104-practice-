#include<stdio.h>
int getMax(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main(){

printf("%d\n",getMax(20,50));


}



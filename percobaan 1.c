#include<stdio.h>
int minimum (int x, int y)
{
    if(x<y)
    return(x);
    else
    return(y);
}
void main()
{
    int a,b,hasil;
    printf("masukkan 2 bilangan=\n");
    scanf("%d%d",&a,&b);
    hasil=minimum(a,b);
    printf("nilai terkecil=%d\n",hasil);
    //printf("terkecil=%d",minimum(1,2);//
}

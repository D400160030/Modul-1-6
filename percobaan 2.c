#include<stdio.h>
int maximum (int x, int y)
{
    if(x>y)
    return(x);
    else
    return(y);
}
void main()
{
    int a,b,hasil;
    printf("masukkan 2 bilangan=\n");
    scanf("%d%d",&a,&b);
    hasil=maximum(a,b);
    printf("nilai terbesar=%d\n",hasil);
    //printf("terbesar=%d",maximum(1,2);//
}

#include<stdio.h>
    int c1,c2,c3;
    int total;
    int b1,b2,b3;
    char a1[100];
    char a2[100];
    char a3[100];
    int Discount;
    int total_bayar;
    int bayar, kembalian;
    int harga1,harga2,harga3;
    float disc;

void data1()
{
    head();
    printf (" barang yang dibeli : \n");
    printf ("\n 1. Barang \t: ");
    scanf ("%s",&a1);
    printf ("\n    jumlah \t: ");
    scanf ("%d",&b1);
    printf ("\n    harga \t: ");
    scanf ("%d",&c1);
    harga1=b1*c1;
}
void data2()
{
    system("cls");
    head();
    printf (" barang yang dibeli : \n");
    printf ("\n 2. Barang \t: ");
    scanf ("%s",&a2);
    printf ("\n    jumlah \t: ");
    scanf ("%d",&b2);
    printf ("\n    harga \t: ");
    scanf ("%d",&c2);
    harga2=b2*c2;
}
void data3()
{
    system("cls");
    head();
    printf (" barang yang dibeli : \n");
    printf ("\n 3. Barang \t: ");
    scanf ("%s",&a3);
    printf ("\n    jumlah \t: ");
    scanf ("%d",&b3);
    printf ("\n    harga \t: ");
    scanf ("%d",&c3);
    harga3=b3*c3;
}

void pay()
{
    total=harga1+harga2+harga3;
    printf (" Total : %d \n",total);
    printf (" Discount : ");
    scanf("%f",&disc);
    Discount=total*(disc/100);
    printf (" Discount : %d  \n",Discount);
    total_bayar=total-Discount;
    printf(" Total bayar :%d \n",total_bayar);
    printf (" Uang Bayar : ");
    scanf("%d",&bayar);
    kembalian=bayar-total_bayar;
    printf(" Kembalian : %d \n",kembalian);
}

void view()
{
    system("cls");
    head();
    printf(" no. Nama Barang Jumlah  Harga \tTotal(Rp)\n");
    printf(" 1.  %s \t  %d  \t %d  \t%d \n",a1,b1,c1,harga1);
    printf(" 2.  %s \t  %d  \t %d  \t%d \n",a2,b2,c2,harga2);
    printf(" 3.  %s \t  %d  \t %d  \t%d \n",a3,b3,c3,harga3);
    printf("================================================\n");
}

void head()
{
    printf ("=================================================\n");
    printf ("================== Indomaret ====================\n");
    printf ("=============== Indomaret Group==================\n");
    printf ("=================================================\n");

}

void foot()
{
    printf ("================================================\n");
    printf ("\t \t Terima Kasih  \n");
}

void main()
{
    data1();
    data2();
    data3();
    view();
    pay();
    foot();
}



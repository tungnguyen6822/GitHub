#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
    float a,b,c,s,dt;
    printf("nhap vao canh thu nhat a : ");scanf("%f", &a);
    printf("nhap vao canh thu hai b : ");scanf("%f", &b);
    printf("nhap vao canh thu ba c :");scanf("%f", &c);
        if ((a+b>c)&&(a+c>b)&&(b+c>a))
		{
           printf(" \nday la ba canh cua mot tam giac!");
           if ((a*a+b*b==c*c)||(a*a+c*c==b*b)||(c*c+b*b==a*a)) printf("(tam giac nay la tam giac vuong)\n");
           if ((a==b)&&(b==c)) printf("(day la tam giac deu)\n");
        else if ((a==b)||(b==c)||(c==a))
        {
           printf("(day la tam giac cân)\n");
        }
    s=(a+b+c)/2;
    dt=(float)sqrt(s*(s-a)*(s-b)*(s-b));
    printf("\nchu vi tam giac la %.2f dien tam giac la %.2f", s*2 , dt);
    }
    else printf("day khong phai la ba canh cua 1 tam giac");
getch();
}

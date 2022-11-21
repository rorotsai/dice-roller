#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int a1,a2,b1,b2,c1,c2,d1,d2,e1,e2,f1,f2;//first dice
int g1,g2,h1,h2,i1,i2,j1,j2,k1,k2,l1,l2;//second dice
int td1,tm11,tm12,tm13,tm14,tm15,tm16,tm17;
int td2,tm21,tm22,tm23,tm24,tm25,tm26,tm27;
double ans2,ans3,ans4,ans5,ans6,ans7,ans8,ans9,ans10,ans11,ans12;
//x = (float)ans1/z

fprobset(){
    printf("Please using the fractional number\nEnter the molecular then the denominator\n");
    printf("This is the first dice setting\n");
    printf("Probability of 1 ?\n");
    scanf("%d%d",&a1,&a2);
    printf("probability of 1 is : %d / %d \n",a1,a2);
    printf("Probability of 2 ?\n");
    scanf("%d%d",&b1,&b2);
    printf("probability of 2 is : %d / %d \n",b1,b2);
    printf("Probability of 3 ?\n");
    scanf("%d%d",&c1,&c2);
    printf("probability of 3 is : %d / %d \n",c1,c2);
    printf("Probability of 4 ?\n");
    scanf("%d%d",&d1,&d2);
    printf("probability of 4 is : %d / %d \n",d1,d2);
    printf("Probability of 5 ?\n");
    scanf("%d%d",&e1,&e2);
    printf("probability of 5 is : %d / %d \n",e1,e2);
    printf("Probability of 6 ?\n");
    scanf("%d%d",&f1,&f2);
    printf("probability of 6 is : %d / %d \n",f1,f2);
    td1 = a2 * b2* c2 * d2 * e2 * f2;
    tm11 = a1 * b2* c2 * d2 * e2 * f2;
    tm12 = a2 * b1* c2 * d2 * e2 * f2;
    tm13 = a2 * b2* c1 * d2 * e2 * f2;
    tm14 = a2 * b2* c2 * d1 * e2 * f2;
    tm15 = a2 * b2* c2 * d2 * e1 * f2;
    tm16 = a2 * b2* c2 * d2 * e2 * f1;
    tm17 = tm11+tm12+tm13+tm14+tm15+tm16;
    if(tm17 == td1 ){
        printf("Setting correctly\n");
    }
    if(tm17 != td1 ){
        printf("Bad setting \n");
        fprobset();
    }
}

sprobset(){
    printf("Please using the fractional number\nEnter the molecular then the denominator\n");
    printf("This is the Second dice setting\n");
    printf("Probability of 1 ?\n");
    scanf("%d%d",&g1,&g2);
    printf("probability of 1 is : %d / %d \n",g1,g2);
    printf("Probability of 2 ?\n");
    scanf("%d%d",&h1,&h2);
    printf("probability of 2 is : %d / %d \n",h1,h2);
    printf("Probability of 3 ?\n");
    scanf("%d%d",&i1,&i2);
    printf("probability of 3 is : %d / %d \n",i1,i2);
    printf("Probability of 4 ?\n");
    scanf("%d%d",&j1,&j2);
    printf("probability of 4 is : %d / %d \n",j1,j2);
    printf("Probability of 5 ?\n");
    scanf("%d%d",&k1,&k2);
    printf("probability of 5 is : %d / %d \n",k1,k2);
    printf("Probability of 6 ?\n");
    scanf("%d%d",&l1,&l2);
    printf("probability of 6 is : %d / %d \n",l1,l2);
    td2 = g2 * h2 * i2 * j2 * k2 * l2;
    tm21 = g1 * h2 * i2 * j2 * k2 * l2;
    tm22 = g2 * h1 * i2 * j2 * k2 * l2;
    tm23 = g2 * h2 * i1 * j2 * k2 * l2;
    tm24 = g2 * h2 * i2 * j1 * k2 * l2;
    tm25 = g2 * h2 * i2 * j2 * k1 * l2;
    tm26 = g2 * h2 * i2 * j2 * k2 * l1;
    tm27 = tm21+tm22+tm23+tm24+tm25+tm26;
    if(tm27 == td2 ){
        printf("Setting correctly\n");
    }
    if(tm27 != td2 ){
        printf("Bad setting \n");
        sprobset();
    }
}

int main()
{
    fprobset();
    sprobset();
    ans2 = ((float)tm11/td1)*((float)tm21/td2);
    ans2 = ans2*100;
    ans3 = ((float)tm11/td1)*((float)tm22/td2)+((float)tm12/td1)*((float)tm21/td2);
    ans3 = ans3*100;
    ans4 = ((float)tm11/td1)*((float)tm23/td2)+((float)tm12/td1)*((float)tm22/td2)+((float)tm13/td1)*((float)tm21/td2);
    ans4 = ans4*100;
    ans5 = ((float)tm11/td1)*((float)tm24/td2)+((float)tm12/td1)*((float)tm23/td2)+((float)tm13/td1)*((float)tm22/td2)+((float)tm14/td1)*((float)tm21/td2);
    ans5 = ans5*100;
    ans6 = ((float)tm11/td1)*((float)tm25/td2)+((float)tm12/td1)*((float)tm24/td2)+((float)tm13/td1)*((float)tm23/td2)+((float)tm14/td1)*((float)tm22/td2)+((float)tm15/td1)*((float)tm21/td2);
    ans6 = ans6*100;
    ans7 = ((float)tm11/td1)*((float)tm26/td2)+((float)tm12/td1)*((float)tm25/td2)+((float)tm13/td1)*((float)tm24/td2)+((float)tm14/td1)*((float)tm23/td2)+((float)tm15/td1)*((float)tm22/td2)+((float)tm16/td1)*((float)tm21/td2);
    ans7 = ans7*100;
    ans8 = ((float)tm12/td1)*((float)tm26/td2)+((float)tm13/td1)*((float)tm25/td2)+((float)tm14/td1)*((float)tm24/td2)+((float)tm15/td1)*((float)tm23/td2)+((float)tm16/td1)*((float)tm22/td2);
    ans8 = ans8*100;
    ans9 = ((float)tm13/td1)*((float)tm26/td2)+((float)tm14/td1)*((float)tm25/td2)+((float)tm15/td1)*((float)tm24/td2)+((float)tm16/td1)*((float)tm23/td2);
    ans9 = ans9*100;
    ans10 = ((float)tm14/td1)*((float)tm26/td2)+((float)tm15/td1)*((float)tm25/td2)+((float)tm16/td1)*((float)tm24/td2);
    ans10 = ans10*100;
    ans11 = ((float)tm15/td1)*((float)tm26/td2)+((float)tm16/td1)*((float)tm25/td2);
    ans11 = ans11*100;
    ans12 = ((float)tm16/td1)*((float)tm26/td2);
    ans12 = ans12*100;
    printf("The probability of 2 is %.3f %\n", ans2);
    printf("The probability of 3 is %.3f %\n", ans3);
    printf("The probability of 4 is %.3f %\n", ans4);
    printf("The probability of 5 is %.3f %\n", ans5);
    printf("The probability of 6 is %.3f %\n", ans6);
    printf("The probability of 7 is %.3f %\n", ans7);
    printf("The probability of 8 is %.3f %\n", ans8);
    printf("The probability of 9 is %.3f %\n", ans9);
    printf("The probability of 10 is %.3f %\n", ans10);
    printf("The probability of 11 is %.3f %\n", ans11);
    printf("The probability of 12 is %.3f %\n", ans12);
}

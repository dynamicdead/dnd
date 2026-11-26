#include<stdio.h>
float profit(float sp,float cp)
{
    float pp =(sp-cp)/cp*100;
    return pp;
}
int main()
{
    float sp,cp;
    printf("enter selling price and cost price \n");
    scanf("%f %f",&sp ,&cp);
    printf("profit percent is %.2f%%\n",profit(sp,cp));
    return 0;
}

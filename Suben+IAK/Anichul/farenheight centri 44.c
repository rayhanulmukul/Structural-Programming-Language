 #include<stdio.h>
int main ()

{
    float c,f;
    printf("Enter Farenheight :");
    scanf("%f",&f);
    c=5.0/9*(f-32);//c=(f-32)/1.8;
    printf("cen = %.2f\n",c);
    return 0;
}

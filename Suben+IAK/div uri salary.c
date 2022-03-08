 #include <stdio.h>
 int main()
 {

    char JOAO;
    double A,B,X,Y;
  scanf("%lf%lf",&A,&B);
  X = ((B/100)*15);
  Y = (A+X);
  printf("TOTAL = R$ %.2lf\n",Y);

    return 0;
}


#include<stdio.h>
#include<math.h>
#define pi 3.1428
void add_numbers();
void subtract_numbers();
void multiply_numbers();
void divide_numbers();
void matrix_addition();
void matrix_subtraction();
void matrix_multiplication();
void quadratic_equation();
void linear_equation();
void trignometry();
void logrithmic();
void exponential();
int main()
{
    int select;
    printf("press 1 to add two numbers\n press 2 to subtract two numbers\n press 3 to multiply two numbers\n");
    printf("press 4 to divide two numbers\n press 5 to add two matrix\n press 6 to subtract two matrix\n");
    printf("press 7 to multiply two matrix\n press 8 to solve an quadratic equation\n press 9 to solve linear equations\n");
    printf("press 10 to find trignometric values\n press 11 to find logrithmic values\n press 12 to find exponential values\n");
    scanf("%d", &select);
    switch(select)
    {
        case 1: add_numbers();
                break;
        case 2: subtract_numbers();
                break;
        case 3: multiply_numbers();
                break;
        case 4: divide_numbers();
                break;
        case 5: matrix_addition();
                break;
        case 6: matrix_subtraction();
                break;
        case 7: matrix_multiplication();
                break;
        case 8: quadratic_equation();
                break;
        case 9: linear_equation();
                break;
        case 10: trignometry();
                break;
        case 11: logrithmic();
                break;
        case 12: exponential();
                break;
        default: printf("invalid selection");
    }
}
void add_numbers()
{
    int num1, num2;
    printf(" Enter the first number\n");
    scanf("%d", &num1);
    printf(" Enter the second number\n");
    scanf("%d", &num2);
    printf("%d + %d = %d\n",num1,num2,num1+num2);
}
void subtract_numbers()
{
    int num1, num2;
    printf(" Enter the first number\n");
    scanf("%d", &num1);
    printf(" Enter the second number\n");
    scanf("%d", &num2);
    printf("%d - %d = %d\n",num1,num2,num1-num2);
}
void multiply_numbers()
{
    int num1, num2;
    printf(" Enter the first number\n");
    scanf("%d", &num1);
    printf(" Enter the second number\n");
    scanf("%d", &num2);
    printf("%d x %d = %d\n",num1,num2,num1*num2);
}
void divide_numbers()
{
    int num1, num2;
    printf(" Enter the first number\n");
    scanf("%d", &num1);
    printf(" Enter the second number\n");
    scanf("%d", &num2);
    printf("%d / %d = %d\n",num1,num2,num1/num2);
}
void matrix_addition()
{
    int r, c, a[100][100], b[100][100], sum[100][100], i, j;
    printf("Enter the number of rows (between 1 and 100): ");
    scanf("%d", &r);
    printf("Enter the number of columns (between 1 and 100): ");
    scanf("%d", &c);
    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

    printf("Enter elements of 2nd matrix:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    printf("\nSum of two matrices: \n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("%d   ", sum[i][j]);
            if (j == c - 1) {
                printf("\n\n");
            }
        }

}
void matrix_subtraction()
{
    int m, n, c, d, first[10][10], second[10][10], difference[10][10];
   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &m, &n);
   printf("Enter the elements of first matrix\n");
   for (c = 0; c < m; c++)
     for (d = 0 ; d < n; d++)
       scanf("%d", &first[c][d]);
   printf("Enter the elements of second matrix\n");
   for (c = 0; c < m; c++)
     for (d = 0; d < n; d++)
         scanf("%d", &second[c][d]);
   printf("Difference of entered matrices:-\n");
   for (c = 0; c < m; c++) {
     for (d = 0; d < n; d++) {
       difference[c][d] = first[c][d] - second[c][d];
       printf("%d\t",difference[c][d]);
     }
     printf("\n");
   }
}
void matrix_multiplication()
{
    int first[10][10], second[10][10], result[10][10], r1, c1, r2, c2;
    printf("Enter rows and column for the first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and column for the second matrix: ");
    scanf("%d %d", &r2, &c2);
    // Taking input until
   // 1st matrix columns is not equal to 2nd matrix row
   while (c1 != r2)
   {
       printf("Error! Enter rows and columns again.\n");
       printf("Enter rows and columns for the first matrix: ");
       scanf("%d%d", &r1, &c1);
       printf("Enter rows and columns for the second matrix: ");
       scanf("%d%d", &r2, &c2);
       printf("\nEnter elements: \n");
   }
   for (int i = 0; i < r1; ++i)
       {
           for (int j = 0; j < c1; ++j)
           {
               printf("Enter Array1[%d][%d]: ", i + 1, j + 1);
               scanf("%d", &first[i][j]);
           }
       }
    for (int i = 0; i < r2; ++i)
       {
           for (int j = 0; j < c2; ++j)
           {
               printf("Enter Array2[%d][%d]: ", i + 1, j + 1);
               scanf("%d", &second[i][j]);
           }
       }
   for (int i = 0; i < r1; ++i) {
      for (int j = 0; j < c2; ++j) {
         result[i][j] = 0;
      }
   }
   for (int i = 0; i < r1; ++i)
   {
       for (int j = 0; j < c2; ++j)
       {
           for (int k = 0; k < c1; ++k)
           {
               result[i][j] += first[i][k] * second[k][j];
           }
       }
   }
   printf("\nOutput Matrix:\n");
   for (int i = 0; i < r1; ++i)
   {
       for (int j = 0; j < c2; ++j)
       {
           printf("%d  ", result[i][j]);
           if (j == c2 - 1)
           printf("\n");
       }
   }
}
void quadratic_equation()
{
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }
    else if (discriminant == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", root1);
    }
    else
    {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }
}
void linear_equation()
{
    int a,b,c,d,m,n;
    float x1,x2;
    printf("Enter the value of a ::  ");
    scanf("%d",&a);
    printf("Enter the value of b ::  ");
    scanf("%d",&b);
    printf("Enter the value of c ::  ");
    scanf("%d",&c);
    printf("Enter the value of d ::  ");
    scanf("%d",&d);
    printf("Enter the value of m ::  ");
    scanf("%d",&m);
    printf("Enter the value of n ::  ");
    scanf("%d",&n);
    if((a*d)-(c*b) == 0)
        printf("\nWe can't find value of x1 and x2 \n");
    else
    {
        x1 = (float)((m * d) - (b * n)) / ((a * d) - (c * b));
        printf("\nValue of x1 ::  %f ",x1);
        x2 = (float)((n * a) - (m * c)) / ((a * d) - (c * b));
        printf("\nValue of x2 ::  %f ",x2);
    }
    getch();
}
void trignometry()
{
    float value;
    int select;
    printf("press 1 to find the value of sin()\n press 2 to find the value of cos()\n press 3 to find the value of tan()\n");
    printf("press 4 to find the value of sinh()\n press 5 to find the value of cosh()\n press 6 to find the value of tanh()\n");
    scanf("%d", &select);
    printf("Enter the angle value\n");
    scanf("%f", &value);
    switch(select)
    {
        case 1: printf("The value of sin(%f) : %f \n", value, sin(value));
                break;
        case 2: printf("The value of cos(%f) : %f \n", value, cos(value));
                break;
        case 3: printf("The value of tan(%f) : %f \n", value, tan(value));
                break;
        case 4: printf("The value of sinh(%f) : %f \n", value, sinh(value));
                break;
        case 5: printf("The value of cosh(%f) : %f \n", value, cosh(value));
                break;
        case 6: printf("The value of tanh(%f) : %f \n", value, tanh(value));
                break;
        default: printf("Invalid selection\n");
    }
}
void logrithmic()
{
    float value;
    int select;
    printf("press 1 to find the value of log()\n press 2 to find the value of log10()");
    scanf("%d", &select);
    printf("Enter the number to find its logrithmic value\n");
    scanf("%f", &value);
    switch(select)
    {
        case 1: printf("The value of log(%f) : %f \n", value, log(value));
                break;
        case 2: printf("The value of log10(%f) : %f \n", value, log10(value));
                break;
        default: printf("Invalid selection\n");
    }
}
void exponential()
{
    float value;
    printf("Enter the number to find its exponential value\n");
    scanf("%f", &value);
    printf("The value of exp(%f) : %f \n",value, exp(value));
}

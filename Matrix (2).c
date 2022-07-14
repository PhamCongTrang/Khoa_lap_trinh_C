#include <stdio.h>
#include <stdlib.h>

// Ham nhap ma tran
void input(int input[3][3])
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &input[i][j]);
}

// Ham cong hai ma tran
void add(int m[3][3], int n[3][3], int sum[3][3])
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            sum[i][j] = m[i][j] + n[i][j];
}

// Ham tru hai ma tran
void subtract(int m[3][3], int n[3][3], int result[3][3])
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            result[i][j] = m[i][j] - n[i][j];
}

// Ham nhan hai ma tran
void multiply(int m[3][3], int n[3][3], int result[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < 3; k++)
                result[i][j] += m[i][k] * n[k][j];
        }
    }
}

// Ham in ma tran
void display(int matrix[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d\t", matrix[i][j]);

        printf("\n");
    }
}

int main()
{
    int a[3][3], b[3][3], c[3][3];

    // Nhap hai ma tran
    input(a);
    input(b);

    // In hai ma tran
    printf("First Matrix:\n");
    display(a);
    printf("Second Matrix:\n");
    display(b);

    // Bien lua chon
    int choice;

    // Bang dieu khien
    do
    {
        // Bang de chon hoat dong
        printf("\nChoose the matrix operation,\n");
        printf("----------------------------\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Exit\n");
        printf("----------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            add(a, b, c);
            printf("Sum of matrix: \n");
            display(c);
            break;
        case 2:
            subtract(a, b, c);
            printf("Subtraction of matrix: \n");
            display(c);
            break;
        case 3:
            multiply(a, b, c);
            printf("Multiplication of matrix: \n");
            display(c);
            break;
        case 4:
            printf("Thank You.\n");
            exit(0);
        default:
            printf("Invalid input.\n");
            printf("Please enter the correct input.\n");
        }
    } while (1);

    return 0;
}
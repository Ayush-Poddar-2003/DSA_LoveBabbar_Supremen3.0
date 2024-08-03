#include <iostream>
using namespace std;

void Pattern1(int a)
{
    int n = a, i, j;
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << "\n--------------\n";
}

void Pattern2(int a)
{
    int n = a, i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << "\n--------------\n";
}

void Pattern3(int a)
{
    int n = a, i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 1; j <= i + 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    cout << "\n--------------\n";
}

void Pattern4(int a)
{
    int n = a, i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
    cout << "\n--------------\n";
}

void Pattern5(int a)
{
    int n = a, i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= n - i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << "\n--------------\n";
}

void Pattern6(int a)
{
    int n = a, i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    cout << "\n--------------\n";
}

void Pattern7(int a)
{
    int n = a, i, j;
    for (i = 0; i < n; i++)
    {
        // space
        for (j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    cout << "\n--------------\n";
}

void Pattern8(int a)
{
    int n = a, i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << "\n--------------\n";
}

void Pattern9(int a)
{
    int n = a, i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << "\n--------------\n";
}

int main()
{
    Pattern1(5);
    Pattern2(5);
    Pattern3(5);
    Pattern4(5);
    Pattern5(5);
    Pattern6(5);
    Pattern7(5); // tough
    Pattern8(6); // good one
    Pattern9(6); // good one

    return 0;
}
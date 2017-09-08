// Given 3 variable a, b, c where c could be 0/1 set value of a &b
// set if c=0 then x=a else x=b

// set a variable using arithmetic operator

int x =  xb + (1-c)a;

        // or

int x = (a* !c) | (b * c);

        // or

int x = (a + b) - (b * !x) - (a * c);

// set a variable without using arithmetic operator


int calculate(int a, int b, int c)
{
    int arr[] = {a, b};
    return *(arr + c);
}

int main()
{
    int a = 5, b = 10, c = 1;

    int x = calculate(a, b, c);
    cout << x << endl;

    return 0;
}

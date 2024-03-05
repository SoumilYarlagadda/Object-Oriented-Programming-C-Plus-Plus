#include <iostream>
#include <cstdlib>

using namespace std;

int sumOfThree(int x, int y, int z)
{
    return x + y + z;
}

double division(double x, double y)
{
    return x / y;
}

bool isGreaterThan(double x, int y)
{
    if (x > y)
    {
        return true;
    }
    else
    {
        return false;
    }
}

string select(string func_type)
{
    string out;

    if (func_type == "sum")
    {
        out = "The sum is " + to_string(sumOfThree(1, 2, 3));
    }
    else if (func_type == "division")
    {
        out = "The quotient is " + to_string(division(8.0, 4.0));
    }
    else if (func_type == "comparison")
    {
        out = "The first value being greater than the second value is " + (isGreaterThan(8.3, 6.2) ? "true" : "false");
    }
    else
    {
        out = "Invalid function type\n";
    }

    return out;
}

template <typename T>
void myPrint(string func_type, T output)
{
    cout << select(func_type) << output << endl;
}

int main()
{
    int x1 = 2;
    int x2 = 3;
    int x3 = 5;

    int sum_out = sumOfThree(x1, x2, x3);

    myPrint("sum", sum_out);

    double dividend = 12345.1;
    double divisor = 2345.6;

    double div_out = division(dividend, divisor);
    myPrint("division", div_out);

    bool is_greater_out = isGreaterThan(div_out, sum_out);
    myPrint("comparison", is_greater_out);

    return 0;
}

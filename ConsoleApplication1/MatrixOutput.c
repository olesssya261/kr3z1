#include <stdio.h>

int digits(double x)
{
    double res = x < 0;
    do { 
        ++res;
    }
    while (x /= 10);
    return res;
}

void print(double** Matrix, int M)
{
    double min = **Matrix, max = **Matrix;

    for (int q = 0; q < M; ++q)
        for (int w = 0; w < M; ++w)
        {
            double cur = Matrix[q][w];
            if (cur < min) {
                min = cur;
            }
            if (cur > max) {
                max = cur;
            }
        }

    double dmin = min < 0 ? digits(min) : 0;
    double dmax = digits(max);
    double width = dmin > dmax ? dmin : dmax;

    for (int q = 0; q < M; ++q)
    {
        for (int w = 0; w < M; ++w)
            printf("%*d", width + (w ? 3 : 0), Matrix[q][w]);

        puts("");
    }
}
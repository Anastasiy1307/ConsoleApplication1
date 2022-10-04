#define _CRT_SECURE_NO_WARNINGS //lflkf
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define POW(X) pow(X,2)
#define Dlina(x,y) sqrtf(x+y)
#define ABC(x) abs(x)
#define x1 1
#define x2 2
#define x3 3
#define y11 1
#define y2 3
#define y3 9
#define CH(x1,x2,x3,y11,y2,y3) (x1 - x3) * (y2 - y3) - (x2 - x3) * (y11 - y3)


int main()
{
    system("chcp 1251 > nul");
    double otr1, otr2, otr3, P, S;

#if ((x1 == x2) && (x2 == x3))
    {
        printf("Три точки образуют вектор");
    }
#elif ((y11 == y2) && (y2 == y3))
    {
        printf("Три точки образуют вектор");
    }
#elif ((y11 == y2) && (x1 == x2))
    {
        printf("Три точки образуют вектор");
    }
#elif ((y2 == y3) && (x2 == x3))
    {
        printf("Три точки образуют вектор");
    }
#elif ((y11 == y3) && (x1 == x3))
    {
        printf("Три точки образуют вектор");
    }
#else
    {
        otr1 = Dlina((POW((x2 - x1))), (POW((y2 - y11))));
        otr2 = Dlina((POW((x3 - x1))), (POW((y3 - y11))));
        otr3 = Dlina((POW((x3 - x2))), (POW((y3 - y2))));
        printf("Длина AB = %.2f\n", otr1);
        printf("Длина AC = %.2f\n", otr2);
        printf("Длина BC = %.2f\n", otr3);
        P = otr1 + otr2 + otr3;
        S = ABC(CH(x1, x2, x3, y11, y2, y3)) / 2;
        printf("Периметр треугольника = %.2f\n", P);
        printf("Площадь треугольника = %.2f\n", S);
    }
#endif
    return 0;

}
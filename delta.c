#include <stdio.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
	
void my_exit();
void my_return();

int main()
{
    double a = 0.0, b = 0.0, c = 0.0;
    double r1, r2, u1, u2;
    int ret = -1;
    
    printf("Podaj a,b,c\n");
    
    ret = scanf("%le%le%le", &a, &b, &c);
    
    if (ret != 3)
    {
        printf("Blad przy wczytaniu\n");
        printf("Wczytane: a = %e b = %e c = %e\n", a, b, c);
        
        my_exit();
    }
    //Sprawdzenie a
    if (a == 0.0) //To nie jest dobry kod: a jest typu double!!!
    {
        //a == 0
        printf("To nie jest rownanie kwadratowe: a = 0.\n");
        //To jest blad uzytkownika przy wprowadzeniu danych
        my_exit();
    }
    //Obliczenie D
    double D = -1.0; //to jest inicjalizacje zmiennej
    D = b * b - 4.0 * a * c;
    if (D < 0.0)
    {
        r1 = -1*b/2*a;
        u1 = sqrt(fabs(pow(b/2*a,2) - c/a));
        r2 = -1*b/2*a;
        u2 = -1*(sqrt(fabs(pow(b/2* a,2) - c/a)));
        
        printf("r1 = %lf, u1 = %lf, r2 = %lf, u2 = %lf", r1, u1, r2, u2);

        my_return();
    }
    if (D > 0.0)
    {
        double p1, p2, x1, x2;

        p1 = -b / (2.0 * a);
        p2 = sqrt(D) / (2.0 * a);

        x1 = p1 + p2;
        x2 = p1 - p2;

        printf("Rownanie kwadratowe: %lf *X*X + %lf *X + %lf = 0\n\n", a, b, c);
        printf("Pierwiastki: x1 = %e x2 = %e\n", x1, x2);

        my_return();
    }

    return 0;
}
void my_exit()
{
    int ch;
    printf("Zakoncz - ctrl+Z Enter\n");
    while ((ch = getchar()) != EOF);
    exit(1);
}
void my_return()
{
    int ch;
    while ((ch = getchar()) != EOF);
    exit(0);
}




#include <stdio.h>
#include <stdlib.h>
/*
Funkcje wyszukujace zadanej wartosci w tablicy
	szuk_sort_wart - szukanie w posortowanej tablicy metoda "z wartownikiem"
	szuk_sort - szukanie w posortowanej tablicy 
	szuk_wart - szukanie w nieposortowanej tablicy metoda "z wartownikiem"
	szuk - szukanie w nieposortowanej tablicy  
*/

int szuk_sort_wart(int x, int n, int *a);
int szuk_sort(int x, int n, int *a);
int szuk_wart(int x, int n, int *a);
int szuk(int x, int n, int *a);

int main()
{
	int a[11] = {1,2,3,4,5,6,7,8,9,10};
	int x;

	do 
	{
		printf("x: ");
  		scanf("%d",&x);
    	printf("Find(%d)= szuk_sort_wart = %d, szuk_sort = %d, szuk_wart = %d, szuk = %d\n",
			x,
			szuk_sort_wart(x,10,a),
       		szuk_sort(x,10,a),
			szuk_wart(x,10,a),
			szuk(x,10,a));

	}	while(x != 100);  
	return 0;
}

int szuk_sort_wart(int x, int n, int *a)
{
	int i = 0;
	a[n] = x;

	while(x > a[i]) 
		i++;

	if (a[i] != x)
		return n;

	return i;
}

int szuk_sort(int x, int n, int *a)
{
    int i = 0;

    while(i < n && x > a[i])
        i++;

    if (i >= n) 
		return n;

    if (a[i] == x)
		return i;
	
    return n;
}

int szuk_wart(int x, int n, int *a)
{
    int i = 0;
    a[n] = x;
    while(x != a[i])
        i++;
    return i;
}

int szuk(int x, int n, int *a)
{
    int i = 0;

    while(i < n && x != a[i])
        i++;
	
    return i;
}

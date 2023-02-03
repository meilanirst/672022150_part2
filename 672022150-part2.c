#include <stdio.h>

int main ()
{
    int pilihan;
    int m, i, j;
    int n, a, b;
    int k,c,d,e;
    menu:
    system ("cls");
    puts ("1. Level 1");
    puts ("2. Level 2");
    puts ("3. Level 3");
    puts ("4. Exit");
    printf ("Masukkan Pilihan: ");
    scanf ("%d", &pilihan);

    switch (pilihan)
    {
    case 1:
        system ("cls");
        printf ("Masukkan Angka: ");
        scanf ("%d", &n);

        for (a=0; a<=n; a++)
        {
            for (b=a; b<=a*2; b++)
            {
                printf ("%d", b);
            }
            printf ("\n");
        }
        goto menu;
        break;

    case 2:
        system ("cls");
        printf ("Masukkan Angka: ");
        scanf ("%d", &m);

        for (i=1; i<=m; i++)
        {
            for (j=i; j<=i*i; j+=i)
            {
                printf ("%d", j);
            }
            printf ("\n");
        }
        goto menu;
        break;

    case 3:
        system ("cls");
        printf ("Masukkan Bilangan (max 9): ");
        scanf("%d",&k);

        if (k<=9)
        {
            for (c=1; c<=k; c++)
            {
                printf("\n");
                for (e=1; e<=k-c; e++)
                {
                    printf(" ");
                }
                for (d=1; d<=c;d++)
                {
                    printf("%d", d);
                }
                for (d=c-1; d>=1; d--)
                {
                    printf("%d", d);
                }
            }
            for (c=k-1; c>=1; c--)
            {
                printf("\n");
                for (e=1; e<=k-c; e++)
                {
                    printf(" ");
                }
                for (d=1; d<=c;d++)
                {
                    printf("%d", d);
                }
                for (d=c-1; d>=1; d--)
                {
                printf("%d", d);
                }
            }
        }
        else
        {
            printf ("\nAngka Salah");
        }
        goto menu;
        break;

    case 4:
        system ("cls");
        puts ("Yang di Part 1 itu case 2 malah jadi case 1");
        puts ("Maaf ya Kaakk");
        goto menu;
        break;


    default:
        printf ("Pilihan Salah");
    }
}

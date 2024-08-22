#include <stdio.h>
#include "decimal.h"

void demandeIP(int* octet1,int* octet2,int* octet3,int* octet4)
{
    while (1) 
    {
        printf("Entrez une adresse IP  : ");
        if (scanf("%d.%d.%d.%d", octet1, octet2, octet3, octet4) != 4) 
        {
            printf("Format invalide. Veuillez réessayer.\n");
            while (getchar() != '\n');
            continue;
        }
        if (*octet1 >= 0 && *octet1 <= 255 && *octet2 >= 0 && *octet2 <= 255 && *octet3 >= 0 && *octet3 <= 255 && *octet4 >= 0 && *octet4 <= 255) 
        {
            printf("Adresse IP valide.\n");
            break; 
        } 
        else 
        {
            printf("Adresse IP invalide.\n");
        }
    }
}
void classIP(int octet1,int octet2,int octet3,int octet4)
{
    char class;

    if (octet1 >= 0 && octet1 <= 127) 
    {
        class = 'A';
    }
    else if (octet1 >= 128 && octet1 <= 191) 
    {
        class = 'B';
    }
    else if (octet1 >= 192 && octet1 <= 223) 
    {
        class = 'C';
    }
    else if (octet1 >= 224 && octet1 <= 239) 
    {
        class = 'D';
    }
    else if (octet1 >= 240 && octet1 <= 255) 
    {
        class = 'E';
    }
    else 
    {
        printf("pas d'addresse IP \n");
    }

    switch (class)
    {
    case 'A':
        printf("L'IP est de class A \n");
        break;
    case 'B':
        printf("L'IP est de class B \n");
        break;
    case 'C':
        printf("L'IP est de class C \n");
        break;
    case 'D':
        printf("L'IP est de class D \n");
        break;
    case 'E':
        printf("L'IP est de class E \n");
        break;
    default:
        break;
    }
}
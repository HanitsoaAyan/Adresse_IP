#include <stdio.h> 
#include "decimal.h"
int main()
{
    int octet1,octet2,octet3,octet4;
    
    demandeIP(&octet1,&octet2,&octet3,&octet4);
    classIP(octet1,octet2,octet3,octet4);
    return 0;
}
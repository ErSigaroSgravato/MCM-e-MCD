#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2){
    if(num1 >= num2) return num1;
    return num2;
}

int min(int num1, int num2){
    if(num1 <= num2) return num1;
    return num2;
}

int GCD(int num1, int num2){
    int quotient = max(num1, num2);
    int remainder = min(num1, num2); 
    int temp_quotient = quotient;
    int return_remainder;

    while(remainder != 0 && quotient != 0){
        return_remainder = remainder;
        quotient = remainder;
        remainder = temp_quotient % remainder;
        temp_quotient = quotient;
   }
    return return_remainder; 
    
}

int MCM(int num1, int num2){
   return (num1 * num2) / GCD(num1, num2);
}


int main(int argc, char *argv[]){
    int num1 = atoi(argv[1]), num2 = atoi(argv[2]);
    
    int gcd = GCD(num1, num2);
    printf("GCD = %d\n", gcd);
    
        
    int mcm = MCM(num1, num2);
    printf("MCM = %d\n", mcm);
}
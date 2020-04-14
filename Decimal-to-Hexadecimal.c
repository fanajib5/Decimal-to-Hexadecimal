#include <stdio.h>
#include <stdlib.h>

// C++ program to convert a decimal
// number to hexadecimal number
// source = https://www.geeksforgeeks.org/program-decimal-hexadecimal-conversion/
// modified by FAIQ
int main()
{
	unsigned char n[3] = {222,255,49}; //decimal

    unsigned char hexaDeciNum[100];
    int i = 0;
    int p;

	for(p=0;p<=3;p++){
        while(n[p]!=0){
            int temp = 0;
            temp = n[p] % 16;
            if(temp < 10){
                hexaDeciNum[i] = temp + 48; }
            else{
                hexaDeciNum[i] = temp + 55; }
            n[p] = n[p]/16;
            temp = 0;
            i++;
	}}
  
	printf("Hexadecimal = %s", hexaDeciNum);
    printf("\nThe length is %d characters",strlen(hexaDeciNum));
    printf("\nHex = ");
    
	return 0;
}

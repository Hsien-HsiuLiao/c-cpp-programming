//**** 0. Documentation Section
// This program calculates the area of a square shaped room
// Author:
// Date:

// 1. Pre-processor Directives section
// INCLUDES: Lists any external libraries we will refer to using
// a #include tag
#include <stdio.h>  // Diamond braces for sys lib: Standard I/O
#include "uart.h"   // Quotes for user lib: UART lib

// 2. Global declarations section
// global variable
unsigned long error;

// Function Prototypes
// Compiler aid for "type checking"
void Initialize(void);
unsigned long Calc_Area(unsigned long s);   // Says Calc_Area expects
                    // an unsigned long and returns an unsigned long

// 3. Subroutines section
// MAIN: Mandatory subroutine for a C program to be executable
int main(void) {
  unsigned long side;   // room wall in meters
  unsigned long area;   // size squared meters
  
  UART_Init();  // call subroutine to init uart lib
  Initialize(); //invoke function by calling it
  
  printf("This program calculates the area of a square shaped room\n");
  
//  side = 3;   // 3 meters
//  area = Calc_Area(side);   // square meters 
//  printf("Area of room with side %ld m is %ld sq m\n", side, area); 

  
  while(side != 0){
//    side = side+2;
    printf("Give room side(zero to quit):");
    scanf("%ld", &side);
    
    area = Calc_Area(side);   // square meters
    if(area !=0 ){
      printf("Area of room with side %ld m is %ld sq m\n", side, area);
    } else {
        printf("\n Size cannot exceed 25 meters \n");
    }
  }
  
  printf("Goodbye. (mistake count = %ld) \n", error);

}

//Initialize global
//Inputs: none
//Outputs: none
//Notes:
void Initialize(void){
  error = 0;
}
// Calculates area
// Input: side of a room (unsigned long)
// Output: area of the room (unsigned long)
// Notes:
unsigned long Calc_Area(unsigned long s) {
  unsigned long result;
  if(s <= 25) {
    result = s*s;
  }
  else{
    result = 0;   //mistake
    error = error +1;
  }
  
  return (result);
  
}
  

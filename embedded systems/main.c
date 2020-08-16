//**** Documentation Section
// This program calculates the area of a square shaped room
// Author:
// Date:

// Pre-processor Directives section
// INCLUDES: Lists any external libraries we will refer to using
// a #include tag
#include <stdio.h>  // Diamond braces for sys lib: Standard I/O
#include "uart.h"   // Quotes for user lib: UART lib

// Subroutines section
// MAIN: Mandatory subroutine for a C program to be executable
int main(void) {
  UART_Init();  // call subroutine to init uart lib
  
  printf("This program calculates the area of a square shaped room");
  }
  

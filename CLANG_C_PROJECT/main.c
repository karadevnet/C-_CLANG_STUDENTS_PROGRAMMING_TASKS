// copy and past C#_CLANG_STUDENT_PROGRAMMING.exe
// in same folder to can compile projects
// in folder can have one main.c OR !!! main.cpp
// file. program will tell you if have some errors,
// have both files and/or have no files to compile
#include <stdio.h>
unsigned char c = 130; // 0 - 255 // 0xFF
unsigned char d = 10; // 0 - 255 // 0xFF
unsigned int e = 0; //	0 - 65535 // 0xFFF
unsigned int e2 = 10681; //	0 - 65535 // 0xFFF
unsigned int e3 = 31885; //	0 - 65535 // 0xFFF

unsigned long ee_result = 0;

//using namespace std;
// unsigned int
// int
// double
// long
// long double

//use unsigned int value = c * d ;

// IF YOUR CODE HAVE An ERROR COMPILER WILL GIVE
// ERRROR MESSAGE !! LIKE EXAMPLE BELLOW
// AFTER SUCCESS COMPILING USE main.bat FILE
// TO START PROGRAM USING main.bat FILE WILL
// RUN PROGRAM WITH STAY OPEN CMD WINDOW
// TO SHOW RESULT OF PROGRAM

int main()
{
	//cout << ("\nget sum e = c * d\n");
	
	printf("c = "); printf("%d",c); printf("\n");
	
	printf("d = "); printf("%d",d); printf("\n");
  
	e = c * d; // <<< value DDD not registered !!!
	
	printf("e = "); printf("%d",e);
	
	printf("\n"); printf("\n");
	
	printf("\nget multiply ee_result = e2 * e3\n");
	
	printf("e2 = "); printf("%d",e2); printf("\n");
	
	printf("e3 = "); printf("%d",e3); printf("\n");
	
	ee_result = e2 * e3;
	
	printf("ee_result = "); printf("%ld",ee_result);
	
	printf("\n"); printf("\n");
	
	ee_result = 0;
	
	while(ee_result <= 9000)
	{
		printf("ee_result = "); printf("%ld",ee_result);
		ee_result+= 1;
		printf("\n");
	}
	ee_result = 0;
	printf("\n"); printf("\n");
	
	
	printf("\nPRESS < ENTER > KEY TO FINISH\n\n");
	
	// use this line for pause program before exit
	getchar();
	  return 0;
} // END MAIN
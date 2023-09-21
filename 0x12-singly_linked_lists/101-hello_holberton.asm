/* Declare the main function as global */
global   main

/* Declare that we will use the printf function from an external source */
	  extern    printf
main:

/* Set the format string address as the first argument (EDI) */
	  mov   edi, format

/* Clear the EAX register (return value) */
	  xor   eax, eax

/* Call the printf function */
	  call  printf

/* Set the return value to 0 (success) */
	  mov   eax, 0

/* Return from the main function */
	  ret

/* Define the format string */
format: db `Hello, Holberton\n`,0

#0-preprocessor:
	script that runs a C file through the preprocessor and save the result into another file.
		The C file name will be saved in the variable $CFILE
		The output should be saved in the file c
#1-compiler:
	Write a script that compiles a C file but does not link.
		The C file name will be saved in the variable $CFILE
		The output file should be named the same as the C file, but with the extension .o instead of .c.
#2-assembler:
	Write a script that generates the assembly code of a C code and save it in an output file.
		The C file name will be saved in the variable $CFILE
		The output file should be named the same as the C file, but with the extension .s instead of .c
#3-name:
	Write a script that compiles a C file and creates an executable named cisfun.
#4-puts.c:
	Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.

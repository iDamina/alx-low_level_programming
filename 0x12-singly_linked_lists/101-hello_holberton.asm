extern printf;

section .data; Data section, initialized variables
	msg: db "Hello, Holberton\n", 0;
	format: db "%s", 10, 0; The printf format, "\n", '0'

section .text; code section here
	global main; the standard gcc entry point
	main:;
	push rbp;

	mov rdi, format
	mov rsi, msg
	mov rax,0;
	call printf;

	pop rbp; restore stack

	mov rax,0;
	ret;

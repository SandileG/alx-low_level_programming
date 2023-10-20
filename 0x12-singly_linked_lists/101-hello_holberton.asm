section .data
	hello db 'Hello, Holberton', 0
	len equ $-hello
	newline db 10
	format db '%s', 0

section .text
	extern printf



global main



main:
sub	rsp, 8
mov	rsi, hello
mov	rdi, format
xor	rax, rax
call	printf

; Add a new line character
mov	rsi, newline	;Load newline character
mov	rdi, format
call	printf



add	rsp,8
ret

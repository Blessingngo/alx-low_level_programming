section .data
	message db 'Hello, Holberton', 0

section .text
	extern printf

	global main
	main:
		mov edi, message
		xor eax, eax   ; Set format specifier to "%s"
		call printf
		mov eax, 0
		ret
	format: db 'Hello, Holberton\n',0


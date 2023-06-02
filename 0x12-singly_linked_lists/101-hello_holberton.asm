section .data
	message db 'Hello, Holberton', 0

section .text
	extern printf

	global main
	main:
		sub rsp, 8     ; Align stack on 16-byte boundary (required for macOS)

	mov edi, message
	xor eax, eax   ; Set format specifier to "%s"
	call printf

	add rsp, 8     ; Restore stack alignment
	mov eax, 0x60  ; Exit syscall number
	xor edi, edi   ; Exit status (0)
	syscall


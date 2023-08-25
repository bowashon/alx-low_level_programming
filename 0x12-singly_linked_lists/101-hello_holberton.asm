section .data
    msg db 'Hello, Holberton', 0xa, 9

section .text
    extern printf
    global main

main:
    mov edi, msg
    xor eax, eax
    call printf

    mov eax, 0
    ret

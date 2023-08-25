section .data
    hello db 'Hello, Holberton',0xA,0

section .text
    global main
    extern printf

main:
    ; printf(hello)
    mov rdi, hello
    xor rax, rax
    call printf

    ; return 0
    xor rax, rax
    ret

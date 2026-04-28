[bits 32]
[extern main]

section .multiboot
align 4
dd 0x1BADB002
dd 0x00
dd -(0x1BADB002 + 0x00)

section .text
global _start

_start:
mov esp, stt
call main
cli
.hlt:
hlt
jmp .hlt

section .bss
align 16

stb:
resb 4096

stt:

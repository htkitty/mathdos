[bits 64]
[extern main]

section .text
global _start

_start:
mov rsp, stt
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

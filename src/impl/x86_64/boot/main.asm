global start

section .text
bits 32
start:
mov dword [0xB8000], 0x5c6b5c6f
hlt
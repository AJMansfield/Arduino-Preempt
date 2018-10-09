# Arduino-Preempt
Preemptive multitasking microkernel for the ATMEGA 328p

Nowhere even near useable at this time, but the idea is to write an assembly-language interrupt that saves the instruction pointer and all general purposes registers to a memory location for the process, then loads the registers and IP for the next process and executes a `reti` instruction - everything then functions as if the interrupt has interrupted the second process rather than the first.

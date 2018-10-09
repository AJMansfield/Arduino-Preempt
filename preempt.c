

// (kernel interrupt)
// asm: copy general purpose registers to the temporary register storage
// asm: pop the instruction pointer off the stack
// determine ID of current process - read from 'current process ID' slot
// copy temp register storage and IP to the process slot

// (kernel scheduler)
// determine which process to run next, copy it's ID to 'current process ID' slot

// (kernel resume)
// asm: push IP from current process slot onto the stack
// asm: restore registers from the process slot
// asm: reti

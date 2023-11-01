How to create, open, close, read and write files:

File operations are crucial in any programming environment. This guide demonstrates the fundamental steps involved in handling files, including creating, opening, closing, reading, and writing.

What are file descriptors:

File descriptors are unique identifiers assigned to each file opened by a process. They facilitate the communication between processes and files, serving as a link between the files and the executing program.

What are the 3 standard file descriptors, their purpose, and their POSIX names:

The three standard file descriptors are:

Standard Input (stdin): STDIN_FILENO
Standard Output (stdout): STDOUT_FILENO
Standard Error (stderr): STDERR_FILENO
These descriptors enable input from the user, output to the screen, and error messages.

How to use the I/O system calls open, close, read, and write:

These system calls are essential for performing I/O operations. They enable the opening and closing of files and the reading from or writing to them.

What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR:

These flags dictate the access mode for opening files. O_RDONLY allows read-only access, O_WRONLY enables write-only access, and O_RDWR permits both reading and writing.

What are file permissions, and how to set them when creating a file with the open system call:
File permissions determine who can access a file and in what way. When using the open system call, it's crucial to set appropriate permissions to ensure data security and integrity.

What is a system call:

A system call is the interface between a user space and the operating system kernel. It provides a means for a program to request services from the kernel, such as input/output operations and process control.

What is the difference between a function and a system call:

A function is a block of organized and reusable code used to perform a single, related action, typically within the program. In contrast, a system call is a request for a service from the operating system that provides a way for user-level processes to interact with the kernel.

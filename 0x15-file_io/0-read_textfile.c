#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters) {
    if (filename == NULL) {
        return 0;  // If filename is NULL, return 0
    }

    int fileDescriptor = open(filename, O_RDONLY);
    if (fileDescriptor == -1) {
        return 0;  // If the file cannot be opened, return 0
    }

    char *buffer = (char *)malloc(sizeof(char) * letters);
    if (buffer == NULL) {
        close(fileDescriptor);
        return 0;  // Memory allocation failure, return 0
    }

    ssize_t bytesRead = read(fileDescriptor, buffer, letters);
    if (bytesRead == -1) {
        free(buffer);
        close(fileDescriptor);
        return 0;  // If read fails, return 0
    }

    ssize_t bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
    if (bytesWritten == -1 || bytesWritten != bytesRead) {
        free(buffer);
        close(fileDescriptor);
        return 0;  // If write fails or doesn't write the expected amount, return 0
    }

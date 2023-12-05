#ifndef MAIN_H
#define MAIN_H

/* LIBRARIES */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/* TASK 0 */
ssize_t read_textfile(const char *filename, size_t letters);
/* TASK 1 */
int create_file(const char *filename, char *text_content);
/* TASK 2 */
int append_text_to_file(const char *filename, char *text_content);
/* TASK 3 */
int copy_file(const char *file_from, const char *file_to);

/* UTILS */
size_t _strlen(char *s);

#endif

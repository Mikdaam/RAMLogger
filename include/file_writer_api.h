#ifndef __FILE_WRITER_API
#define __FILE_WRITER_API

#include <stdio.h>

FILE* open_log_file(char* path);

void write_log_to_file(FILE* file, unsigned long long int free_memory);

void close_log_file(FILE* file);

#endif /* __FILE_WRITER_API */
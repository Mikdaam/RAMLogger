#include "file_writer_api.h"

FILE* open_log_file(char* path){
    FILE* file = fopen(path, "a");
    if(file == NULL){
        fprintf(stderr, "Error opening file: %s\n", path);
        return NULL;
    }
    return file;
}

void write_log_to_file(FILE* file, unsigned long long int free_memory) {
    if (file != NULL) {
        fprintf(file, "Free_ram_memory = %llu\n", free_memory);
    }
}

void close_log_file(FILE* file) {
    if (file != NULL) {
        fclose(file);
    }    
}
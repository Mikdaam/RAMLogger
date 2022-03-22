#include "file_writer_api.h"
#include "free_memory_api.h"

#include <unistd.h>

int main(int argc, char const *argv[])
{
    unsigned long long int free_memory = 0;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s <log_file_path>\n", argv[0]);
        return 0;
    }
    
    while (1)
    {
        free_memory = get_free_system_memory();
        FILE* file = open_log_file(argv[1]);
        write_log_to_file(file, free_memory);
        close_log_file(file);
        sleep(5);
    }
    
    return 0;
}

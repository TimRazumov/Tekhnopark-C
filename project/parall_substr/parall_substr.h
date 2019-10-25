#ifndef PROJECT_PARALL_SUBSTR_PARALL_SUBSTR_H_
#define PROJECT_PARALL_SUBSTR_PARALL_SUBSTR_H_

#include <stddef.h>

typedef struct {
    size_t global_pos;  // абсолютная позиция чанка в строке
    size_t size;  // размер чанка
    size_t max_l;  // максимальная подстрока примыкающая к левой границе
    size_t max_r;  // --..--  к правой границе
    size_t pos;  // относительная позиция начала макс подстроки в строке
    size_t max;  // длина максимальной подстроки в чанке
} chunk_info;

chunk_info* get_substr_info(const char* const str);
chunk_info* merge_chunk_info(const chunk_info* const chunks, size_t num_chunks, FILE* const f);
char* get_max_substr_without_repeat_from_file(const char* const file_name);

#endif  // PROJECT_PARALL_SUBSTR_PARALL_SUBSTR_H_
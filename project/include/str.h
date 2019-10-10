#ifndef PROJECT_INCLUDE_STR_H_
#define PROJECT_INCLUDE_STR_H_

#include <stddef.h>

typedef struct String {
    char* str;
    size_t size;
} String;

String* create_str(const size_t byte);
String* create_str_from_c_str(const char* c_str);
int swap_str(String** l, String** r);
String* split_str(String* str, const char* separator);
int free_str(String* str);

#endif  // PROJECT_INCLUDE_STR_H_
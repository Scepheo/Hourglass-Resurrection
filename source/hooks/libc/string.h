/*
 * Copyright(c) 2017- Hourglass Resurrection Team
 * Hourglass Resurrection is licensed under GPL v2.
 * Refer to the file COPYING.txt in the project root.
 */

void* memset(void* ptr, int value, size_t num);

void* memcpy(void* destination, const void* source, size_t num);

int memcmp(const void* ptr1, const void* ptr2, size_t num);

char* strcat(char* destination, const char* source);

int strcmp(const char* str1, const char* str2);

char* strcpy(char* destination, const char* source);

size_t strlen(const char* str);

void* memmove(void* destination, const void* source, size_t num);

const void* memchr(const void* ptr, int value, size_t num);

const char* strchr(const char* str, int character);

size_t strcspn(const char * str1, const char * str2);

char* strerror(int errnum);

int strcoll(const char* str1, const char* str2);

char* strncat(char* destination, const char* source, size_t num);

int strncmp(const char * str1, const char * str2, size_t num);

char* strncpy(char* destination, const char* source, size_t num);

const char* strpbrk(const char* str1, const char* str2);

const char* strrchr(const char* str, int character);

size_t strspn(const char* str1, const char *str2);

const char* strstr(const char* str1, const char* str2);

char* strtok(char* str, const char* delimiters);

size_t strxfrm(char * destination, const char * source, size_t num);

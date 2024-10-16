#ifndef LIBFT_H
#define LIBFT_H
#include <stdio.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *
ft_memmove(void *dst, const void *src, size_t len);
void *
ft_calloc(size_t count, size_t size);
#endif
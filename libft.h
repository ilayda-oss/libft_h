#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c); 
int  ft_isascii(int c);
int ft_isprint(int c);
size_t ft_strlen(const char *s);
void * ft_memset(void *b, int c, size_t len); 
char * ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
void ft_bzero(void *s, size_t n);
#endif
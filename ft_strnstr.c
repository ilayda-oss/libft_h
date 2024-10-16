

#include <libft.h>
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t len_n;
    len_n = ft_strlen(needle);

    if (len == 0)
    {
        return (char *)NULL;
    }
    if (len_n == 0)
    {
        return (char *)haystack;
    }
    while (i <= len - len_n && haystack[i] != '\0')
    {
        if (ft_strncmp(&haystack[i], needle, len_n) == 0)

            return ((char *)&haystack[i]);
        i++;
    }

    return NULL;
}
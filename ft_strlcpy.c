
#include <libft.h>
size_t ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
    int i;
    size_t length;
    i = 0;
    length = ft_strlen(src);
    if (dstsize > 0)
    {
        while (src[i] != '\0' && i < dstsize - 1)
        {
            dst[i] = src[i];
            i++;
        }
    }

    dst[i] = '\0';
    return length;
}
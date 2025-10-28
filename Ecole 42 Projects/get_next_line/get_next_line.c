#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE
#endif

static char *get_line(char **saved)
{
    char *newline_pos;
    char *line;
    char *temp;

    newline_pos = ft_strchr(*saved, '\n');
    if (!newline_pos)
        return (ft_strdup(*saved));
    line = ft_substr(*saved, 0, newline_pos - *saved + 1);
    temp = ft_strdup(newline_pos + 1);
    free(*saved);
    *saved = temp;
    return (line);
}

static char *read_and_save(int fd, char *saved)
{
    char buffer[BUFFER_SIZE + 1];
    ssize_t bytes_read;
    char *temp;

    while (!ft_strchr(saved, '\n'))
    {
        bytes_read = read(fd, buffer, BUFFER_SIZE);
        if (bytes_read <= 0)
            break;
        buffer[bytes_read] = '\0';
        temp = ft_strjoin(saved, buffer);
        free(saved);
        saved = temp;
    }
    return (saved);
}

char *get_next_line(int fd)
{
    static char *saved[1024]; // Multi-FD desteği için diziyi genişlettik.
    char *line;

    if (fd < 0 || BUFFER_SIZE <= 0 || fd >= 1024)
        return (NULL);
    saved[fd] = read_and_save(fd, saved[fd]);
    if (!saved[fd] || !*saved[fd])
    {
        free(saved[fd]);
        saved[fd] = NULL;
        return (NULL);
    }
    line = get_line(&saved[fd]);
    return (line);
}
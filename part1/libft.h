#ifndef LIBFT_H
# define LIBFT_H

int     ft_atoi(char *str);
char    *ft_strcat(char *dest, char *src);
int     ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *dest, char *src);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int     ft_strlen(char *str);
char	*ft_strncat(char *dest, char *src, unsigned int nb);
int     ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strstr(char *str, char *to_find);

#endif
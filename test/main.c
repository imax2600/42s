#include <stdio.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
size_t	ft_strlen(char *c);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
int main(void)
{
	char c[10] = "HELLO";
	printf ("This char is %s\n", c);
	ft_bzero(c, 1);
	printf ("This is not %s", c);
	return 0;
}

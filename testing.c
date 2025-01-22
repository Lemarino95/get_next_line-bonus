/* #include "get_next_line.h"

int main()// For the normal function.
{
	int		fd;
	int		i;
	char	*poem;

	// fd = 8;
	fd = open("text2.txt", O_RDONLY);
	poem = get_next_line(fd);
	i = 0;
	while (poem)
	{
		i++;
		printf("Line %d -->%s", i, poem);
		free(poem);
		poem = get_next_line(fd);
	}
	free (poem);
	poem = NULL;
	close(fd);
	} */

/* #include "get_next_line_bonus.h"

int main()// For the bonus version.
{
	int		fd1;
	int		fd2;
	int 	fd3;
	int		i;
	char	*poem1;
	char	*poem2;
	char	*poem3;

	i = 0;
	fd1 = open("text.txt", O_RDONLY);
	fd2 = open("text2.txt", O_RDONLY);
	fd3 = open("text3.txt", O_RDONLY);
	while (1)
	{
		poem1 = get_next_line(fd1);
		printf("Poem1: %s", poem1);
		free (poem1);
		poem2 = get_next_line(fd2);
		printf("Poem2: %s", poem2);
		free (poem2);
		poem3 = get_next_line(fd3);
		printf("Poem3: %s", poem3);
		free (poem3);
		if (!poem1 && !poem2 && !poem3)
			break;
	}
	close(fd1);
	close(fd2);
	close(fd3);
} */

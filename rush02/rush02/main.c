#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

char *ft_conversion(*argv,size)
{
0: zero
1: one
2: two
3: three
4: four
5: five
6: six
7: seven
8: eight
9: nine
10: ten
11: eleven
12: twelve
13: thirteen
14: fourteen
15: fifteen
16: sixteen
17: seventeen
18: eighteen
19: nineteen
20: twenty
30: thirty
40: forty
50: fifty
60: sixty
70: seventy
80: eighty
90: ninety
100: hundred
1000: thousand
1000000: million
}

int main(int argc, char **argv)
{
	int	j;

	j = 0;
	if (argc == 2)
	{
		while (argv[1][j] != '\0')
		{
			write(1, &argv[1][j], 1);
			j++;
		}
	
	}
    write(1, "\n", 1);
    int size = ft_strlen(argv[1]);
    ft_conversion(argv[1],size);

    //printf("%d size: \n", size);
	return (0);
}



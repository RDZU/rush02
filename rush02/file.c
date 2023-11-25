
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h> 
#include <stdlib.h>


char	*ft_strncpy(char *dest, char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\n')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int unsigned	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i] && i < n)
		i++;
	if (i < n)
		return (s1[i] - s2[i]);
	else
		return (0);
}

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

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	char	c;
	int		len_src;
	int		len_to_find;

	i = 0;
	len_src = ft_strlen(str);
	len_to_find = ft_strlen(to_find);
	printf("%d", len_to_find);
	c = to_find[0];
	if (len_to_find > len_src)
		return (0);
	else if (len_to_find == 0)
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			if (ft_strncmp(&str[i], to_find, len_to_find) == 0)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}


int	process_dict (char *content_dict)
{
	int	new_line;

	new_line = 0;
	while (*content_dict != '\0')
	{
		if(*content_dict == '\n')
			new_line++;
		content_dict++;
	}
	return new_line;
}

void print_one_digit(char *number, char *content_dict)
{
	int i = 0;
	char *find = ft_strstr(content_dict,number);
	while(*find != 32)
		find++;
	find++;
	while(*find != '\n')
	{
		write(1,find++,1);
		i++;
	}
}

void print_two_digit(char *number, char *content_dict, int len)
{
	int i = 0;
	char *find = ft_strstr(content_dict,number);
	while(*find != 32)
		find++;
	find++;
	while(*find != '\n')
	{
		write(1,find++,1);
		i++;
	}
}

void	process_dict2 (char *content_dict, char *number, int len)
{
	if(len == 1)
		print_one_digit(number, content_dict);
	 else if(len == 2)

		print_two_digit(number, content_dict,2);
	// else if(len == 3)
	// 	print_three_digit(number);
}

int main() {

	char    *content_dict;
  	int count;
  	count = 0;
    char r, a;
	int i = 0;
  // Abre el archivo en modo de lectura
  int f = open("numbers.dict", O_RDONLY);
  if (f < 0) {
    // Error al abrir el archivo
      write(1,"error",5);
    return -1;
  }

while((r = read(f, &a, 1)) > 0)
{ 
  	count++;
 	if (r < 0)
    {
        write(1,"error2",6);
    }
   // write(1,&a,1);
}

///  SEGUNDA PARTE

   
  // Cierra el archivo 
  close(f);

  f = open("numbers.dict", O_RDONLY);
  if (f < 0) {
    // Error al abrir el archivo
      write(1,"error",5);
    return -1;
  }

   // guardamos variables en array
  content_dict = (char *)malloc(sizeof(char) * count + 1);

i = 0;
while((r = read(f, &a, 1)) > 0)
{ 
  	count++;
 	if (r < 0)
    {
        write(1,"error2",6);
    }
	content_dict[i] = a;
	i++;
   // write(1,&a,1);
}
 printf("file array: %s ",content_dict);
 
process_dict2 (content_dict,"20",2);

//sprintf("%d", process_dict (content_dict));


}


/*
char    *ft_strdup(char *src)
{
	int     i;
	char    *new;

	i = 0;
	new = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!new)
		return (0);
	while(src[i] != '\0')
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
*/
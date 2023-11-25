
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

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

}


void content_dict()
{

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
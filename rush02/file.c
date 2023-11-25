
#include <unistd.h>
#include <fcntl.h>

int main() {
    char r, a;
  // Abre el archivo en modo de lectura
  int f = open("numbers.dict", O_RDONLY);
  if (f < 0) {
    // Error al abrir el archivo
      write(1,"error",5);
    return -1;
  }


while((r = read(f, &a, 1)) > 0)
{
    if (r < 0)
    {
        write(1,"error2",6);
    }
    write(1,&a,1);
}
  // Cierra el archivo
  close(f);
  return 1;
}
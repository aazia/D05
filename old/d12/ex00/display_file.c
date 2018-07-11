
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

void   ft_putchar(char c)
{
  write(1, &c, 1);
}

void  ft_putstr(char *str)
{
  while(*str)
    ft_putchar(*str++);
}

int   main(int argc, char **argv)
{
  int file;
  char array[1];

  if (argc == 2)
  {
    file = open(argv[1], O_RDONLY);
    while (read(file, array, 1) > 0)
      ft_putchar(array[0]);
    close(file);
  }
  else if (argc == 1)
    ft_putstr("File name missing.\n");
  else if (argc > 2)
    ft_putstr("Too many arguments.\n");
  return (0);
}

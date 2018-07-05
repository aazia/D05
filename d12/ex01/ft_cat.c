
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

void  valid_arg(int i)
{
      file = open(argv[i], O_RDONLY);
      if (file == -1)
      {
        ft_putstr("cat: ");
        ft_putstr(argv[1]);
	ft_putstr(": No such file or directory\n");
      }
      else
      {
	while (read(file, array, 1) > 0)
          ft_putchar(array[0]);
        close(file);
        ft_putchar("\n");
      }
}  

void  dash(void)
{
  
int   main(int argc, char **argv)
{
  int file;
  char array[1];
  int i;
  
  i = 0;
  if (argc >= 2)
  {
    while (i++ < argc)
    {
      if (argv[1] == "-")
	dash();
      valid_arg(i);
    }
  }
  else
    ft_putstr("Please give me an argument.");
  return (read);
}

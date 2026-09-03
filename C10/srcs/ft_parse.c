#include "ft.h"

unsigned char * ft_parse(int argc, unsigned char *argv[], unsigned char *parse)
{
    int iarg;

    iarg = 2;
    while (iarg < argc-1)
    {
	if (ft_strcmp(argv[iarg],parse))
	   return (argv[iarg+1]);
	iarg++;
    }
    return ((unsigned char *) "");
}

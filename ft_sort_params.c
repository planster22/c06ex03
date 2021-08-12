#include <unistd.h>
int fc_strlen(char* str)
{
    int i =0;
    while (str[i])
    {
        i++;
    }
    return i;
}

int main(int argc, char** argv)
{
    int i = 1;
    while (i<argc)
    {
        write(1, argv[i], fc_strlen(argv[i]));
        write(1, "\n", 1);
        i+=1;
    }
    return 0;
}

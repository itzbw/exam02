//putnbr // write(1, &str[num%10], 1);
//argc -1
#include<unistd.h>

int putnbr (int nb)
{
    char str []= "0123456789";
    int num;
    num = nb;

    if(num > 9)
        putnbr(num / 10);
    write(1, &str[num%10], 1);
}

int main (int argc, char ** argv)
{
    (void)argv;

    putnbr(argc - 1);
    write(1,"\n",1);

}
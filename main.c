//#include "holberton.h"
//#i//nclude <limits.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
//int main(void)
//{
//        _printf("Hola %s\n", NULL);
//        printf("lenght %d\n", _printf(NULL));
//        _printf("%s\n", "gola");
//}

#include <limits.h>
#include <stdio.h>
#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
        int len;
        int len2;
        unsigned int ui;
        void *addr;
        char *str = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do\
 eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam\
, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.\
 Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fug\
iat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qu\
i officia deserunt mollit anim id est laborum.\nCurabitur pretium tincidunt lacus. N\
ulla gravida orci a odio. Nullam varius, turpis et commodo pharetra, est eros bibend\
um elit, nec luctus magna felis sollicitudin mauris. Integer in mauris eu nibh euism\
od gravida. Duis ac tellus et risus vulputate vehicula. Donec lobortis risus a elit.\
 Etiam tempor. Ut ullamcorper, ligula eu tempor congue, eros est euismod turpis, id \
tincidunt sapien risus a quam. Maecenas fermentum consequat mi. Donec fermentum. Pel\
lentesque malesuada nulla a mi. Duis sapien sem, aliquet nec, commodo eget, consequa\
t quis, neque. Aliquam faucibus, elit ut dictum aliquet, felis nisl adipiscing sapie\
n, sed malesuada diam lacus eget erat. Cras mollis scelerisque nunc. Nullam arcu. Al\
iquam consequat. Curabitur augue lorem, dapibus quis, laoreet et, pretium ac, nisi. \
Aenean magna nisl, mollis quis, molestie eu, feugiat in, orci. In hac habitasse plat\
ea dictumst.\n";

        _printf("adsda%ccsgd%sasda%ysd\n",'H',"olberton");
         printf("adsda%ccsgd%sasda%ysd\n",'H',"olberton");
        /*len = _printf("Imp: Let's try to printf a simple sentence.\n");
        len2 = printf("Ori: Let's try to printf a simple sentence.\n");
        ui = (unsigned int)INT_MAX + 1024;
        addr = (void *)0x7ffe637541f0;
        //len = _printf("Length1:[%d, %i]\n", len, len);
        //len2 = printf("Length2:[%d, %i]\n", len2, len2);
        printf("Len: %d\tLen2: %d\n", len,len2);
        len = _printf("Character:[%c]\n", 'H');
        len2 = printf("Character:[%c]\n", 'H');
        printf("Len: %d\tLen2: %d\n", len,len2);
        len = _printf("String:[%s]\n", "I am a string !");
        len2 = printf("String:[%s]\n", "I am a string !");
        printf("Len: %d\tLen2: %d\n", len,len2);
        len = _printf("Percent:[%%]\n");
        len2 = printf("Percent:[%%]\n");
        printf("Len: %d\tLen2: %d\n", len,len2);
        printf("\ntesting null char =================\n");
        len = _printf("o%c", '\0');
        len2 = printf("t%c", '\0');
        printf("Len: %d\tLen2: %d\n", len,len2);
        printf("\nexclamation test ====== =============\n");
        len = _printf("o%!\n");
        len2 = printf("t%!\n");
        //printf("Len: %d \tLen2: %d\n", len,len2);
        slen = _printf("%%%%%%%%%\n");
        len2 = printf("%%%%%%%%%\n");
        printf("Len: %d\tLen2: %d\n", len,len2);
        len = _printf("Va algo %s y ya\n", "Simplee", 1, 2, 3, 4);
        len2 = printf("Va algo %s y ya\n", "Simplee", 1, 2, 3, 4);
        printf("Len: %d\tLen2: %d\n", len,len2);
        len = _printf("adsda%ccsgd%sasda%ysd\n",'H',"olberton");
        len2 = printf("adsda%ccsgd%sasda%ysd\n",'H',"olberton");
        printf("Len: %d\tLen2: %d\n", len,len2);
        len = _printf("%s\n", NULL);
        len2 = printf("%s\n", NULL);
        printf("Len: %d\tLen2: %d\n", len,len2);*/
        return (0);
}
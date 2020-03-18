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
        char *str ="We o noeGC,i omlyde rpoesn,cmiain sebyadlnig h oealotos lo o oso hspoesa nitreit tg.Freape h coto asntt u h ikr hnteotu ossso betflsotu yteasmlr Ohrotosaepse nt n tg fpoesn.Sm pin oto h rpoesradohr h oplrisl.Ytohrotoscnrlteasmlradlne;ms fteeaentdcmne ee ic o aeyne oueayo hmMs ftecmadln pin htyucnuewt C r sflfrCporm;we noto sol sflwt nte agae(sal  +) h xlnto ass xlcty ftedsrpinfrapriua pinde o eto  orelnug,yucnueta pinwt l upre agae. h c rga cet pin n ienmsa prns ayotoshv ut-etrnms hrfr utpesnl-etrotosmyntb rue:-vi eydfeetfo d-. o a i pin n te ruet.Frtems at h re o s os' atr re osmte hnyuuesvrlotoso h aekn;freape fyuseiy- oeta ne h ietre r erhdi h re pcfe.As,tepaeeto h loto ssgiiat Mn pin aeln ae trigwt fo ih---o xml,-mv-opivrat,-fra n oo.Ms fteehv ohpstv n eaiefrs h eaiefr f-fowudb fofo hsmna ouet nyoeo hs w om,wihvroei o h eal.When you invoke GCC , it normally does preprocessing, compilation, assembly and linking. The overall options allow you to stop this process at an intermediate stage. For example, th. \n\n\n";
        //_printf("Let's print a simple sentence.\n");
        //_printf("%c\n", 'S');
        //_printf("A char inside a sentence: %c. Did it work?\n", 'F');
        //_printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
        //_printf("%s", "This sentence is retrieved from va_args!\n");
        //_printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
        //_printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
        //_printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
        //_printf("%%\n");
        //_printf("Should print a single percent sign: %%\n");
        _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
        //_printf("css%ccs%scscscs\n", 'T', "Test");
        _printf(str);
        _printf("man gcc:\n%s", str);
        //_printf("%c\n", '\0');
        //_printf("%\n");
        //_printf("%!\n");
        //_printf("%K\n");
        return (0);
}
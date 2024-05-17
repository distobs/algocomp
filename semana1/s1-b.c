#include <stdio.h>

int
main(void)
{
        long cv, ce, cs,
             fv, fe, fs;
        long ptc, ptf;

        scanf("%ld %ld %ld %ld %ld %ld", &cv, &ce, &cs, &fv, &fe, &fs);

        ptc = (cv * 3) + ce;
        ptf = (fv * 3) + fe;

        if (ptc == ptf) {
                (cs > fs) ? puts("C") : (cs == fs) ? puts("=") :
                        puts("F");
        } else {
                (ptc > ptf) ? puts("C") : puts("F");
        }

        return 0;
}

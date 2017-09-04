#include "ccc_win.h"

int ccc_win_main()
{
    cwin.coord(1,33,12,11);

    cwin << Point(1,11);
    cwin << Point(2,13);
    cwin << Point(3,16);
    cwin << Point(4,20);
    cwin << Point(5,25);


    return 0;
}

#include "ccc_win.h"

int ccc_win_main()
{  
     cwin.coord(0, 0, 5000, 4);
     
     Point top_left(1000, 1);
     Point top_right(1000, 2);
     Point bottom_left(2000, 1);
     Line horizontal(top_left, top_right);
     Line vertical(top_left, bottom_left);
     cwin << horizontal << vertical;
     horizontal.move(1000, 0);
     vertical.move(0, 1);
     cwin << horizontal << vertical;
     
     cwin << Point(4000,1);
     cwin << Message(Point(4010,1),"(4000,1)");
     cwin << Point(4000,2);
     cwin << Message(Point(4010,2),"(4000,2)");


   return 0;
}

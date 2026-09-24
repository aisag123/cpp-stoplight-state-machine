#include "stoplight.h"

int main()
{
    stoplight sl;

    sl.init(5, 2, 5);
    sl.tick();

    return 0;
}

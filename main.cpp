#include "stoplight.h"

int main()
{
    stoplight sl;

    sl.init(2, 1, 2, 5); // durrations

    while (true)
    {
        sl.tick();

        if (sl.cycles == 2)
        {
            sl.pedestrianCrossButton();
            sl.cycles = 0;
        }
    }
    return 0;
}

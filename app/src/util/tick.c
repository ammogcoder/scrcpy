#include "tick.h"

#include <SDL2/SDL_timer.h>

sc_tick
sc_tick_now(void) {
    // SDL ticks is an unsigned 32 bits, but this is an implementation detail.
    // It wraps if the program runs for more than ~49 days, but in practice we
    // can assume it does not.
    return (sc_tick) SDL_GetTicks();
}

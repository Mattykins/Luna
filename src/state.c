#include "state.h"
#include "types.h"

void init_state() {
  luna_state = NORMAL;
}

state change_state(state new_state) {
  luna_state = new_state;
  return luna_state;
}

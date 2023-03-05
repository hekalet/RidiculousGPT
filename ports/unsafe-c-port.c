// This is possibly unsafe code. Make your own revisions and reviews and run the modified script.
// You require ocd.lua to run this.

#include "lauxlib.h"
#include "lua.h"
#include "lualib.h"

int main() {
  lua_State *L = luaL_newstate();
  luaL_openlibs(L);
  luaL_dofile(L, "ocd.lua");

  return 0;
}
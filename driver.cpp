#include "playlist.h"
int main () {

Playlist p;
p.add("hey", "me", ROCK, 5001);
p.add("wassup", "me", HIPHOP, 5001);
p.add("hello", "me", POP, 5001);
p.add("wow", "fairy tail", PARODY, 5001);
p.add("meow", "Rumble", COUNTRY, 5001);
p.add("last", "one", ALTERNATIVE, 5100);
p.show();
p.size();
p.add("test", "last", ALTERNATIVE, 10100);
p.find("last");
p.remove("last");
p.remove("wow");
p.remove("meow");
p.show();
p.size();
//Song s;
//s.Set("shadow", "tristen", ROCK, 100);
}

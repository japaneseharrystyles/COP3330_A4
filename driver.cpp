#include "playlist.h"
int main () {

Playlist p;
p.add("hey", "me", ROCK, 47);
p.add("wassup", "me", HIPHOP, 23);
p.add("hello", "me", POP, 80);
p.add("wow", "fairy tail", PARODY, 12);
p.add("meow", "Rumble", COUNTRY, 60);
p.add("last", "one", ALTERNATIVE, 99);
p.show();
p.add("test", "last", ALTERNATIVE, 101);
p.find("last");
//p.show();
//Song s;
//s.Set("shadow", "tristen", ROCK, 100);
}

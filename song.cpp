#include "song.h"

Song::Song() {
  title[0] = '\0';
  artist[0] = '\0';
  category = POP;
  size = 0;
}

ostream& operator << (ostream& os, const Song& s) {
  std::cout << s.title;
  std::cout << s.artist;
  std::cout << s.category;
  std::cout << s.size;
// this isn't properly formatted output yet
// it would be hard to make adjustments since any song
// object would currently contain empty title and artist strings
//
//  ******* FORMAT LATER *******
}


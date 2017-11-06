#include "song.h"
#include <cstring>
#include <iostream>

Song::Song() {
  title[0] = '\0';
  artist[0] = '\0';
  category = POP;
  size = 0;
}

ostream& operator << (ostream& os, const Song& s) {

  os << "Title: " << s.title << std::endl;
  os << "Artist: " << s.artist <<  std::endl;
  os << "Category: " << s.category <<  std::endl;
  os << "Size: " << s.size << std::endl;
  return os;
// this isn't properly formatted output yet
// it would be hard to make adjustments since any song
// object would currently contain empty title and artist strings
//
//  ******* FORMAT LATER *******
}

void Song::Set(const char* t, const char* a, Style st, int sz) {
  strcpy (title, t);
  strcpy (artist, a);
  category = st;
  size = sz;
}


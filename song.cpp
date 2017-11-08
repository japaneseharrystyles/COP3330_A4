#include "song.h"
#include <cstring>
#include <iostream>
#include <iomanip>

///////////// CONSTRUCTOR ///////////////

Song::Song() {
  title[0] = '\0';
  artist[0] = '\0';
  category = POP;
  size = 0;
}

/////////// INSERTION OPERATOR //////////

ostream& operator << (ostream& os, const Song& s) {

  os << setw(39) << s.title;
  os << setw(24) << s.artist;
  os << setw(15) << s.category;
  os << setw(10) << s.size;
  return os;

//  ******* FORMAT LATER *******
}

/////////// SETTER FUNCTION /////////////

void Song::Set(const char* t, const char* a, Style st, int sz) {
  strcpy (title, t);
  strcpy (artist, a);
  category = st;
  size = sz;
}

/////////// GETTER FUNCTIONS ////////////

const char* Song::GetTitle() const {
return title;
}

const char* Song::GetArtist() const {
return artist;
}

Style Song::GetCategory() const {
return category;
}

int Song::GetSize() const {
return size;
}

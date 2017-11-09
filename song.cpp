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

  double KB = static_cast<int>(s.size);
  double MB = KB / 1000;

  os << setw(39) << s.title;
  os << setw(24) << s.artist;
  os << setw(15); 
  
  if (s.category == 0)
    os << "Pop";
  else if (s.category == 1)
    os << "Rock";
  else if (s.category == 2)
    os << "Alt";
  else if (s.category == 3)
    os << "Ctry";
  else if (s.category == 4)
    os << "HH";
  else if (s.category == 5)
    os << "Par";
  os << setw(10);
  os << setprecision(1) << fixed << MB;
  os << std::endl;
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

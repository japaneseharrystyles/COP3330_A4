#include "playlist.h"

Playlist::Playlist () {

  qSize = 0;
  qCap = 4;
  queue = new Song[qCap];
}

Playlist::~Playlist () {
  delete[] queue;
}

/////// MENU FUNCTIONS ///////

void Playlist::add (const char* t, const char* a, Style c, int z) {

Song s;
s.Set(t, a, c, z);
queue[qSize] = s;
qSize++;
resize();

}
void Playlist::find (const char* t) {
}
void Playlist::remove (const char* t) {
}
void Playlist::show () {
}
void Playlist::cat () {
}
void Playlist::size () {
}
void Playlist::menu () {
}
void Playlist::exit () {
}

////// HELPER FUNCTIONS //////

// resize - check if resizing is needed, then call expand() or shrink()
// expand - copy array into a new array that has more capacity
// shrink - reduce array capacity

void Playlist::resize () {
  if (qSize == qCap)
    expand();
  if (qSize <= qCap - 5)
    shrink();
}

void Playlist::expand () {
  qCap = qSize + 4;
  Song *temp = new Song[qCap];
  for (int i = 0; i < qSize; i++)
    temp[i] = queue[i];
  delete[] queue;
  queue = temp;
}

void Playlist::shrink () {
  qCap = qSize;
  Song *temp = new Song[qCap];
  for (int i = 0; i < qSize; i++)
    temp[i] = queue[i];
  delete[] queue;
  queue = temp;
}

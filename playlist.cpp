#include "playlist.h"
#include <cstring>

Playlist::Playlist () {

  qSize = 0;
  qCap = 5;
  queue = new Song[qCap];
}

Playlist::~Playlist () {
  delete[] queue;
}

/////// MENU FUNCTIONS ///////

void Playlist::add (const char* t, const char* a, Style c, int z) {
  if (qSize == qCap)
    expand();
  Song s;
  s.Set(t, a, c, z);
  queue[qSize] = s;
  qSize++;
}
void Playlist::find (const char* s) {
  for (int i = 0; i < qSize; i++)
    if (strcmp(queue[i].GetTitle(), s) == 0) {
      std::cout << "TITLE MATCHES: \n";
      std::cout << queue[i];
    }
  for (int i = 0; i < qSize; i++)
    if (strcmp(queue[i].GetArtist(), s) == 0) {
      std::cout << "ARTIST MATCHES: \n";
      std::cout << queue[i];
    }

}
void Playlist::remove (const char* t) {
  int rmIndex = -1;

  for (int i = 0; i < qSize; i++)
    if (strcmp(queue[i].GetTitle(), t) == 0)
      rmIndex = i;  
  if (rmIndex != -1){
    for (int j = rmIndex+1; j < qSize; j++)
      queue[j-1] = queue[j];
    qSize--;
    if (qSize < qCap - 4)
      shrink();
  }

  else if (rmIndex == -1)
    std::cout << "We could not find a song with that title.\n";
}
void Playlist::show () {
  for (int i = 0; i < qSize; i++)
    std::cout << queue[i];
}
void Playlist::cat (Style c) {
  for (int i = 0; i < qSize; i++)
    if (queue[i].GetCategory() == c)
      std::cout << queue[i];
}
void Playlist::size () {
}
void Playlist::menu () {
}
void Playlist::exit () {
}

////// HELPER FUNCTIONS //////

// expand - copy array into a new array that has more capacity
// shrink - reduce array capacity

void Playlist::expand () {
  qCap = qSize + 5;
  Song *temp = new Song[qCap];
  for (int i = 0; i < qSize; i++)
    temp[i] = queue[i];
  delete[] queue;
  queue = temp;
  std::cout << "Array being resized to: " << qCap << " allocated slots \n";
}

void Playlist::shrink () {
  qCap = qSize;
  Song *temp = new Song[qCap];
  for (int i = 0; i < qSize; i++)
    temp[i] = queue[i];
  delete[] queue;
  queue = temp;
  std::cout << "Array being resized to: " << qCap << " allocated slots \n";
}

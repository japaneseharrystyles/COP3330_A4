#include "playlist.h"

Playlist::Playlist () {

  qSize = 0;
  qCap = 4;
  queue = new Song[qCap];
}

Playlist::~Playlist () {
  delete[] queue;
}

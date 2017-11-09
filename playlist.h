#ifndef PLAYLIST_H
#define PLAYLIST_H

#include "song.h"

class Playlist {

public:

  Playlist();		//	CONSTRUCTOR
  ~Playlist();		//	DECONSTUCTOR

  void add(const char*, const char*, Style, int);	//	A
  void find(const char*);				//	F
  void remove(const char*);				//	D
  void show();						//	S
  void cat(Style);						//	C
  void size();						//	Z
  void menu();						//	M
  void exit();						//	X


private:


  Song *queue;  // array of songs
  int qCap;	// capacity of array
  int qSize;	// # of songs in array

  void expand();
  void shrink();

};

#endif

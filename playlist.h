#ifndef PLAYLIST_H
#define PLAYLIST_H

#include "song.h"

class Playlist {

public:

  Playlist();		//	CONSTRUCTOR
  ~Playlist();		//	DECONSTUCTOR

  void add();		//	A
  void find();		//	F
  void remove();	//	D
  void show();		//	S
  void cat();		//	C
  void size();		//	Z
  void menu();		//	M
  void exit();		//	X


private:


  Song *queue;  // array of songs
  int qCap;	// capacity of array
  int qSize;	// # of songs in array

  void resize();
  void expand();
  void shrink();

};

#endif

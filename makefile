playlist: playlist.o song.o driver.o
	g++ -o playlist playlist.o song.o driver.o

driver.o: driver.cpp
	g++ -c driver.cpp

playlist.o: playlist.cpp
	g++ -c playlist.cpp

song.o: song.cpp
	g++ -c song.cpp

clean:
	rm *.o* playlist

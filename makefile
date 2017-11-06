song: song.o driver.o
	g++ -o song song.o driver.o

driver.o: driver.cpp
	g++ -c driver.cpp

song.o: song.cpp
	g++ -c song.cpp

clean:
	rm *.o* song

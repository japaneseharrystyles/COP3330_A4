
///////////////////////////////////////////////////////////////
            COP 3330 ASSIGNMENT 4 - PLAYLIST CLASS
///////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////
                        BUGLIST
///////////////////////////////////////////////////////////////

1.) In my attempt to define the default constuctor for song.cpp, I have already
encountered my first issue. I cannot initialize the character arrays for 
"title" and "artist" by using ' title = ""; ' and ' artist = "" '. It would
seem that I am rusty with c strings. 

An empty character array is initialized like this:
char array[100];
array[0] = '\0';


2.) I decided to move on to the output operator, because if this friend function
is operational, I can use it to check my progress with the other functions.
I received a compilation error stating that title, artist, category, and size
were not declared in this scope. Since the ostream operator is a friend function
and not being called from within the object itself, you have to specify which 
member data to access. 

std::cout << objectName.memberData; 


3.) I was defining my insertion operator as if it were a show() function,
forgetting to load the output into my ostream object and then return it.

from:
std::cout << objectName.memberData

to:
os << objectName.memberData
return os;

I'm still only able to output the value "1".


4.) I was attempting to call the default constuctor for a Song object by using

Song s();

but it should have been 

Song s;

5.) I was receiving a Double Free / Corruption error during runtime.
In my resizing functions, I noticed that the temporary Song arrays being
allocated within the scope of the function were not being explicitly deallocated.
I thought I was fixing a memory leak I had missed previously by deleting the holders,
but this turned out to be the source of my problem. I'm not fully sure why I don't need
to deallocate thise memory, perhaps it is resolved when the function is resolved, since
the scope is more local than that of my member array
///////////////////////////////////////////////////////////////
                        STATUS
///////////////////////////////////////////////////////////////

The Playlist class has working member functions for the following:
Playlist()
add()
find()
show()
resize()
expand()
shrink()
~Playlist()

The Playlist class still needs implementation for the following:
remove()
cat()
size()
menu()
exit()

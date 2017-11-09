
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

6.) I had a bit of trouble getting the size formatted to single decimal precision
I ended up doing a 

double size_in_kilobytes = static_cast<int> s.size

but I don't fully understand the relationship of Base and Derivative classes
in the context of casting.

7. My size() function was consistently off by 8 kilobytes.
I changed some value, ran it again, and it was consistently off by 12 kb.
I had forgotten to initialize the local function integer to 0

int total;

to 

int total = 0;

8.) Not really a coding bug so much as a conceptual bug. I don't understand how to write
an exit function. I'm just going to handle exit within the menu.cpp, which seems like
a reasonable time to handle exiting.



///////////////////////////////////////////////////////////////
                        STATUS
///////////////////////////////////////////////////////////////

The Playlist class has working member functions for the following:

Playlist()

add()

find()

remove()

show()

cat()

size()

menu()

expand()

shrink()

~Playlist()

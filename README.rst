
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

//C++
typedef unsigned long UL; 

//Sample
typedef char CHAR;          // Character type.
typedef CHAR * PSTR;        // Pointer to a string (char *).
PSTR strchr( PSTR source, CHAR target );
typedef unsigned long ulong;
ulong ul;     // Equivalent to "unsigned long ul;"

/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////

// The simplest form of an alias is equivalent to the typedef mechanism from C++03:
// C++11
using counter = long;

// C++03 equivalent:
// typedef long counter;
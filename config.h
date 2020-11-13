//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",        "music",	    1,		            15},
    // {"",        "nettraf",	    2,		            0},
    {"",        "weather",      300,                0},
    {"",        "disk",         300,                0},
    // {"",        "disk /home",   300,                0},
	{"",        "pacpackages",	10,		            6},
	{"",        "cpu",	        1,		            5},
	{"",        "cpubars",	    1,		            4},
	{"",        "memory",       1,		            3},
    {"",        "mailbox",	    30,		            2},
	{"",        "clock",		1,		            1},
	{"",        "moonphase",	1,		            0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 1;

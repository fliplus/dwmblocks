//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "uptime -p",                                               1,              0},
	{"", "free -m | awk '/^Mem/ { print $3\"Mb / \"$2 \"Mb\" }'",	1,		0},
	{"", "date '+%a, %b %d - %I:%M%P'",				1,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "   ";
static unsigned int delimLen = 5;

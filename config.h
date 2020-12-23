//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},
	{"",	"memory",	1,	14}, 
/*	{"",	"cpu",		10,	18},*/
/*	{"",	"weather",	18000,	5},*/
/*	{"",	"nettraf",	1,	16},*/
	{"",	"internet",	5,	4},
	{"",	"volume",	1,	10},
	{"",	"bardate",	60,	1},
	{"",	"bartime",	60,	1},
/*	{"",	"battery",	5,	3},*/
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = "   ";


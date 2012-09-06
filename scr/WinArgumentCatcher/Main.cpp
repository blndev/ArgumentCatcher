/*
	this project is licensed under the gnu gpl 

*/
#include <conio.h>
#include <Windows.h>
int main(int argc, char* argv[])
{
	cprintf("parameter catcher\n------------------------------------------------\n");
	for(int i=1;i<argc;i++)
	{
		OutputDebugStringA(argv[i]);
		_cprintf("- %d - \"%s\"\n", i, argv[i]);
	}
	cprintf("------------------------------------------------\nany key to exit");
	//_getch();
	return 0;
}
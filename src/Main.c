#include "Main.h"

#if defined NDS
#include <nds.h>
#endif

int main(void)
{
#if defined NDS
	consoleDemoInit();
#endif

	printf("Hello World!\nThis project should compile\nfor both NDS and Windows.\n");
	
#if defined NDS
	while (pmMainLoop())
	{
		swiWaitForVBlank();
	}
#endif

	return 0;
}
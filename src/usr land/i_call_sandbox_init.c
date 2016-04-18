#include <sandbox.h>
#include <stdio.h>

int main (int argc,char *argv[]) {
	sandbox_init("",0,NULL);
	sandbox_init("",0,NULL);
	return 0 ;
}

#include "estd.h"
extern int main(){
	//essential initialization
	unsigned char *let;
	INIT_LET(let);
	volatile char *vgbp = (char*)0xB8000;
	int lp = 0;
	int vgbl = 1;

	//example code
	kcl();
	kpf("Welcome to MathDOS");
	kpn;
	kpf("==================================");
	kpn; kpn;
	kpf("Open-Source Disk Operating System");
	while(1);
}

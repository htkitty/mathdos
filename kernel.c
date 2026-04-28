#define lpb vgbp[lp++]=
#define kpf(st) do{ \
       	char *let = (char*)(st); \ 
	while(*let){ \
		lpb *let++; \
		lpb 0x07; } } while(0)
#define kpn lp += 160
extern int main(){
	volatile char *vgbp = (char*)0xB8000;
	int lp = 0;

	kpf("Welcome to MathDOS");
	kpn;
	kpf("hiiiiii");
	while(1);

}

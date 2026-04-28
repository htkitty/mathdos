#define INIT_LET(init) do{ \
       char *init = (char*)(init); \
} while(0)
#define lpb vgbp[lp++]=
#define kpf(st) do{ \
       	char *let = (char*)(st); \
	while(*let){ \
		lpb *let++; \
		lpb 0x07; \
	vgbl += 1; }} while(0)
#define kpn lp =(lp + 160) - (lp % 160)
#define kdl(ticks) do{ \
	volatile unsigned scc = ticks * 50000000; \
	while(scc > 0){ \
		scc--; \
	}} while(0)
#define kcl() do{ \
	for(int lp = 0; lp < 4000; lp += 2){ \
		vgbp[lp] = ' '; \
	}} while(0);

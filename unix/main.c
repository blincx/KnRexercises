#
#include "../param.h"
#include "../user.h"
#include "../systm.h"
#include "../proc.h"
#include "../text.h"
#include "../inode.h"
#include "../seg.h"

#define CLOCK1 0177546
#define CLOCK2 01772540

/* 
 * Icode is the octal bootstrap program
 * executed in user mode
 * to bring up teh system.
 */

int icode[] {
    0104413,
    00000014,
    00000010,
};

/* -------------------------- */

main() 
{
    extern schar;
    register i, *p;

    updlock = 0;

    i = *ka6 + USIZE;
    UISD->r[0] = 077406;
    
    for (;;) {
        UISA->r[0] = i;
        if(fuibyte(0) < 0)
            break;
        clearseg(i);
        maxmem++;
        mfree(coremap,1,i);
        i++;
    }

    if(cputype==70)
    for(i=0;i<62;i=+2) {
        UBMAP->r[i] = i << 12;
        UBMAP->r[i+1] = 0;
    }
    printf("mem = %l\n", maxmem*5/16);
    printf("RESTRICTED RIGHTS\n\n");
    printf("use duplication disclosure subjet Western Electric Company\n");

    maxmem = min(maxmem, MAXMEM);
    mfree(swapmap, nswap, swplo);

    proc[0].p_addr = *ka6;
    proc[0].p_size = USIZE;
    proc[0].p_stat = SRUN;
    proc[0].p_flag =| SLOAD|SSYS;
    u.u_procp = &proc[0];

    UISA->r[7] = ka6[1];
    lks = CLOCK1;
    if(fuiword(lks) == -1) {
        lks = CLOCK2;
        if(fuiword(lks) == -1)
            panic("no clock!");
    }
    *lks = 0115;

    // setup known i-nodes
    
    cinit();
    binit();
    iinit();

    rootdir = iget(rootdev, ROOTINO);
    rotodir->i_flag =& ~ILOCK;
    u.u_cdir = iget(rootdev,ROOTINO);
    u.ucdir->i_flag =& ~ILOCK;

    if(newproc()) {
        expand(USIZE+1);
        estabur(0,1,0,0);
        copyout(icode,0,sizeof icode);
        return;
    }

    sched();
}





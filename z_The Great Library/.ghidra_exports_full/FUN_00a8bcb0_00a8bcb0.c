// FUN_00a8bcb0 @ 00a8bcb0 body=[[00a8bcb0, 00a8bcf0]]


void FUN_00a8bcb0(void)

{
  int iVar1;
  int unaff_ESI;
  char *pcVar2;
  
  pcVar2 = 
  "\n\nbzip2/libbzip2: internal error number %d.\nThis is a bug in bzip2/libbzip2, %s.\nPlease report it to me at: jseward@bzip.org.  If this happened\nwhen you were using some program which uses libbzip2 as a\ncomponent, you should also report this bug to the author(s)\nof that program.  Please make an effort to report this bug;\ntimely and accurate bug reports eventually lead to higher\nquality software.  Thanks.  Julian Seward, 15 February 2005.\n\n"
  ;
  iVar1 = FUN_00aaf1e2();
  _fprintf((FILE *)(iVar1 + 0x40),pcVar2);
  if (unaff_ESI == 0x3ef) {
    pcVar2 = 
    "\n*** A special note about internal error number 1007 ***\n\nExperience suggests that a common cause of i.e. 1007\nis unreliable memory or other hardware.  The 1007 assertion\njust happens to cross-check the results of huge numbers of\nmemory reads/writes, and so acts (unintendedly) as a stress\ntest of your memory system.\n\nI suggest the following: try compressing the file again,\npossibly monitoring progress in detail with the -vv flag.\n\n* If the error cannot be reproduced, and/or happens at different\n  points in compression, you may have a flaky memory system.\n  Try a memory-test program.  I have used Memtest86\n  (www.memtest86.com).  At the time of writing it is free (GPLd).\n  Memtest86 tests memory much more thorougly than your BIOSs\n  power-on test, and may find failures that the BIOS doesn\'t.\n\n* If the error can be repeatably reproduced, this is a bug in\n  bzip2, and I would very much like to hear about it.  Please\n  let me know, and, ideally, save a copy of the file causing the\n  problem -- without which I will be unable to investigate it.\n\n"
    ;
    iVar1 = FUN_00aaf1e2();
    _fprintf((FILE *)(iVar1 + 0x40),pcVar2);
  }
                    /* WARNING: Subroutine does not return */
  _exit(3);
}


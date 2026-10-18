// FUN_008a6620 @ 008a6620 body=[[008a6620, 008a6664] [008a6668, 008a6672]]


void FUN_008a6620(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_01319b80;
  if (DAT_01319b80 == 0) {
    iVar2 = FUN_00aae9af(0xa08);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_008a76a0();
    }
    iVar1 = DAT_01319b80;
    if ((iVar2 != DAT_01319b80) && (DAT_01319b80 != 0)) {
      FUN_008a6680(DAT_01319b80);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar1);
    }
  }
  DAT_01319b80 = iVar2;
  return;
}


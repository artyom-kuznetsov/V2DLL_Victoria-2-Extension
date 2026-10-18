// FUN_009901b0 @ 009901b0 body=[[009901b0, 00990277] [0099027b, 009902ce]]


void FUN_009901b0(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3d918;
  local_10 = ExceptionList;
  DAT_00f0ec0c = '\x01';
  local_18 = 0;
  piVar3 = &DAT_01268ff8;
  ExceptionList = &local_10;
  while( true ) {
    local_8 = 0xffffffff;
    local_14 = (int *)FUN_00aae9af(4);
    if (local_14 == (int *)0x0) {
      local_14 = (int *)0x0;
    }
    else {
      *local_14 = *piVar3;
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    piVar2 = piVar3 + 1;
    do {
      iVar1 = *piVar2;
      piVar2 = (int *)((int)piVar2 + 1);
    } while ((char)iVar1 != '\0');
    FUN_00409350(piVar3 + 1,(int)piVar2 - ((int)piVar3 + 5));
    local_8 = 0;
    if (DAT_00f0ec0c == '\x01') {
      FUN_00a5c690(&PTR_PTR_00f0ec04,local_34,local_14);
    }
    else {
      FUN_00a5c820(&PTR_PTR_00f0ec04,&DAT_00f0ec08,local_14);
    }
    local_8 = 0xffffffff;
    if (0xf < local_20) break;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    if (local_18 < *piVar3) {
      local_18 = *piVar3;
    }
    piVar3 = piVar3 + 0x41;
    if (0x13172d7 < (int)piVar3) {
      FUN_007e1bb0();
      DAT_01258a64 = 1;
      DAT_01258a60 = local_18 + 1;
      ExceptionList = local_10;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_34[0]);
}


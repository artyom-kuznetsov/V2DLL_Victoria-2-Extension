// FUN_007c7580 @ 007c7580 body=[[007c7580, 007c75a9] [007c75b0, 007c7603] [007c7607, 007c7658]]


void FUN_007c7580(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b970c3;
  local_10 = ExceptionList;
  iVar3 = 1;
  ExceptionList = &local_10;
  do {
    local_8 = 0xffffffff;
    iVar2 = DAT_0131bb34;
    if (DAT_0131bb34 == 0) {
      iVar2 = FUN_00aae9af(0x188);
      local_8 = 0;
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_0041a160();
      }
      iVar1 = DAT_0131bb34;
      local_8 = 1;
      if ((iVar2 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
        FUN_0096dd80(DAT_0131bb34);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar1);
      }
    }
    DAT_0131bb34 = iVar2;
    local_8 = 0xffffffff;
    if (*(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2 <= iVar3) {
      FUN_007c6800();
      ExceptionList = local_10;
      return;
    }
    iVar2 = *(int *)(*(int *)(in_ECX + 0xb8) + iVar3 * 8);
    *(undefined4 *)(iVar2 + 0x6c) = 1;
    *(undefined4 *)(iVar2 + 0x10c) = 1;
    iVar3 = iVar3 + 1;
  } while( true );
}


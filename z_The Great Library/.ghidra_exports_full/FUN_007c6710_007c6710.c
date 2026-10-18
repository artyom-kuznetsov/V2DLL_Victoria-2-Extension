// FUN_007c6710 @ 007c6710 body=[[007c6710, 007c678d] [007c6791, 007c67f4]]


void FUN_007c6710(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b94393;
  local_10 = ExceptionList;
  iVar4 = 1;
  iVar3 = DAT_0131bb34;
  ExceptionList = &local_10;
  do {
    local_8 = 0xffffffff;
    iVar1 = DAT_0131bb34;
    if (iVar3 == 0) {
      iVar3 = FUN_00aae9af(0x188);
      local_8 = 0;
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_0041a160();
      }
      iVar2 = DAT_0131bb34;
      local_8 = 1;
      iVar1 = iVar3;
      if ((iVar3 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
        FUN_0096dd80(DAT_0131bb34);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar2);
      }
    }
    DAT_0131bb34 = iVar1;
    local_8 = 0xffffffff;
    if (*(int *)(iVar3 + 0x10) - *(int *)(iVar3 + 0xc) >> 2 <= iVar4) {
      FUN_007c6800();
      ExceptionList = local_10;
      return;
    }
    iVar1 = *(int *)(*(int *)(in_ECX + 0xb8) + iVar4 * 8);
    if ((*(char *)(iVar1 + 0xe4) == '\0') || (*(char *)(iVar1 + 0x142) != '\0')) {
      *(undefined4 *)(iVar1 + 0x6c) = 0;
      *(undefined4 *)(iVar1 + 0x10c) = 0;
      iVar3 = DAT_0131bb34;
    }
    iVar4 = iVar4 + 1;
  } while( true );
}


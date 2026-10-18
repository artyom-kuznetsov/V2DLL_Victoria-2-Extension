// FUN_00a7da00 @ 00a7da00 body=[[00a7da00, 00a7da49] [00a7da4d, 00a7da69] [00a7da6d, 00a7da91]]


void FUN_00a7da00(int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pvVar1 = ExceptionList;
  puStack_c = &LAB_00b3a5fb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = param_1;
  while( true ) {
    if (iVar2 == param_2) {
      ExceptionList = pvVar1;
      return;
    }
    local_8 = 0;
    if (*(int *)(iVar2 + 0x50) != 0) break;
    *(undefined4 *)(iVar2 + 0x50) = 0;
    *(undefined4 *)(iVar2 + 0x54) = 0;
    *(undefined4 *)(iVar2 + 0x58) = 0;
    local_8 = 0xffffffff;
    if (*(int *)(iVar2 + 0x40) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*(int *)(iVar2 + 0x40));
    }
    *(undefined4 *)(iVar2 + 0x40) = 0;
    *(undefined4 *)(iVar2 + 0x44) = 0;
    *(undefined4 *)(iVar2 + 0x48) = 0;
    iVar2 = iVar2 + 0x60;
  }
  FUN_00a7da00(*(int *)(iVar2 + 0x50),*(undefined4 *)(iVar2 + 0x54),iVar2 + 0x5c,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*(undefined4 *)(iVar2 + 0x50));
}


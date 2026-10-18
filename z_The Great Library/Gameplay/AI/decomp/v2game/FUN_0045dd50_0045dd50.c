// FUN_0045dd50 @ 0045dd50 body=[[0045dd50, 0045de0b] [0045de0f, 0045de44]]


undefined4 FUN_0045dd50(uint param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined4 local_2c [5];
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  iVar1 = *(int *)(in_ECX + 0x34);
  ExceptionList = &local_10;
  *(int *)(in_ECX + 0x34) = iVar1 + 1;
  if ((-1 < iVar1) && (iVar1 < *(int *)(in_ECX + 0x28) - *(int *)(in_ECX + 0x24) >> 4)) {
    piVar3 = (int *)(iVar1 * 0x10 + *(int *)(in_ECX + 0x24));
    iVar1 = *piVar3;
    iVar2 = (piVar3[1] - iVar1) / 0x1c;
    if (0 < iVar2) {
      FUN_00408ed0(iVar1 + ((int)((param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f)) % iVar2
                           ) * 0x1c,0,0xffffffff);
      uVar4 = FUN_0046d080(local_2c);
      local_8 = 0;
      FUN_00408ed0(uVar4,0,0xffffffff);
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
      ExceptionList = local_10;
      return 1;
    }
  }
  FUN_00409350(&DAT_00ded94d,0);
  ExceptionList = local_10;
  return 0;
}


// FUN_006a2ae0 @ 006a2ae0 body=[[006a2ae0, 006a2be5]]


void FUN_006a2ae0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint unaff_EDI;
  uint local_8;
  
  if (0x1f < (int)unaff_EDI) {
    local_8 = unaff_EDI >> 5;
    do {
      FUN_006a2a40();
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  FUN_006a2a40();
  iVar1 = 0x20;
  if (0x20 < (int)unaff_EDI) {
    do {
      (*(undefined4 **)(param_3 + 0x10))[1] = **(undefined4 **)(param_3 + 0x10);
      FUN_006a30c0(param_2);
      FUN_006a3210();
      iVar1 = iVar1 * 4;
    } while (iVar1 < (int)unaff_EDI);
  }
  return;
}


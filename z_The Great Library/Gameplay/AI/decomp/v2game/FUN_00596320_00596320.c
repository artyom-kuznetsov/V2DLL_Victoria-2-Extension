// FUN_00596320 @ 00596320 body=[[00596320, 00596482] [00596499, 00596534]]


void FUN_00596320(undefined4 param_1,int param_2)

{
  undefined4 ****ppppuVar1;
  undefined4 *puVar2;
  int in_ECX;
  int iVar3;
  undefined1 local_3c [8];
  undefined4 ***local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bbc108;
  local_14 = ExceptionList;
  if (param_2 < 0x44a) {
    if (param_2 == 0x449) {
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = (undefined4 ***)((uint)local_34[0] & 0xffffff00);
      ExceptionList = &local_14;
      FUN_00409350(&DAT_00ded94d,0);
      local_c = 0;
      FUN_009a1750(local_34,0);
      ppppuVar1 = (undefined4 ****)local_34[0];
      if (local_20 < 0x10) {
        ppppuVar1 = local_34;
      }
      puVar2 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_3c,ppppuVar1);
      *(undefined4 *)(in_ECX + 0x88) = *puVar2;
      *(undefined4 *)(in_ECX + 0x8c) = puVar2[1];
      if (local_20 < 0x10) {
        ExceptionList = local_14;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    if (0x124 < param_2) {
      if (param_2 == 0x34f) {
        ExceptionList = &local_14;
        FUN_0072d580();
        ExceptionList = local_14;
        return;
      }
      if (param_2 != 0x350) {
        return;
      }
      ExceptionList = &local_14;
      FUN_0072d580();
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0x124) {
      ExceptionList = &local_14;
      FUN_009a1c10();
      ExceptionList = local_14;
      return;
    }
    if (param_2 != 0x1a) {
      if (param_2 != 0xb2) {
        return;
      }
      ExceptionList = &local_14;
      FUN_009a1c10();
      ExceptionList = local_14;
      return;
    }
    iVar3 = in_ECX + 0x6c;
  }
  else {
    if (param_2 < 0xa06) {
      if (param_2 == 0xa05) {
        ExceptionList = &local_14;
        FUN_009a1ce0();
        ExceptionList = local_14;
        return;
      }
      if (param_2 != 0x4fc) {
        if (param_2 != 0xa04) {
          return;
        }
        ExceptionList = &local_14;
        FUN_009a1ce0();
        ExceptionList = local_14;
        return;
      }
      ExceptionList = &local_14;
      FUN_009a1ce0();
      ExceptionList = local_14;
      return;
    }
    if (param_2 != 0xa0b) {
      return;
    }
    iVar3 = in_ECX + 0x90;
  }
  ExceptionList = &local_14;
  FUN_009a1750(iVar3,0);
  ExceptionList = local_14;
  return;
}


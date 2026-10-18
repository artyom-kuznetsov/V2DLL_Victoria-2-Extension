// FUN_0057d780 @ 0057d780 body=[[0057d780, 0057d935] [0057d94c, 0057d96b]]


/* WARNING: Removing unreachable block (ram,0x0057d92c) */

void FUN_0057d780(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bbc108;
  local_14 = ExceptionList;
  if (param_2 < 0x2f1) {
    if (param_2 == 0x2f0) {
      ExceptionList = &local_14;
      puVar2 = (undefined4 *)FUN_0055c6c0(DAT_012587e4);
      *(undefined4 *)(in_ECX + 0x3c) = *puVar2;
      *(undefined4 *)(in_ECX + 0x40) = puVar2[1];
      ExceptionList = local_14;
      return;
    }
    if (param_2 != 0xb) {
      if (param_2 == 0x1d4) {
        ExceptionList = &local_14;
        FUN_009a19f0();
        iVar1 = FUN_009c16d0();
        if (iVar1 == 0) {
          ExceptionList = local_14;
          return;
        }
        *(int *)(in_ECX + 100) = iVar1;
        ExceptionList = local_14;
        return;
      }
      if (param_2 == 0x297) {
        ExceptionList = &local_14;
        FUN_009a1c10();
        ExceptionList = local_14;
        return;
      }
LAB_0057d8a0:
      ExceptionList = &local_14;
      FUN_009a2620();
      ExceptionList = local_14;
      return;
    }
  }
  else if (param_2 != 0x2f5) {
    if (param_2 == 0x2f9) {
      local_c = 0;
      ExceptionList = &local_14;
      FUN_009a1750();
      FUN_005c1a10();
      iVar1 = FUN_005c2ad0();
      *(undefined4 *)(in_ECX + 0x60) =
           *(undefined4 *)
            (*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x40) * 4) +
                              0xbcc) + 0x310) + *(int *)(iVar1 + 0x24) * 4);
      ExceptionList = local_14;
      return;
    }
    if (param_2 != 0x36f) goto LAB_0057d8a0;
  }
  ExceptionList = &local_14;
  FUN_009a19f0();
  ExceptionList = local_14;
  return;
}


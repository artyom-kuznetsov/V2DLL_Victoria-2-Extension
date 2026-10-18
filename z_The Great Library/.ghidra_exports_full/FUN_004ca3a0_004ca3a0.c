// FUN_004ca3a0 @ 004ca3a0 body=[[004ca3a0, 004ca47d] [004ca495, 004ca504]]


void FUN_004ca3a0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int in_ECX;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bbc108;
  local_14 = ExceptionList;
  if (param_2 < 0x578) {
    if (param_2 != 0x577) {
      if (param_2 == 0x2a1) {
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
        local_c = 0;
        ExceptionList = &local_14;
        FUN_009a1750();
        FUN_00408ed0(local_34,0,0xffffffff);
        FUN_0043bb10();
        if (local_20 < 0x10) {
          ExceptionList = local_14;
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (param_2 == 0x449) {
        ExceptionList = &local_14;
        puVar1 = (undefined4 *)FUN_0055c6c0();
        *(undefined4 *)(in_ECX + 8) = *puVar1;
        *(undefined4 *)(in_ECX + 0xc) = puVar1[1];
        ExceptionList = local_14;
        return;
      }
LAB_004ca4b1:
      ExceptionList = &local_14;
      FUN_009a0f40();
      ExceptionList = local_14;
      return;
    }
  }
  else if (param_2 != 0xa46) goto LAB_004ca4b1;
  ExceptionList = &local_14;
  iVar2 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i");
  if (iVar2 == 0) {
    FUN_009a1140();
  }
  ExceptionList = local_14;
  return;
}


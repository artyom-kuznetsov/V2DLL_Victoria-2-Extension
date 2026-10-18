// FUN_009f2d70 @ 009f2d70 body=[[009f2d70, 009f2e81] [009f2e96, 009f2eb4]]


void FUN_009f2d70(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int in_ECX;
  int iVar3;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b56983;
  local_10 = ExceptionList;
  if (param_2 == 0xe0) {
    iVar3 = in_ECX + 0x28;
  }
  else {
    if (param_2 == 0xeb) {
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      local_8 = 0;
      ExceptionList = &local_10;
      FUN_009a1750(local_2c,0);
      iVar3 = *(int *)(in_ECX + 0x48);
      puVar2 = (undefined1 *)FUN_00aae9af(0x28);
      local_8 = CONCAT31(local_8._1_3_,1);
      if (puVar2 == (undefined1 *)0x0) {
        puVar2 = (undefined1 *)0x0;
      }
      else {
        *(undefined4 *)(puVar2 + 0x14) = 0xf;
        *(undefined4 *)(puVar2 + 0x10) = 0;
        *puVar2 = 0;
        FUN_00408ed0(local_2c,0,0xffffffff);
        *(int *)(puVar2 + 0x1c) = iVar3;
        *(undefined4 *)(puVar2 + 0x20) = 0;
        puVar2[0x24] = 0;
      }
      iVar1 = *(int *)(in_ECX + 0x4c);
      *(undefined1 **)(in_ECX + 0x48) = puVar2;
      *(int *)(in_ECX + 0x4c) = iVar1 + 1;
      if (iVar1 == 0) {
        *(undefined1 **)(in_ECX + 0x44) = puVar2;
      }
      else {
        *(undefined1 **)(iVar3 + 0x20) = puVar2;
      }
      if (local_18 < 0x10) {
        ExceptionList = local_10;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    if (param_2 == 0xfb) {
      ExceptionList = &local_10;
      FUN_009a1bb0(in_ECX + 0x24);
      ExceptionList = local_10;
      return;
    }
    if (param_2 != 0xe1) {
      ExceptionList = &local_10;
      FUN_009a0f40();
      ExceptionList = local_10;
      return;
    }
    iVar3 = in_ECX + 8;
  }
  ExceptionList = &local_10;
  FUN_009a1750(iVar3,0);
  ExceptionList = local_10;
  return;
}


// FUN_0090d6c0 @ 0090d6c0 body=[[0090d6c0, 0090d7df]]


void FUN_0090d6c0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  undefined1 local_34 [28];
  undefined1 local_18 [8];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d918;
  local_10 = ExceptionList;
  if (param_2 < 0x508) {
    if (param_2 == 0x507) {
      ExceptionList = &local_10;
      FUN_009a1ce0();
      ExceptionList = local_10;
      return;
    }
    if (param_2 == 0x6a) {
      ExceptionList = &local_10;
      puVar3 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_18,param_1 + 0x22c);
      *(undefined4 *)(in_ECX + 0x10) = *puVar3;
      *(undefined4 *)(in_ECX + 0x14) = puVar3[1];
      ExceptionList = local_10;
      return;
    }
    if (param_2 == 0xd9) {
      ExceptionList = &local_10;
      FUN_009885d0();
      local_8 = 0;
      iVar1 = FUN_0090cc40();
      iVar2 = FUN_0090da40(local_34);
      if (iVar2 == 0) {
        iVar2 = **(int **)(iVar1 + 0xc);
      }
      *(int *)(in_ECX + 8) = iVar2;
      FUN_00408ad0();
      ExceptionList = local_10;
      return;
    }
  }
  else if (param_2 == 0x92d) {
    ExceptionList = &local_10;
    FUN_009a1bb0(in_ECX + 0x18);
    ExceptionList = local_10;
    return;
  }
  ExceptionList = &local_10;
  FUN_009a0f40();
  ExceptionList = local_10;
  return;
}


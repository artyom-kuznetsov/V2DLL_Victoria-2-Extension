// FUN_005e5d70 @ 005e5d70 body=[[005e5d70, 005e5e9a] [005e5ea1, 005e5ecd] [005e5ef1, 005e5f36]]


int FUN_005e5d70(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b45a60;
  local_10 = ExceptionList;
  iVar2 = (param_4 - param_3) * 0x66666667;
  uVar1 = (param_4 - param_3) / 0x28;
  if (uVar1 != 0) {
    iVar2 = (param_1[1] - *param_1) / 0x28;
    if (0x6666666U - iVar2 < uVar1) {
      ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
      FUN_00aad3ad("vector<T> too long");
    }
    if ((uint)((param_1[2] - *param_1) / 0x28) < iVar2 + uVar1) {
      ExceptionList = &local_10;
      iVar2 = FUN_005e5ca0();
      iVar3 = FUN_0079eee0();
      local_8 = 0;
      uVar4 = FUN_005e5f40(param_2,iVar3,param_4);
      uVar4 = FUN_005e6040(param_3,param_4,uVar4,param_4);
      FUN_005e5f40(param_1[1],uVar4,param_4);
      if (*param_1 != 0) {
        FUN_005e5d30(param_4);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*param_1);
      }
      param_1[2] = iVar3 + iVar2 * 0x28;
      param_1[1] = iVar3 + (uVar1 + (param_1[1] - *param_1) / 0x28) * 0x28;
      *param_1 = iVar3;
      ExceptionList = local_10;
      return iVar3;
    }
    ExceptionList = &local_10;
    FUN_005e6040(param_3,param_4,param_1[1],param_4);
    iVar2 = FUN_005e5ff0(param_2);
    param_1[1] = param_1[1] + uVar1 * 0x28;
  }
  ExceptionList = local_10;
  return iVar2;
}


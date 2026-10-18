// FUN_009add20 @ 009add20 body=[[009add20, 009ade50] [009ade57, 009ade8f] [009adeaf, 009adef8]]


int FUN_009add20(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3e2f0;
  local_10 = ExceptionList;
  iVar3 = (param_4 - param_3) * -0x6db6db6d;
  uVar1 = (param_4 - param_3) / 0x1c;
  if (uVar1 != 0) {
    iVar3 = (param_1[1] - *param_1) / 0x1c;
    if (0x9249249U - iVar3 < uVar1) {
      ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
      FUN_00aad3ad("vector<T> too long");
    }
    if ((uint)((param_1[2] - *param_1) / 0x1c) < iVar3 + uVar1) {
      ExceptionList = &local_10;
      iVar2 = FUN_00419770();
      iVar3 = 0;
      if (iVar2 != 0) {
        iVar3 = FUN_009b6bb0();
      }
      local_8 = 0;
      uVar4 = FUN_00419c20(param_2,iVar3,param_4);
      uVar4 = FUN_009adf50(param_3,param_4,uVar4,param_4);
      FUN_00419c20(param_1[1],uVar4,param_4);
      if (*param_1 != 0) {
        FUN_00413860();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*param_1);
      }
      param_1[2] = iVar3 + iVar2 * 0x1c;
      param_1[1] = iVar3 + (uVar1 + (param_1[1] - *param_1) / 0x1c) * 0x1c;
      *param_1 = iVar3;
      ExceptionList = local_10;
      return iVar3;
    }
    ExceptionList = &local_10;
    FUN_009adf50(param_3,param_4,param_1[1],param_4);
    iVar3 = FUN_009adf00(param_2);
    param_1[1] = param_1[1] + uVar1 * 0x1c;
  }
  ExceptionList = local_10;
  return iVar3;
}


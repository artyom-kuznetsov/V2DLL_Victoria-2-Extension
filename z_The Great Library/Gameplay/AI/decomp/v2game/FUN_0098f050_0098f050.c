// FUN_0098f050 @ 0098f050 body=[[0098f050, 0098f138] [0098f13c, 0098f15f] [0098f175, 0098f1bf]]


void FUN_0098f050(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  uint uVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3a8e0;
  local_10 = ExceptionList;
  uVar5 = param_3 - param_2 >> 3;
  if (uVar5 != 0) {
    iVar3 = in_ECX[1] - *in_ECX >> 3;
    if (0x1fffffffU - iVar3 < uVar5) {
      ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
      FUN_00aad3ad("vector<T> too long");
    }
    uVar1 = iVar3 + uVar5;
    uVar4 = in_ECX[2] - *in_ECX >> 3;
    if (uVar4 < uVar1) {
      if (0x1fffffff - (uVar4 >> 1) < uVar4) {
        uVar4 = 0;
      }
      else {
        uVar4 = uVar4 + (uVar4 >> 1);
      }
      if (uVar4 < uVar1) {
        uVar4 = uVar1;
      }
      ExceptionList = &local_10;
      iVar2 = FUN_00810880();
      local_8 = 0;
      FUN_007e72f0(*in_ECX,param_2);
      FUN_007e72f0(param_2,param_2);
      FUN_007e72f0(param_1,param_2);
      iVar3 = *in_ECX;
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar3);
      }
      in_ECX[2] = iVar2 + uVar4 * 8;
      in_ECX[1] = iVar2 + (uVar5 + (in_ECX[1] - iVar3 >> 3)) * 8;
      *in_ECX = iVar2;
      ExceptionList = local_10;
      return;
    }
    ExceptionList = &local_10;
    FUN_007e72f0(param_2,param_2);
    iVar2 = in_ECX[1];
    iVar3 = uVar5 * 8 + iVar2;
    if ((param_1 != iVar2) && (iVar2 != iVar3)) {
      FUN_004ca1e0(param_1,iVar2,iVar3);
    }
    in_ECX[1] = in_ECX[1] + uVar5 * 8;
  }
  ExceptionList = local_10;
  return;
}


// FUN_00466ba0 @ 00466ba0 body=[[00466ba0, 00466c83] [00466c87, 00466caa] [00466cc0, 00466d08]]


void FUN_00466ba0(int param_1,int param_2,int param_3)

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
  puStack_c = &LAB_00b3b0a0;
  local_10 = ExceptionList;
  uVar5 = param_3 - param_2 >> 2;
  if (uVar5 != 0) {
    iVar3 = in_ECX[1] - *in_ECX >> 2;
    if (0x3fffffffU - iVar3 < uVar5) {
      ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
      FUN_00aad3ad("vector<T> too long");
    }
    uVar1 = iVar3 + uVar5;
    uVar4 = in_ECX[2] - *in_ECX >> 2;
    if (uVar4 < uVar1) {
      if (0x3fffffff - (uVar4 >> 1) < uVar4) {
        uVar4 = 0;
      }
      else {
        uVar4 = uVar4 + (uVar4 >> 1);
      }
      if (uVar4 < uVar1) {
        uVar4 = uVar1;
      }
      ExceptionList = &local_10;
      iVar2 = FUN_007055a0();
      local_8 = 0;
      FUN_009d45d0(*in_ECX,param_3);
      FUN_00466da0(param_2,param_3,param_3);
      FUN_009d45d0(param_1,param_3);
      iVar3 = *in_ECX;
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar3);
      }
      in_ECX[2] = iVar2 + uVar4 * 4;
      in_ECX[1] = iVar2 + (uVar5 + (in_ECX[1] - iVar3 >> 2)) * 4;
      *in_ECX = iVar2;
      ExceptionList = local_10;
      return;
    }
    ExceptionList = &local_10;
    FUN_00466da0(param_2,param_3,param_3);
    iVar2 = in_ECX[1];
    iVar3 = uVar5 * 4 + iVar2;
    if ((param_1 != iVar2) && (iVar2 != iVar3)) {
      FUN_006a42d0(param_1,iVar3);
    }
    in_ECX[1] = in_ECX[1] + uVar5 * 4;
  }
  ExceptionList = local_10;
  return;
}


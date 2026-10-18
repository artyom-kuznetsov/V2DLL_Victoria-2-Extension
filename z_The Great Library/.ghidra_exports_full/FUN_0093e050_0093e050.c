// FUN_0093e050 @ 0093e050 body=[[0093e050, 0093e142] [0093e146, 0093e16a] [0093e180, 0093e249]]


void FUN_0093e050(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *in_ECX;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3a9c0;
  local_10 = ExceptionList;
  puVar2 = (undefined4 *)in_ECX[1];
  iVar3 = (int)puVar2 - *in_ECX >> 3;
  if (iVar3 == 0x1fffffff) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  uVar1 = iVar3 + 1;
  local_18 = in_ECX[2] - *in_ECX >> 3;
  if (local_18 < uVar1) {
    if (0x1fffffff - (local_18 >> 1) < local_18) {
      local_18 = 0;
    }
    else {
      local_18 = local_18 + (local_18 >> 1);
    }
    if (local_18 < uVar1) {
      local_18 = uVar1;
    }
    ExceptionList = &local_10;
    iVar4 = FUN_00810880();
    local_8 = 0;
    FUN_004bfc70(iVar4 + ((int)param_1 - *in_ECX >> 3) * 8,param_1);
    FUN_007e72f0(*in_ECX,param_1);
    FUN_007e72f0(param_1,param_1);
    iVar3 = *in_ECX;
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar3);
    }
    in_ECX[2] = iVar4 + local_18 * 8;
    in_ECX[1] = iVar4 + 8 + (in_ECX[1] - iVar3 >> 3) * 8;
    *in_ECX = iVar4;
    ExceptionList = local_10;
    return;
  }
  if ((int)puVar2 - (int)param_1 >> 3 == 0) {
    ExceptionList = &local_10;
    FUN_007e72f0(param_1,param_1);
    local_8 = 2;
    FUN_004bfc70(in_ECX[1],param_1);
    in_ECX[1] = in_ECX[1] + 8;
  }
  else {
    puVar5 = puVar2 + -2;
    ExceptionList = &local_10;
    iVar3 = FUN_007e72f0(puVar5,param_1);
    in_ECX[1] = iVar3;
    for (; param_1 != puVar5; puVar5 = puVar5 + -2) {
      puVar2[-2] = puVar5[-2];
      puVar2[-1] = puVar5[-1];
      puVar2 = puVar2 + -2;
    }
  }
  FUN_0093e940(param_1);
  ExceptionList = local_10;
  return;
}


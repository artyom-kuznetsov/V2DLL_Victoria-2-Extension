// FUN_00b14b40 @ 00b14b40 body=[[00b14b40, 00b14c8b]]


undefined4 * FUN_00b14b40(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  uint uVar4;
  uint uVar5;
  int local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b39c40;
  local_c = ExceptionList;
  iVar1 = *in_ECX;
  if (iVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return param_1;
  }
  uVar4 = in_ECX[1] - 1;
  for (uVar3 = uVar4; -1 < (int)uVar3; uVar3 = uVar3 - 1) {
    if (*(char *)(iVar1 + uVar3) == '/') goto LAB_00b14b9f;
  }
  uVar3 = 0xffffffff;
LAB_00b14b9f:
  if (iVar1 != 0) {
    for (; -1 < (int)uVar4; uVar4 = uVar4 - 1) {
      if (*(char *)(iVar1 + uVar4) == '\\') goto LAB_00b14bb3;
    }
  }
  uVar4 = 0xffffffff;
LAB_00b14bb3:
  ExceptionList = &local_c;
  if ((uVar3 == 0xffffffff) && (uVar4 == 0xffffffff)) {
    FUN_00b00110(in_ECX);
    ExceptionList = local_c;
    return param_1;
  }
  uVar5 = 0;
  if (uVar3 != 0xffffffff) {
    uVar5 = uVar3;
  }
  if ((uVar4 != 0xffffffff) && (uVar5 <= uVar4)) {
    uVar5 = uVar4;
  }
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 1;
  FUN_00b137d0(iVar1 + 1 + uVar5,(in_ECX[1] - uVar5) + -1);
  iVar2 = local_18;
  iVar1 = local_14;
  if (local_18 != 0) {
    do {
      iVar1 = iVar1 + -1;
      if (iVar1 < 0) goto LAB_00b14c30;
    } while (*(char *)(iVar1 + local_18) != '.');
    if (iVar1 != -1) {
      FUN_00b00110(&local_18);
      goto LAB_00b14c6a;
    }
  }
LAB_00b14c30:
  FUN_00b00110(in_ECX);
  if (iVar2 == 0) {
    ExceptionList = local_c;
    return param_1;
  }
LAB_00b14c6a:
  local_4 = local_4 & 0xffffff00;
  (*(code *)PTR__free_00f01b10)(iVar2);
  ExceptionList = local_c;
  return param_1;
}


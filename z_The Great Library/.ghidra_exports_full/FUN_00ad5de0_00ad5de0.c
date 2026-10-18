// FUN_00ad5de0 @ 00ad5de0 body=[[00ad5de0, 00ad5f39]]


uint FUN_00ad5de0(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int in_ECX;
  uint local_24;
  int iStack_1c;
  uint uStack_18;
  undefined4 uStack_14;
  undefined2 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00b3701b;
  local_c = ExceptionList;
  uVar2 = DAT_00ef259c ^ (uint)&stack0xffffffcc;
  ExceptionList = &local_c;
  local_24 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if (*param_2 != 0) {
    (*(code *)PTR__free_00f01b10)(*param_2,uVar2);
    *param_2 = 0;
  }
  iVar3 = FUN_00ad4a10(param_1);
  uVar2 = param_2[1];
  uVar4 = iVar3 + 1;
  if (((uVar4 != uVar2) && (param_2[1] = uVar4, uVar2 < uVar4)) && ((uint)param_2[2] < uVar4)) {
    FUN_00aeb6c0(uVar4);
  }
  uVar2 = 0;
  if (param_2[1] != 0) {
    do {
      *(undefined4 *)(*param_2 + uVar2 * 4) = 0;
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)param_2[1]);
  }
  uVar2 = *(uint *)(in_ECX + 0x84);
  uVar4 = 0;
  if (uVar2 == 0) {
    local_24 = 0;
  }
  else {
    do {
      iVar3 = *(int *)(*(int *)(*(int *)(in_ECX + 0x80) + uVar4 * 4) + 0x1c);
      if ((*(int *)(iVar3 + 4 + param_1 * 0x20) != 0) &&
         (iVar3 = (**(code **)(**(int **)(iVar3 + 4 + param_1 * 0x20) + 0x10))(), iVar3 != 0)) {
        iStack_1c = 0;
        uStack_18 = 0;
        uStack_14 = 0;
        uStack_10 = 1;
        uStack_4 = 0;
        uVar5 = FUN_00ade990(&iStack_1c);
        if (local_24 <= uVar5) {
          local_24 = uVar5;
        }
        uVar5 = 0;
        if (uStack_18 != 0) {
          do {
            piVar1 = (int *)(*param_2 + uVar5 * 4);
            *piVar1 = *piVar1 + *(int *)(iStack_1c + uVar5 * 4);
            uVar5 = uVar5 + 1;
          } while (uVar5 < uStack_18);
        }
        uStack_4 = 0xffffffff;
        if (iStack_1c != 0) {
          (*(code *)PTR__free_00f01b10)(iStack_1c);
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  ExceptionList = local_c;
  return local_24;
}


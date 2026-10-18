// FUN_00b106f0 @ 00b106f0 body=[[00b106f0, 00b1080c]]


void FUN_00b106f0(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  uint uVar5;
  undefined4 uVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00b3989e;
  local_c = ExceptionList;
  uVar3 = DAT_00ef259c ^ (uint)&stack0xffffffdc;
  ExceptionList = &local_c;
  uVar2 = param_1[1];
  uVar5 = 0;
  if (uVar2 != 0) {
    do {
      iVar4 = *(int *)(*param_1 + uVar5 * 4);
      if (iVar4 != 0) {
        FUN_00b0f870(uVar3);
        (*(code *)PTR__free_00f01b10)(iVar4);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  if (*param_1 != 0) {
    (*(code *)PTR__free_00f01b10)(*param_1);
    *param_1 = 0;
  }
  uVar2 = *(uint *)(in_ECX + 4);
  if ((uint)param_1[2] < uVar2) {
    FUN_00aeb6c0(uVar2);
  }
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      iVar4 = (*(code *)PTR_FUN_00f01b08)(0x2c,0x134,4,0,0,0xffffffff);
      uVar6 = 0;
      uStack_4 = 0;
      if (iVar4 != 0) {
        uVar6 = FUN_00b0f7a0(param_2);
      }
      uStack_4 = 0xffffffff;
      FUN_00b0fba0(uVar6);
      iVar4 = param_1[1];
      uVar5 = iVar4 + 1;
      param_1[1] = uVar5;
      if ((uint)param_1[2] < uVar5) {
        FUN_00aeb6c0(iVar4 + 2);
      }
      puVar1 = (undefined4 *)(*param_1 + -4 + param_1[1] * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = uVar6;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  ExceptionList = local_c;
  return;
}


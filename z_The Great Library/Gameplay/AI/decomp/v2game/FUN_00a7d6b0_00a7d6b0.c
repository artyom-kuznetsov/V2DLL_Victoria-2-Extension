// FUN_00a7d6b0 @ 00a7d6b0 body=[[00a7d6b0, 00a7d79b]]


void FUN_00a7d6b0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint in_ECX;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d66e;
  local_10 = ExceptionList;
  uVar1 = param_1[1];
  if ((in_ECX < uVar1) && (uVar2 = *param_1, uVar2 <= in_ECX)) {
    ExceptionList = &local_10;
    if (uVar1 == param_1[2]) {
      ExceptionList = &local_10;
      FUN_00a7d820();
    }
    puVar3 = (undefined4 *)param_1[1];
    puVar5 = (undefined4 *)(((int)(in_ECX - uVar2) / 0x60) * 0x60 + *param_1);
    if (puVar3 != (undefined4 *)0x0) {
      puVar6 = puVar5;
      puVar7 = puVar3;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar3[0x10] = 0;
      puVar3[0x11] = 0;
      puVar3[0x12] = 0;
      local_8._0_1_ = 1;
      local_8._1_3_ = 0;
      FUN_00a7dbc0(puVar5 + 0x10);
      puVar3[0x14] = 0;
      puVar3[0x15] = 0;
      puVar3[0x16] = 0;
      local_8 = CONCAT31(local_8._1_3_,3);
      FUN_00a7dd30(puVar5 + 0x14);
    }
  }
  else {
    ExceptionList = &local_10;
    if (uVar1 == param_1[2]) {
      ExceptionList = &local_10;
      FUN_00a7d820();
    }
    FUN_00a7daa0(param_1[1]);
  }
  param_1[1] = param_1[1] + 0x60;
  ExceptionList = local_10;
  return;
}


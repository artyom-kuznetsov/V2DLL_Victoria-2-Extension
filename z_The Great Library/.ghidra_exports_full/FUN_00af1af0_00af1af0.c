// FUN_00af1af0 @ 00af1af0 body=[[00af1af0, 00af1e2b]]


void FUN_00af1af0(int *param_1,int *param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined1 auStack_f4 [28];
  int iStack_d8;
  undefined4 uStack_d4;
  int local_d0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined2 uStack_90;
  undefined1 uStack_8e;
  uint uStack_8c;
  uint local_84;
  void *pvStack_54;
  void *local_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  
  uStack_44 = 0xffffffff;
  puStack_48 = &LAB_00b38591;
  local_4c = ExceptionList;
  local_84 = DAT_00ef259c ^ (uint)auStack_f4;
  ExceptionList = &local_4c;
  local_d0 = *param_2;
  iVar1 = param_2[7];
  (**(code **)(*param_1 + 8))(&local_a0,0x1c,DAT_00ef259c ^ (uint)&stack0xffffff00);
  if (iVar1 == 1) {
    uStack_90 = CONCAT11((undefined1)uStack_90,uStack_90._1_1_);
    uVar2 = (undefined1)uStack_a8;
    uVar3 = uStack_a8._1_1_;
    uStack_a8._0_2_ = CONCAT11(uStack_a8._2_1_,uStack_a8._3_1_);
    uStack_a8 = (float)CONCAT13(uVar2,CONCAT12(uVar3,(undefined2)uStack_a8));
    uVar2 = (undefined1)uStack_94;
    uVar3 = uStack_94._1_1_;
    uStack_94._0_2_ = CONCAT11(uStack_94._2_1_,uStack_94._3_1_);
    uStack_94 = (float)CONCAT13(uVar2,CONCAT12(uVar3,(undefined2)uStack_94));
    uVar2 = (undefined1)uStack_a4;
    uVar3 = uStack_a4._1_1_;
    uStack_a4._0_2_ = CONCAT11(uStack_a4._2_1_,uStack_a4._3_1_);
    uStack_a4 = (float)CONCAT13(uVar2,CONCAT12(uVar3,(undefined2)uStack_a4));
    uVar2 = (undefined1)local_a0;
    uVar3 = local_a0._1_1_;
    local_a0._0_2_ = CONCAT11(local_a0._2_1_,local_a0._3_1_);
    local_a0 = (float)CONCAT13(uVar2,CONCAT12(uVar3,(undefined2)local_a0));
    uVar2 = (undefined1)uStack_9c;
    uVar3 = uStack_9c._1_1_;
    uStack_9c._0_2_ = CONCAT11(uStack_9c._2_1_,uStack_9c._3_1_);
    uStack_9c = (float)CONCAT13(uVar2,CONCAT12(uVar3,(undefined2)uStack_9c));
    uVar2 = (undefined1)uStack_98;
    uVar3 = uStack_98._1_1_;
    uStack_98._0_2_ = CONCAT11(uStack_98._2_1_,uStack_98._3_1_);
    uStack_98 = (float)CONCAT13(uVar2,CONCAT12(uVar3,(undefined2)uStack_98));
  }
  uVar4 = FUN_00aee020(param_1,param_2[6],iVar1);
  iVar1 = **(int **)(iStack_d8 + 200) + (uint)uStack_90 * 8;
  uStack_d4 = uVar4;
  if (*(int *)(iVar1 + 4) == 0) {
    iStack_d8 = 0;
  }
  else {
    iStack_d8 = (**(code **)(**(int **)(iVar1 + 4) + 0x10))();
  }
  iVar1 = iStack_d8;
  puVar5 = (undefined4 *)FUN_00b10840(uStack_8e,uVar4,uStack_a8);
  uVar6 = *(int *)(iVar1 + 0xc) + 1;
  local_4c = (void *)0x0;
  *(uint *)(iVar1 + 0xc) = uVar6;
  if (*(uint *)(iVar1 + 0x10) < uVar6) {
    FUN_00b00440();
  }
  puVar8 = (undefined4 *)(*(int *)(iVar1 + 8) + (*(int *)(iVar1 + 0xc) * 9 + -9) * 4);
  iVar9 = iVar1;
  if (puVar8 != (undefined4 *)0x0) {
    for (iVar7 = 9; iVar9 = iStack_d8, iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  iVar1 = *(int *)(iVar1 + 8) + -0x24 + *(int *)(iVar9 + 0xc) * 0x24;
  local_4c = (void *)0xffffffff;
  FUN_00b10890();
  *(float *)(iVar1 + 0x1c) = uStack_94;
  *(float *)(iVar1 + 0xc) = uStack_a4;
  *(float *)(iVar1 + 0x10) = local_a0;
  *(float *)(iVar1 + 0x14) = uStack_9c;
  *(float *)(iVar1 + 0x18) = uStack_98;
  if (*(char *)(local_d0 + 0xc) != '\0') {
    FUN_00b15e80();
    FUN_00b15e80("       + Texture  = %s",uStack_d4);
    uVar4 = FUN_00adf8e0();
    FUN_00b15e80("       + Material = %s (number %d)",uVar4);
    FUN_00b15e80("       + Amount   = %f",(double)uStack_a8);
    FUN_00b15e80("       + MapType  = %d",uStack_8e);
    FUN_00b15e80("       + UOffset  = %f",(double)uStack_a4);
    FUN_00b15e80("       + VOffset  = %f",(double)local_a0);
    FUN_00b15e80("       + UTiling  = %f",(double)uStack_9c);
    FUN_00b15e80("       + VTiling  = %f",(double)uStack_98);
    FUN_00b15e80("       + Rotation = %f (radians)",(double)uStack_94);
  }
  ExceptionList = pvStack_54;
  __security_check_cookie(uStack_8c ^ (uint)&stack0xffffff04);
  return;
}


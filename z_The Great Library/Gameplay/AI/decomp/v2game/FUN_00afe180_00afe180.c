// FUN_00afe180 @ 00afe180 body=[[00afe180, 00afe518]]


void FUN_00afe180(int *param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  uint unaff_EBX;
  undefined4 unaff_EBP;
  uint uVar10;
  ushort in_FPUControlWord;
  uint uStack_48;
  int iStack_44;
  int local_40;
  int *piStack_3c;
  undefined4 local_38;
  int *local_34;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  void *pvStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00b38b3c;
  local_c = ExceptionList;
  local_10 = DAT_00ef259c ^ (uint)&uStack_48;
  ExceptionList = &local_c;
  local_38 = *(undefined4 *)(param_2 + 4);
  iVar1 = *(int *)(param_2 + 0x1c);
  local_34 = param_1;
  (**(code **)(*param_1 + 8))(&local_24,0x14,DAT_00ef259c ^ (uint)&stack0xffffffa8);
  if (iVar1 == 1) {
    uVar2 = (undefined1)uStack_1c;
    uVar3 = uStack_1c._1_1_;
    uStack_1c._0_2_ = CONCAT11(uStack_1c._2_1_,uStack_1c._3_1_);
    uStack_1c = CONCAT13(uVar2,CONCAT12(uVar3,(undefined2)uStack_1c));
    uVar2 = (undefined1)uStack_20;
    uVar3 = uStack_20._1_1_;
    uStack_20._0_2_ = CONCAT11(uStack_20._2_1_,uStack_20._3_1_);
    uStack_20 = CONCAT13(uVar2,CONCAT12(uVar3,(undefined2)uStack_20));
    uVar2 = (undefined1)uStack_2c;
    uVar3 = uStack_2c._1_1_;
    uStack_2c._0_2_ = CONCAT11(uStack_2c._2_1_,uStack_2c._3_1_);
    uStack_2c = (float)CONCAT13(uVar2,CONCAT12(uVar3,(undefined2)uStack_2c));
    uVar2 = (undefined1)uStack_28;
    uVar3 = uStack_28._1_1_;
    uStack_28._0_2_ = CONCAT11(uStack_28._2_1_,uStack_28._3_1_);
    uStack_28 = (float)CONCAT13(uVar2,CONCAT12(uVar3,(undefined2)uStack_28));
    uVar2 = (undefined1)local_24;
    uVar3 = local_24._1_1_;
    local_24._0_2_ = CONCAT11(local_24._2_1_,local_24._3_1_);
    local_24 = (float)CONCAT13(uVar2,CONCAT12(uVar3,(undefined2)local_24));
  }
  uVar4 = FUN_00aee020(param_1,*(undefined4 *)(param_2 + 0x18),iVar1);
  iVar5 = FUN_00b157e0();
  piVar6 = (int *)(*(code *)PTR_FUN_00f01b08)(0x18,0x12e,4,0,0,0xffffffff);
  if (piVar6 == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6[3] = iVar5;
    piVar6[4] = 0;
    *piVar6 = 0;
    *(undefined2 *)(piVar6 + 1) = 0;
    piVar6[2] = 0;
    piVar6[5] = 0;
  }
  FUN_00b00c70();
  puVar7 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(8,0x131,4,0,0,0xffffffff);
  puVar8 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_00ddddf8;
    puVar8 = puVar7;
  }
  if ((undefined4 *)piVar6[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)piVar6[2])();
  }
  piVar6[2] = (int)puVar8;
  if (puVar8 != (undefined4 *)0x0) {
    puVar8[1] = piVar6;
  }
  if (*(char *)(uStack_48 + 0xc) != '\0') {
    FUN_00b15e80("    - Progressive Morph Submotion: %s",uVar4);
    FUN_00b15e80("       + NrKeys             = %d",uStack_1c);
    FUN_00b15e80("       + Pose Weight        = %f",(double)uStack_2c);
    FUN_00b15e80("       + Minimum Weight     = %f",(double)uStack_28);
    FUN_00b15e80("       + Maximum Weight     = %f",(double)local_24);
    puVar8 = (undefined4 *)FUN_00b12f80(&local_38,uStack_20);
    puVar9 = (undefined1 *)*puVar8;
    local_c = (void *)0x0;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &DAT_00ded94d;
    }
    FUN_00b15e80("       + PhonemeSet         = %s",puVar9);
    local_c = (void *)0xffffffff;
    FUN_00b13650();
  }
  uVar10 = 0;
  piVar6[4] = (int)uStack_2c;
  piVar6[5] = uStack_20;
  if (uStack_1c != 0) {
    do {
      (**(code **)(*piStack_3c + 8))(&stack0xffffffb0,8);
      if (iVar1 == 1) {
        unaff_EBP = CONCAT13((char)unaff_EBP,
                             CONCAT12((char)((uint)unaff_EBP >> 8),
                                      CONCAT11((char)((uint)unaff_EBP >> 0x10),
                                               (char)((uint)unaff_EBP >> 0x18))));
        unaff_EBX = (uint)CONCAT11((char)unaff_EBX,(char)(unaff_EBX >> 8));
      }
      uStack_48 = (uint)in_FPUControlWord;
      iVar5 = (uVar10 & 0xffff) * 8;
      uVar10 = uVar10 + 1;
      iStack_44 = (int)ROUND(((float)(unaff_EBX & 0xffff) * 1.5259022e-05 * (local_24 - uStack_28) +
                             uStack_28) * 65535.0);
      *(undefined2 *)(iVar5 + *piVar6) = (undefined2)iStack_44;
      *(undefined4 *)(iVar5 + 4 + *piVar6) = unaff_EBP;
    } while (uVar10 < uStack_1c);
  }
  FUN_00b00560();
  uVar10 = *(int *)(local_40 + 0x48) + 1;
  *(uint *)(local_40 + 0x48) = uVar10;
  if (*(uint *)(local_40 + 0x4c) < uVar10) {
    FUN_00aeb6c0();
  }
  puVar8 = (undefined4 *)(*(int *)(local_40 + 0x44) + -4 + *(int *)(local_40 + 0x48) * 4);
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = piVar6;
  }
  FUN_00adbdb0();
  ExceptionList = pvStack_14;
  __security_check_cookie(uStack_18 ^ (uint)&stack0xffffffb0);
  return;
}


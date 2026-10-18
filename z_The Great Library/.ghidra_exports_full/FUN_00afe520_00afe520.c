// FUN_00afe520 @ 00afe520 body=[[00afe520, 00afe92a]]


void FUN_00afe520(int *param_1,int param_2)

{
  ushort uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined1 auStack_f4 [32];
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined2 local_cc;
  int *piStack_c8;
  int iStack_c4;
  int *local_c0;
  int local_bc;
  undefined4 uStack_b8;
  int local_b4;
  int local_b0;
  undefined1 local_ac [4];
  undefined1 uStack_a8;
  undefined1 uStack_a7;
  undefined1 uStack_a6;
  undefined1 uStack_a5;
  undefined1 uStack_a4;
  undefined1 uStack_a3;
  undefined1 uStack_a2;
  undefined1 uStack_a1;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  int iStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint local_84;
  void *pvStack_54;
  void *local_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  
  uStack_44 = 0xffffffff;
  puStack_48 = &LAB_00b38b6c;
  local_4c = ExceptionList;
  local_84 = DAT_00ef259c ^ (uint)auStack_f4;
  ExceptionList = &local_4c;
  iVar12 = *(int *)(param_2 + 0x1c);
  iVar8 = *(int *)(param_2 + 4);
  local_b0 = param_2;
  local_c0 = param_1;
  local_bc = iVar8;
  local_b4 = iVar12;
  (**(code **)(*param_1 + 8))(&local_cc,4,DAT_00ef259c ^ (uint)&stack0xffffff00);
  if (iVar12 == 1) {
    uVar2 = (undefined1)uStack_d4;
    uVar3 = uStack_d4._1_1_;
    uStack_d4._0_2_ = CONCAT11(uStack_d4._2_1_,uStack_d4._3_1_);
    uStack_d4 = CONCAT13(uVar2,CONCAT12(uVar3,(undefined2)uStack_d4));
  }
  uVar11 = *(uint *)(iVar8 + 0x48);
  if (((uStack_d4 != uVar11) && (*(uint *)(iVar8 + 0x48) = uStack_d4, uVar11 < uStack_d4)) &&
     (*(uint *)(iVar8 + 0x4c) < uStack_d4)) {
    FUN_00aeb6c0();
  }
  local_c0 = (int *)0x0;
  if (uStack_d4 != 0) {
    do {
      (**(code **)(*param_1 + 8))(&uStack_a0,0x14);
      uVar5 = uStack_a1;
      uVar4 = uStack_a3;
      uVar3 = uStack_a5;
      uVar2 = uStack_a7;
      if (iVar12 == 1) {
        uVar6 = (undefined1)uStack_98;
        uVar7 = uStack_98._1_1_;
        uStack_98._0_2_ = CONCAT11(uStack_98._2_1_,uStack_98._3_1_);
        uStack_98 = (float)CONCAT13(uVar6,CONCAT12(uVar7,(ushort)uStack_98));
        uVar6 = (undefined1)uStack_9c;
        uVar7 = uStack_9c._1_1_;
        uStack_9c._0_2_ = CONCAT11(uStack_9c._2_1_,uStack_9c._3_1_);
        uStack_9c = (float)CONCAT13(uVar6,CONCAT12(uVar7,(undefined2)uStack_9c));
        uStack_a5 = uStack_a8;
        uStack_a8 = uVar3;
        uStack_a7 = uStack_a6;
        uStack_a6 = uVar2;
        uStack_a1 = uStack_a4;
        uStack_a4 = uVar5;
        uStack_a3 = uStack_a2;
        uStack_a2 = uVar4;
        uVar2 = (undefined1)uStack_a0;
        uVar3 = uStack_a0._1_1_;
        uStack_a0._0_2_ = CONCAT11(uStack_a0._2_1_,uStack_a0._3_1_);
        uStack_a0 = (float)CONCAT13(uVar2,CONCAT12(uVar3,(undefined2)uStack_a0));
      }
      uStack_b8 = FUN_00aee020(param_1,*(undefined4 *)((int)local_c0 + 0x18),iVar12);
      iVar8 = FUN_00b157e0(uStack_b8);
      piVar9 = (int *)(*(code *)PTR_FUN_00f01b08)(0x18,0x12e,4,0,0,0xffffffff);
      if (piVar9 == (int *)0x0) {
        piVar9 = (int *)0x0;
      }
      else {
        piVar9[3] = iVar8;
        piVar9[4] = 0;
        *piVar9 = 0;
        *(undefined2 *)(piVar9 + 1) = 0;
        piVar9[2] = 0;
        piVar9[5] = 0;
      }
      uVar1 = *(ushort *)(piVar9 + 1);
      uVar11 = (uint)uVar1;
      uVar13 = (uint)uStack_98 & 0xffff;
      *(ushort *)(piVar9 + 1) = (ushort)uStack_98;
      if (uVar1 < (ushort)uStack_98) {
        FUN_00adca40(uVar13);
        for (; iVar12 = iStack_c4, uVar11 < uVar13; uVar11 = uVar11 + 1) {
          iVar12 = *piVar9 + (uVar11 & 0xffff) * 8;
          if (iVar12 != 0) {
            *(undefined4 *)(iVar12 + 4) = 0;
          }
        }
      }
      puVar10 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(8,0x131,4,0,0,0xffffffff);
      puVar14 = (undefined4 *)0x0;
      if (puVar10 != (undefined4 *)0x0) {
        puVar10[1] = 0;
        *puVar10 = &PTR_LAB_00ddddf8;
        puVar14 = puVar10;
      }
      if ((undefined4 *)piVar9[2] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar9[2])();
      }
      piVar9[2] = (int)puVar14;
      if (puVar14 != (undefined4 *)0x0) {
        puVar14[1] = piVar9;
      }
      if (*(char *)(local_b4 + 0xc) != '\0') {
        FUN_00b15e80("    - Progressive Morph Submotion: %s",local_b0);
        FUN_00b15e80("       + NrKeys             = %d",uStack_90);
        FUN_00b15e80("       + Pose Weight        = %f",(double)uStack_a0);
        FUN_00b15e80("       + Minimum Weight     = %f",(double)uStack_9c);
        FUN_00b15e80("       + Maximum Weight     = %f",(double)uStack_98);
        FUN_00b12f80(local_ac,iStack_94);
        local_4c = (void *)0x0;
        FUN_00b15e80();
        local_4c = (void *)0xffffffff;
        FUN_00b13650();
      }
      uVar11 = 0;
      piVar9[4] = (int)uStack_a0;
      piVar9[5] = iStack_94;
      if (uStack_90 != 0) {
        do {
          (**(code **)(*piStack_c8 + 8))();
          if (iVar12 == 1) {
            uVar2 = (undefined1)uStack_d0;
            uVar3 = uStack_d0._1_1_;
            uStack_d0._0_2_ = CONCAT11(uStack_d0._2_1_,uStack_d0._3_1_);
            uStack_d0 = CONCAT13(uVar2,CONCAT12(uVar3,(undefined2)uStack_d0));
            local_cc = CONCAT11((undefined1)local_cc,local_cc._1_1_);
          }
          iVar8 = (uVar11 & 0xffff) * 8;
          *(undefined2 *)(iVar8 + *piVar9) = local_cc;
          uVar11 = uVar11 + 1;
          *(undefined4 *)(iVar8 + 4 + *piVar9) = uStack_d0;
        } while (uVar11 < uStack_90);
      }
      FUN_00b00560();
      *(int **)(*(int *)(iStack_c4 + 0x44) + (int)local_c0 * 4) = piVar9;
      local_c0 = (int *)((int)local_c0 + 1);
      param_1 = piStack_c8;
    } while (local_c0 < uStack_d4);
  }
  FUN_00adbdb0();
  ExceptionList = pvStack_54;
  __security_check_cookie(uStack_8c ^ (uint)&stack0xffffff04);
  return;
}


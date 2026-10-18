// FUN_00765400 @ 00765400 body=[[00765400, 0076545b] [00765460, 007655ae] [007655b2, 007656c5] [007656c9, 0076570e] [00765712, 00765735] [00765739, 00765768] [0076576c, 007657d4] [007657d8, 0076586e]]


/* WARNING: Removing unreachable block (ram,0x0076547e) */

void FUN_00765400(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int in_ECX;
  undefined4 unaff_EBX;
  bool bVar8;
  uint *puVar9;
  int local_c8;
  int iStack_b8;
  uint uStack_b4;
  undefined4 uStack_b0;
  undefined1 auStack_a8 [4];
  undefined4 uStack_a4;
  uint uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  uint local_88 [4];
  undefined4 local_78;
  uint local_74;
  uint uStack_70;
  undefined1 uStack_6c;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [16];
  uint uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined4 uStack_28;
  uint uStack_24;
  undefined4 uStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b7bd68;
  local_14 = ExceptionList;
  if (param_1 == 0) {
    iVar4 = *(int *)(DAT_012588e8 + 0x18);
    ExceptionList = &local_14;
    if (iVar4 != 0) {
      iVar5 = *(int *)(in_ECX + -4);
      ExceptionList = &local_14;
      do {
        uVar3 = *(uint *)(iVar4 + 0x10);
        uVar1 = *(uint *)(iVar5 + 0xa8);
        iVar2 = FUN_00414bd0();
        bVar8 = false;
        if (iVar2 == 0) {
          if (uVar1 < uVar3) {
            uVar3 = 0xffffffff;
          }
          else {
            uVar3 = (uint)(uVar1 != uVar3);
          }
          bVar8 = uVar3 == 0;
        }
        if (bVar8) {
          iVar4 = FUN_00aae9af();
          local_c = 0;
          if (iVar4 == 0) {
            local_c8 = 0;
          }
          else {
            local_74 = 0xf;
            local_78 = 0;
            local_88[0] = local_88[0] & 0xffffff00;
            FUN_00409350("connection_log_text",0x13);
            local_c = CONCAT31(local_c._1_3_,1);
            piVar7 = *(int **)(in_ECX + -4);
            puVar9 = local_88;
            (**(code **)(*piVar7 + 0x3c))();
            (**(code **)(*piVar7 + 0x34))();
            local_c8 = FUN_009b1df0(iVar4,puVar9);
          }
          local_c = 0xffffffff;
          if (iVar4 != 0) {
            if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_74 = 0xf;
            local_78 = 0;
            local_88[0] = local_88[0] & 0xffffff00;
          }
          uStack_3c = 0xf;
          uStack_40 = 0;
          auStack_50[0] = 0;
          FUN_00409350("NAME_TAKEN",10);
          local_c = 3;
          uStack_58 = 0xf;
          uStack_5c = 0;
          uStack_6c = 0;
          FUN_00409350(&DAT_00dede68,4);
          local_c._0_1_ = 4;
          piVar7 = *(int **)(local_c8 + 0x20);
          iVar4 = FUN_009a8ee0(&iStack_b8,auStack_50);
          local_c._0_1_ = 5;
          iVar5 = FUN_00475500();
          uVar6 = FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
          local_c = CONCAT31(local_c._1_3_,6);
          (**(code **)(*piVar7 + 0x3c))();
          FUN_00408ed0(uVar6,0,0xffffffff);
          FUN_00a5ecc0();
          if (0xf < uStack_24) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(uStack_38);
          }
          uStack_24 = 0xf;
          uStack_28 = 0;
          uStack_38 = uStack_38 & 0xffffff00;
          puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,7);
          FUN_009adb70();
          if (iStack_b8 != 0) {
            FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(iStack_b8);
          }
          iStack_b8 = 0;
          uStack_b4 = 0;
          uStack_b0 = 0;
          if (uStack_5c < 0x10) {
            puStack_10 = (undefined1 *)0xffffffff;
            uStack_5c = 0xf;
            uStack_60 = 0;
            uStack_70 = uStack_70 & 0xffffff00;
            if (0xf < uStack_40) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(uStack_54);
            }
            uStack_94 = 0xf;
            uStack_98 = 0;
            auStack_a8[0] = 0;
            FUN_00409350();
            puStack_10 = (undefined1 *)0x8;
            piVar7 = (int *)(**(code **)(**(int **)(iVar4 + 0x368) + 0x7c))(auStack_a8);
            (**(code **)(*piVar7 + 0x10))(unaff_EBX,1);
            uStack_1c = 0xffffffff;
            if (uStack_a0 < 0x10) {
              uStack_a0 = 0xf;
              uStack_a4 = 0;
              uStack_b4 = uStack_b4 & 0xffffff00;
              iVar5 = (**(code **)(**(int **)(iVar4 + -4) + 0x44))();
              (**(code **)(**(int **)(iVar5 + 0x38) + 0xc))(3000);
              uVar6 = (**(code **)(**(int **)(iVar4 + -4) + 0x44))();
              FUN_009af9f0(uVar6);
              iVar5 = (**(code **)(**(int **)(iVar4 + -4) + 0x100))();
              (**(code **)(**(int **)(iVar5 + 0xe4) + 0x10))(0);
              iVar4 = *(int *)(iVar4 + -4);
              (**(code **)(**(int **)(*(int *)(iVar4 + 0x74c) + 0xc) + 0x30))();
              iVar4 = *(int *)(iVar4 + 0x1b4);
              if (*(int *)(iVar4 + 0x20) == 0) {
                ExceptionList = local_14;
                return;
              }
              (**(code **)(*(int *)(*(int *)(iVar4 + 0x20) + 0x18) + 0x38))();
              ExceptionList = local_14;
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(uStack_b4);
          }
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uStack_70);
        }
        iVar4 = *(int *)(iVar4 + 0x3c);
      } while (iVar4 != 0);
    }
    FUN_007580e0();
    iVar4 = (**(code **)(**(int **)(in_ECX + -4) + 0x100))();
    (**(code **)(**(int **)(iVar4 + 0xe4) + 0x10))();
  }
  ExceptionList = local_14;
  return;
}


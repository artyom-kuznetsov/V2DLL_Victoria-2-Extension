// FUN_009c28b0 @ 009c28b0 body=[[009c28b0, 009c299a] [009c299e, 009c29bc] [009c29c0, 009c29e0] [009c29e4, 009c2a73] [009c2a77, 009c2b2e] [009c2b32, 009c2b5a] [009c2b5e, 009c2b7d] [009c2b81, 009c2ba8] [009c2bac, 009c2bc6] [009c2bca, 009c2bde]]


int * FUN_009c28b0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 in_stack_00000020;
  uint in_stack_00000024;
  undefined4 in_stack_0000002c;
  int in_stack_0000003c;
  uint in_stack_00000040;
  undefined1 *in_stack_00000048;
  int in_stack_0000004c;
  undefined4 in_stack_00000050;
  undefined1 in_stack_00000054;
  undefined1 auStack_d0 [16];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined *puStack_b8;
  undefined *puStack_b4;
  char *pcStack_b0;
  uint *puStack_ac;
  uint local_88;
  uint local_84;
  undefined4 local_78;
  uint local_74;
  uint local_6c;
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  int local_34;
  uint local_30;
  undefined4 local_20;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b49d49;
  local_10 = ExceptionList;
  local_8 = 1;
  if (*(int *)(param_1 + 0x30) != 0) {
    piVar5 = *(int **)(DAT_01258aa8 + 0x60);
    piVar3 = *(int **)(DAT_01258aa8 + 0x5c);
    if (piVar3 != piVar5) {
      do {
        if (*piVar3 == *(int *)(param_1 + 0x30) + 0x18) break;
        piVar3 = piVar3 + 1;
      } while (piVar3 != piVar5);
      if (piVar3 != piVar5) {
        if (*(int *)(param_1 + 0x4c) == 0) {
          puStack_ac = local_50;
          pcStack_b0 = (char *)0x9c292b;
          ExceptionList = &local_10;
          uVar4 = FUN_009888f0();
          local_8._0_1_ = 2;
          local_20 = 0;
          puStack_ac = (uint *)0x10;
          pcStack_b0 = "ButtonMenuButton";
          local_1c = 0xf;
          local_30 = local_30 & 0xffffff00;
          puStack_b4 = (undefined *)0x9c2952;
          FUN_00409350();
          local_8._0_1_ = 3;
          pcStack_b0 = (char *)0x9c2962;
          puStack_ac = (uint *)uVar4;
          puStack_ac = (uint *)FUN_00988f20();
          local_8._0_1_ = 4;
          if (0xf < puStack_ac[5]) {
            puStack_ac = (uint *)*puStack_ac;
          }
          pcStack_b0 = *(char **)(param_1 + 0x30);
          puStack_b4 = (undefined *)0x9c298a;
          piVar5 = (int *)FUN_009e6050();
          if (0xf < local_58) {
            puStack_ac = (uint *)local_6c;
                    /* WARNING: Subroutine does not return */
            pcStack_b0 = &UNK_009c299b;
            FUN_00aae91b();
          }
          local_58 = 0xf;
          local_5c = 0;
          local_6c = local_6c & 0xffffff00;
          if (0xf < local_1c) {
            puStack_ac = (uint *)local_30;
                    /* WARNING: Subroutine does not return */
            pcStack_b0 = &UNK_009c29bd;
            FUN_00aae91b();
          }
          local_8 = CONCAT31(local_8._1_3_,1);
          local_1c = 0xf;
          local_20 = 0;
          local_30 = local_30 & 0xffffff00;
          if (0xf < local_3c) {
            puStack_ac = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
            pcStack_b0 = &UNK_009c29e1;
            FUN_00aae91b();
          }
          local_3c = 0xf;
          local_40 = 0;
          local_50[0] = local_50[0] & 0xffffff00;
          puStack_ac = (uint *)param_1;
          pcStack_b0 = (char *)0x9c29fd;
          (**(code **)(piVar5[0x15] + 4))();
        }
        else {
          piVar5 = (int *)**(undefined4 **)(param_1 + 0x48);
          puStack_ac = (uint *)0x9c2a0c;
          ExceptionList = &local_10;
          FUN_009c2ec0();
        }
        pcVar1 = *(code **)(*piVar5 + 0xb8);
        *(undefined1 *)((int)piVar5 + 0x6d) = 1;
        puStack_ac = (uint *)0x9c2a1e;
        (*pcVar1)();
        puStack_ac = (uint *)0x9c2a27;
        (**(code **)(*piVar5 + 0x38))();
        puStack_ac = (uint *)0x10;
        pcStack_b0 = "ButtonMenuButton";
        local_74 = 0xf;
        local_78 = 0;
        local_88 = local_88 & 0xffffff00;
        puStack_b4 = (undefined *)0x9c2a4a;
        FUN_00409350();
        local_8._0_1_ = 5;
        puStack_ac = &local_88;
        pcStack_b0 = (char *)0x9c2a5e;
        (**(code **)(*piVar5 + 0x78))();
        local_8._0_1_ = 1;
        if (0xf < local_74) {
          pcStack_b0 = (char *)local_88;
                    /* WARNING: Subroutine does not return */
          puStack_b4 = &UNK_009c2a74;
          FUN_00aae91b();
        }
        if (in_stack_0000003c != 0) {
          pcStack_b0 = (char *)&stack0x0000002c;
          puStack_b4 = (undefined *)0x9c2a8c;
          (**(code **)(*piVar5 + 0xe4))();
        }
        pcStack_b0 = in_stack_00000048;
        puStack_b4 = (undefined *)0x9c2a99;
        (**(code **)(*piVar5 + 0x48))();
        puStack_b4 = (undefined *)in_stack_0000004c;
        in_stack_00000048 = auStack_d0;
        uStack_bc = 0xf;
        uStack_c0 = 0;
        auStack_d0[0] = 0;
        FUN_00408ed0(&param_4,0,0xffffffff);
        in_stack_00000048 = (undefined1 *)FUN_009c1e60(piVar5);
        local_8._0_1_ = 6;
        iVar6 = *(int *)(param_1 + 0x38);
        puStack_b4 = (undefined *)0x3c;
        puStack_b8 = (undefined *)0x9c2ade;
        in_stack_0000004c = iVar6;
        local_34 = FUN_00aae9af();
        local_8 = CONCAT31(local_8._1_3_,7);
        if (local_34 == 0) {
          uVar4 = 0;
        }
        else {
          puStack_b8 = (undefined *)0x9c2af7;
          puStack_b4 = (undefined *)iVar6;
          uVar4 = FUN_009c2e00();
          iVar6 = in_stack_0000004c;
        }
        iVar2 = *(int *)(param_1 + 0x3c);
        *(undefined4 *)(param_1 + 0x38) = uVar4;
        *(int *)(param_1 + 0x3c) = iVar2 + 1;
        if (iVar2 == 0) {
          *(undefined4 *)(param_1 + 0x34) = uVar4;
        }
        else {
          *(undefined4 *)(iVar6 + 0x34) = uVar4;
        }
        if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
          puStack_b8 = &UNK_009c2b2f;
          FUN_00aae91b();
        }
        iVar6 = *(int *)(param_1 + 0x38);
        *(undefined4 *)(iVar6 + 0x24) = param_2;
        *(undefined4 *)(iVar6 + 0x28) = in_stack_00000050;
        *(undefined4 *)(iVar6 + 0x2c) = param_3;
        *(undefined1 *)(iVar6 + 0x21) = in_stack_00000054;
        if (0xf < in_stack_00000024) {
          puStack_b4 = (undefined *)param_4;
                    /* WARNING: Subroutine does not return */
          puStack_b8 = &UNK_009c2b5b;
          FUN_00aae91b();
        }
        in_stack_00000024 = 0xf;
        in_stack_00000020 = 0;
        param_4 = param_4 & 0xffffff00;
        if (0xf < in_stack_00000040) {
          puStack_b4 = (undefined *)in_stack_0000002c;
                    /* WARNING: Subroutine does not return */
          puStack_b8 = &UNK_009c2b7e;
          FUN_00aae91b();
        }
        ExceptionList = local_10;
        return piVar5;
      }
    }
  }
  if (0xf < in_stack_00000024) {
    puStack_ac = (uint *)param_4;
                    /* WARNING: Subroutine does not return */
    pcStack_b0 = &UNK_009c2ba9;
    ExceptionList = &local_10;
    FUN_00aae91b();
  }
  in_stack_00000024 = 0xf;
  in_stack_00000020 = 0;
  param_4 = param_4 & 0xffffff00;
  if (0xf < in_stack_00000040) {
    puStack_ac = (uint *)in_stack_0000002c;
                    /* WARNING: Subroutine does not return */
    pcStack_b0 = &UNK_009c2bc7;
    ExceptionList = &local_10;
    FUN_00aae91b();
  }
  return (int *)0x0;
}


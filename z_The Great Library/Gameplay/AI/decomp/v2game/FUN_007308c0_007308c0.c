// FUN_007308c0 @ 007308c0 body=[[007308c0, 00730a9b] [00730a9f, 00730bcd] [00730bd1, 00730bf6] [00730bfa, 00730c22] [00730c26, 00730c48] [00730c4c, 00730c72] [00730c76, 00730df5] [00730df9, 00730e56] [00730e5a, 00730e90] [00730e94, 00730ea2] [00730ea6, 00730eb8]]


void FUN_007308c0(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint in_stack_00000020;
  int *in_stack_00000028;
  undefined4 *in_stack_0000002c;
  undefined4 in_stack_00000030;
  char in_stack_00000034;
  char local_188 [104];
  int local_120;
  undefined **local_110;
  undefined4 local_10c;
  byte local_108 [64];
  int local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_b8;
  uint local_b0;
  undefined4 local_a0;
  uint local_9c;
  uint local_94;
  undefined4 local_84;
  uint local_80;
  uint local_78;
  undefined4 local_68;
  uint local_64;
  uint local_5c;
  undefined4 local_4c;
  uint local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  uint local_30;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  uint local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b4bd6f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined1 *)(param_1 + 0x90) = 1;
  *(undefined4 *)(param_1 + 0x38) = *in_stack_0000002c;
  *(undefined4 *)(param_1 + 0x3c) = in_stack_0000002c[1];
  local_10c = 0x18d;
  local_110 = CGoodsPool::vftable;
  local_c8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_8 = 1;
  uStack_7 = 0;
  _memset(local_108,0,0x40);
  FUN_00423920();
  local_8 = 2;
  uVar3 = local_8;
  local_8 = 2;
  in_stack_0000002c = (undefined4 *)((in_stack_00000028[1] - *in_stack_00000028) / 0x18);
  if (((undefined4 *)((*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28)) / 0x14) !=
       in_stack_0000002c) || (in_stack_00000034 != '\0')) {
    FUN_007385c0();
    FUN_00737ef0();
    if (0 < (int)in_stack_0000002c) {
      _in_stack_00000034 = 0;
      do {
        piVar6 = (int *)(_in_stack_00000034 + *in_stack_00000028);
        local_1c = piVar6[3];
        local_20 = piVar6[1];
        iVar2 = *piVar6;
        if (iVar2 == 0) {
          local_38 = 0;
          local_34 = 0;
          puVar4 = &local_38;
        }
        else {
          local_3c = *(undefined4 *)(iVar2 + 0xc);
          local_40 = *(undefined4 *)(iVar2 + 8);
          puVar4 = &local_40;
        }
        local_28 = *puVar4;
        local_24 = puVar4[1];
        local_18 = piVar6[2];
        FUN_00738440();
        FUN_0047db00();
        local_8 = 3;
        local_b8 = *(undefined4 *)(param_1 + 0x38);
        FUN_0047de60();
        FUN_0047dc20();
        local_8 = 2;
        if (local_120 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        _in_stack_00000034 = _in_stack_00000034 + 0x18;
        in_stack_0000002c = (undefined4 *)((int)in_stack_0000002c + -1);
      } while (in_stack_0000002c != (undefined4 *)0x0);
    }
    if ((*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28)) / 0x14 < 1) {
      (**(code **)(**(int **)(param_1 + 0xb0) + 0x38))();
      FUN_00737be0();
      local_1c = 0xf;
      local_20 = 0;
      local_30 = local_30 & 0xffffff00;
      FUN_00409350();
      local_8 = 10;
      FUN_00408ed0();
      FUN_00a5ecc0();
      local_8 = 2;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_1c = 0xf;
      local_20 = 0;
      local_30 = local_30 & 0xffffff00;
      FUN_00409350();
      local_8 = 0xb;
      FUN_00408ed0();
      FUN_00a5ecc0();
      local_8 = 2;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      (**(code **)(**(int **)(param_1 + 0xa8) + 0x48))();
      (**(code **)(**(int **)(param_1 + 0xac) + 0x38))();
      uVar3 = local_8;
    }
    else {
      piVar6 = *(int **)(*in_stack_00000028 + 4);
      local_4c = 0;
      local_48 = 0xf;
      local_5c = local_5c & 0xffffff00;
      FUN_00409350();
      local_8 = 4;
      (**(code **)(*piVar6 + 0x18))();
      local_1c = 0xf;
      local_20 = 0;
      local_30 = local_30 & 0xffffff00;
      local_8 = 6;
      pcVar5 = __itoa((in_stack_00000028[1] - *in_stack_00000028) / 0x18,local_188,10);
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_00409350();
      local_8 = 7;
      FUN_00988f20();
      local_8 = 8;
      FUN_00988f20();
      local_8 = 9;
      FUN_00408ed0();
      FUN_00a5ecc0();
      if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_64 = 0xf;
      local_68 = 0;
      local_78 = local_78 & 0xffffff00;
      if (0xf < local_9c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_9c = 0xf;
      local_a0 = 0;
      local_b0 = local_b0 & 0xffffff00;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_1c = 0xf;
      local_20 = 0;
      local_30 = local_30 & 0xffffff00;
      if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = 2;
      local_80 = 0xf;
      local_84 = 0;
      local_94 = local_94 & 0xffffff00;
      if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      FUN_00408ed0();
      FUN_00a5ecc0();
      (**(code **)(**(int **)(param_1 + 0xa8) + 0x48))();
      (**(code **)(**(int **)(param_1 + 0xac) + 0x38))();
      (**(code **)(**(int **)(param_1 + 0xb0) + 0x38))();
      FUN_00737be0();
      iVar2 = DAT_012587f0;
      iVar8 = 0;
      iVar7 = *(int *)(DAT_012587f0 + 0x10) - *(int *)(DAT_012587f0 + 0xc) >> 2;
      if (0 < iVar7) {
        do {
          piVar6 = (int *)(local_c8 + (uint)local_108[iVar8] * 8);
          local_34 = piVar6[1];
          if ((-1 < local_34) && ((0 < local_34 || (*piVar6 != 0)))) {
            FUN_00737900(in_stack_00000030,param_2,
                         *(undefined4 *)(*(int *)(iVar2 + 0xc) + iVar8 * 4));
            (**(code **)(**(int **)(param_1 + 0xb0) + 0xb4))();
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar7);
      }
      (**(code **)(**(int **)(param_1 + 0xb0) + 0xe4))();
      (**(code **)(**(int **)(param_1 + 0xb0) + 0x34))();
      uVar3 = local_8;
    }
  }
  local_8 = uVar3;
  (**(code **)(*(int *)(param_1 + 0x1c) + 0x24))();
  if (local_c8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}


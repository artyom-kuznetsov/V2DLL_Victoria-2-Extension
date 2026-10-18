// FUN_004dc7a0 @ 004dc7a0 body=[[004dc7a0, 004dc95b] [004dc95f, 004dc97f] [004dc983, 004dc9a9] [004dc9ad, 004dc9ca] [004dc9d0, 004dc9e5] [004dc9e9, 004dca0d]]


undefined1 * FUN_004dc7a0(int param_1,undefined1 *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *******pppppppuVar2;
  int iVar3;
  undefined2 *puStack_10c;
  undefined4 ******ppppppuStack_108;
  uint local_ac;
  uint local_98;
  uint local_90 [4];
  undefined4 local_80;
  uint local_7c;
  uint local_74;
  undefined4 local_64;
  uint local_60;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  undefined1 *local_3c;
  undefined4 ******local_38 [4];
  int local_28;
  uint local_24;
  int local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00ba1f87;
  local_10 = ExceptionList;
  local_8 = 0;
  local_18 = 0;
  ppppppuStack_108 = (undefined4 ******)0x0;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  puStack_10c = (undefined2 *)&DAT_00ded94d;
  *param_2 = 0;
  FUN_00409350();
  local_8 = 0;
  local_18 = 1;
  iVar3 = *(int *)(param_1 + 0x154) - *(int *)(param_1 + 0x150) >> 2;
  if (0 < iVar3) {
    ppppppuStack_108 = (undefined4 ******)0x0;
    puStack_10c = (undefined2 *)0x4dc818;
    local_1c = iVar3;
    FUN_008a8650();
    ppppppuStack_108 = (undefined4 ******)0x4dc831;
    (**(code **)(**(int **)(param_3 + 0x188) + 0x24))();
    param_3 = 0;
    if (0 < iVar3) {
      do {
        local_14 = *(int *)(*(int *)(param_1 + 0x150) + param_3 * 4);
        ppppppuStack_108 = (undefined4 ******)0x4dc886;
        FUN_004dc5c0();
        local_8 = 1;
        if (local_28 != 0) {
          if (*(int *)(param_2 + 0x10) == 0) {
LAB_004dc8af:
            ppppppuStack_108 = (undefined4 ******)0x1;
            puStack_10c = &DAT_00dee2cc;
            FUN_00448740();
          }
          else {
            pppppppuVar2 = (undefined4 *******)local_38[0];
            if (local_24 < 0x10) {
              pppppppuVar2 = local_38;
            }
            if (*(char *)((int)pppppppuVar2 + local_28 + -1) != '\n') goto LAB_004dc8af;
          }
          if (param_4 != 0) {
            ppppppuStack_108 = (undefined4 ******)0xffffffff;
            puStack_10c = (undefined2 *)0x0;
            FUN_00448aa0(param_4);
          }
          ppppppuStack_108 = (undefined4 ******)0x1;
          puStack_10c = (undefined2 *)&DAT_00ded950;
          local_44 = 0xf;
          local_48 = 0;
          local_58[0] = local_58[0] & 0xffffff00;
          FUN_00409350();
          ppppppuStack_108 = (undefined4 ******)0x1;
          local_3c = (undefined1 *)&puStack_10c;
          local_8._0_1_ = 2;
          puStack_10c = *(undefined2 **)(local_14 + 0x24);
          FUN_009c8c30(local_90);
          ppppppuStack_108 = (undefined4 ******)local_58;
          local_8._0_1_ = 3;
          puStack_10c = (undefined2 *)0x4dc928;
          FUN_00988f20();
          ppppppuStack_108 = local_38;
          local_8._0_1_ = 4;
          puStack_10c = (undefined2 *)0x4dc93a;
          uVar1 = FUN_00988f20();
          ppppppuStack_108 = (undefined4 ******)0xffffffff;
          puStack_10c = (undefined2 *)0x0;
          local_8 = CONCAT31(local_8._1_3_,5);
          FUN_00448aa0(uVar1);
          if (0xf < local_60) {
            ppppppuStack_108 = (undefined4 ******)local_74;
                    /* WARNING: Subroutine does not return */
            puStack_10c = (undefined2 *)&UNK_004dc95c;
            FUN_00aae91b();
          }
          local_60 = 0xf;
          local_64 = 0;
          local_74 = local_74 & 0xffffff00;
          if (0xf < local_98) {
            ppppppuStack_108 = (undefined4 ******)local_ac;
                    /* WARNING: Subroutine does not return */
            puStack_10c = (undefined2 *)&UNK_004dc980;
            FUN_00aae91b();
          }
          local_98 = 0xf;
          local_ac = local_ac & 0xffffff00;
          if (0xf < local_7c) {
            ppppppuStack_108 = (undefined4 ******)local_90[0];
                    /* WARNING: Subroutine does not return */
            puStack_10c = (undefined2 *)&UNK_004dc9aa;
            FUN_00aae91b();
          }
          local_7c = 0xf;
          local_80 = 0;
          local_90[0] = local_90[0] & 0xffffff00;
          if (0xf < local_44) {
            ppppppuStack_108 = (undefined4 ******)local_58[0];
                    /* WARNING: Subroutine does not return */
            puStack_10c = (undefined2 *)&UNK_004dc9cb;
            FUN_00aae91b();
          }
        }
        local_8 = local_8 & 0xffffff00;
        if (0xf < local_24) {
          ppppppuStack_108 = local_38[0];
                    /* WARNING: Subroutine does not return */
          puStack_10c = (undefined2 *)&UNK_004dc9e6;
          FUN_00aae91b();
        }
        param_3 = param_3 + 1;
      } while (param_3 < local_1c);
    }
  }
  ExceptionList = local_10;
  return param_2;
}


// FUN_00889080 @ 00889080 body=[[00889080, 008891cb] [008891cf, 00889220] [00889224, 00889238]]


undefined1 * FUN_00889080(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  uint in_stack_00000024;
  undefined4 in_stack_0000002c;
  undefined1 auStack_b8 [16];
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined *puStack_a0;
  undefined1 *puStack_9c;
  undefined1 local_8c [8];
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_74;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined4 local_28;
  undefined1 *local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4ab49;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_18 = 1;
  puStack_9c = (undefined1 *)0x8890d0;
  FUN_008a88d0();
  local_74 = 0;
  local_80 = 0;
  local_7c = 0;
  local_28 = 0x2d2d2d;
  local_84 = 0x2d2d2d;
  local_20 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_2 + 0x10) * 4);
  iVar2 = *(int *)(local_20 + 0x5c);
  local_14 = 0;
  if (0 < (*(int *)(iVar2 + 0xcc) - *(int *)(iVar2 + 200)) / 0x24) {
    param_2 = 0;
    do {
      iVar2 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                      *(int *)(*(int *)(iVar2 + 200) + 4 + param_2) * 4);
      if (*(int *)(iVar2 + 300) != 0) {
        local_7c = *(undefined4 *)(iVar2 + 0x58);
        puStack_9c = local_8c;
        puStack_a0 = (undefined *)0x88916c;
        cVar1 = (**(code **)(*(int *)(local_1c + 0x20) + 0x18))();
        if (cVar1 != '\0') {
          puStack_9c = (undefined1 *)in_stack_0000002c;
          local_24 = auStack_b8;
          uStack_a4 = 0xf;
          uStack_a8 = 0;
          auStack_b8[0] = 0;
          FUN_00408ed0(&param_4,0,0xffffffff);
          uStack_a4 = FUN_0087a6c0(local_44,local_8c,param_3);
          puStack_9c = (undefined1 *)0xffffffff;
          puStack_a0 = (undefined *)0x0;
          local_8._0_1_ = 2;
          uStack_a8 = 0x8891b9;
          FUN_00448aa0();
          local_8 = CONCAT31(local_8._1_3_,1);
          if (0xf < local_30) {
            puStack_9c = (undefined1 *)local_44[0];
                    /* WARNING: Subroutine does not return */
            puStack_a0 = &UNK_008891cc;
            FUN_00aae91b();
          }
          local_30 = 0xf;
          local_34 = 0;
          local_44[0] = local_44[0] & 0xffffff00;
        }
      }
      iVar2 = *(int *)(local_20 + 0x5c);
      param_2 = param_2 + 0x24;
      local_14 = local_14 + 1;
    } while (local_14 < (*(int *)(iVar2 + 0xcc) - *(int *)(iVar2 + 200)) / 0x24);
  }
  if (0xf < in_stack_00000024) {
    puStack_9c = (undefined1 *)param_4;
                    /* WARNING: Subroutine does not return */
    puStack_a0 = &UNK_00889221;
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}


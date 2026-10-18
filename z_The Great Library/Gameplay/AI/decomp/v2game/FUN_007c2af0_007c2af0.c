// FUN_007c2af0 @ 007c2af0 body=[[007c2af0, 007c2b5b] [007c2b5f, 007c2b7c] [007c2b80, 007c2bbb] [007c2bc0, 007c2c89] [007c2c8d, 007c2d25] [007c2d29, 007c2e73] [007c2e77, 007c2ea4]]


void FUN_007c2af0(int param_1,int param_2,char param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *piStack_94;
  uint *puStack_90;
  uint *puStack_8c;
  uint local_7c [4];
  undefined4 local_6c;
  uint local_68;
  uint local_60 [4];
  undefined4 local_50;
  uint local_4c;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined4 *local_28;
  undefined1 *local_20;
  int local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bb88a1;
  local_10 = ExceptionList;
  puStack_8c = (uint *)0x11;
  puStack_90 = (uint *)0xe18f1c;
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffffff00;
  piStack_94 = (int *)0x7c2b2d;
  ExceptionList = &local_10;
  FUN_00409350();
  local_8 = 0;
  puStack_8c = local_44;
  puStack_90 = (uint *)0x7c2b41;
  local_18 = (int *)(**(code **)(**(int **)(param_1 + 0x4c) + 0x7c))();
  local_8 = 0xffffffff;
  if (0xf < local_30) {
    puStack_90 = (uint *)local_44[0];
                    /* WARNING: Subroutine does not return */
    piStack_94 = (int *)&UNK_007c2b5c;
    FUN_00aae91b();
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffffff00;
  puStack_90 = (uint *)0x7c2b71;
  puVar2 = (undefined4 *)(**(code **)(*local_18 + 0x2c))();
  piVar4 = (int *)*puVar2;
joined_r0x007c2b75:
  do {
    if (piVar4 == (int *)0x0) goto LAB_007c2e88;
    local_14 = (int *)piVar4[2];
    iVar3 = *piVar4;
    piVar4 = local_14;
  } while (iVar3 != param_2);
  if (*(char *)(iVar3 + 0x3c) == '\0') {
    iVar3 = *(int *)(iVar3 + 0x28);
    if (iVar3 == 0) {
      iVar3 = 1;
    }
    else if (iVar3 == 1) {
      iVar3 = 2;
    }
    while( true ) {
      if (local_14 == (int *)0x0) goto LAB_007c2e88;
      piVar1 = (int *)*local_14;
      local_14 = (int *)local_14[2];
      piVar4 = local_14;
      if (piVar1[10] != iVar3) break;
      puStack_90 = (uint *)0x0;
      piStack_94 = piVar1;
      (**(code **)(*local_18 + 0x20))();
      (**(code **)(piVar1[7] + 0x30))();
      (**(code **)*piVar1)(1);
    }
    goto joined_r0x007c2b75;
  }
  if (*(int *)(iVar3 + 0x28) != 0) {
    if (*(int *)(iVar3 + 0x28) == 1) {
      local_1c = *(int *)(iVar3 + 0x30);
      puVar2 = *(undefined4 **)(local_1c + 0x48);
      while ((piVar4 = local_14, *(undefined4 **)(local_1c + 0x48) <= puVar2 &&
             (puVar2 < *(undefined4 **)(local_1c + 0x4c)))) {
        piVar1 = (int *)*puVar2;
        local_28 = puVar2 + 1;
        puStack_90 = (uint *)0x1a8;
        piStack_94 = (int *)0x7c2bed;
        local_20 = (undefined1 *)FUN_00aae9af();
        piStack_94 = piVar1;
        if (piVar4 == (int *)0x0) {
          local_8 = 5;
          if (local_20 == (undefined1 *)0x0) {
            piVar4 = (int *)0x0;
          }
          else {
            puStack_90 = (uint *)param_1;
            piVar4 = (int *)FUN_007bdac0(local_20);
          }
          local_8 = 0xffffffff;
          puStack_90 = (uint *)0x0;
          piStack_94 = piVar4;
          (**(code **)(*local_18 + 0x10))();
          puVar2 = local_28;
          if (param_3 != '\0') {
            puStack_90 = (uint *)0xd;
            piStack_94 = (int *)0xe18bd0;
            local_68 = 0xf;
            local_6c = 0;
            local_7c[0] = local_7c[0] & 0xffffff00;
            FUN_00409350();
            local_8 = 6;
            puStack_90 = local_7c;
            piStack_94 = (int *)0x7c2d05;
            piVar4 = (int *)(**(code **)(*(int *)piVar4[8] + 0x34))();
            piStack_94 = (int *)0x2;
            (**(code **)(*piVar4 + 0x48))();
            local_8 = 0xffffffff;
            if (0xf < local_68) {
              puStack_90 = (uint *)local_7c[0];
                    /* WARNING: Subroutine does not return */
              piStack_94 = (int *)&UNK_007c2d26;
              FUN_00aae91b();
            }
            local_68 = 0xf;
            local_6c = 0;
            local_7c[0] = local_7c[0] & 0xffffff00;
            puVar2 = local_28;
          }
        }
        else {
          local_8 = 3;
          if (local_20 == (undefined1 *)0x0) {
            iVar3 = 0;
          }
          else {
            puStack_90 = (uint *)param_1;
            iVar3 = FUN_007bdac0(local_20);
          }
          puStack_90 = (uint *)0x0;
          local_20 = (undefined1 *)&piStack_94;
          local_8 = 0xffffffff;
          piStack_94 = piVar4;
          (**(code **)(*local_18 + 0x1c))(iVar3);
          puVar2 = local_28;
          if (param_3 != '\0') {
            puStack_90 = (uint *)0xd;
            piStack_94 = (int *)0xe18bd0;
            local_4c = 0xf;
            local_50 = 0;
            local_60[0] = local_60[0] & 0xffffff00;
            FUN_00409350();
            local_8 = 4;
            puStack_90 = local_60;
            piStack_94 = (int *)0x7c2c69;
            piVar4 = (int *)(**(code **)(**(int **)(iVar3 + 0x20) + 0x34))();
            piStack_94 = (int *)0x2;
            (**(code **)(*piVar4 + 0x48))();
            local_8 = 0xffffffff;
            if (0xf < local_4c) {
              puStack_90 = (uint *)local_60[0];
                    /* WARNING: Subroutine does not return */
              piStack_94 = (int *)&UNK_007c2c8a;
              FUN_00aae91b();
            }
            local_4c = 0xf;
            local_50 = 0;
            local_60[0] = local_60[0] & 0xffffff00;
            puVar2 = local_28;
          }
        }
      }
    }
    goto joined_r0x007c2b75;
  }
  local_28 = *(undefined4 **)(DAT_012588e8 + 0xb5c);
  puVar2 = *(undefined4 **)
            (*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4) + 0xe44);
  while (puVar2 != (undefined4 *)0x0) {
    piVar4 = (int *)*puVar2;
    puVar2 = (undefined4 *)puVar2[2];
    puStack_90 = (uint *)0x1a8;
    piStack_94 = (int *)0x7c2ddd;
    iVar3 = FUN_00aae9af();
    local_8 = 1;
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      puStack_90 = (uint *)param_1;
      piStack_94 = piVar4;
      iVar3 = FUN_007bd800(iVar3);
    }
    puStack_90 = (uint *)0x0;
    local_8 = 0xffffffff;
    piStack_94 = local_14;
    (**(code **)(*local_18 + 0x1c))(iVar3);
    if (param_3 != '\0') {
      puStack_90 = (uint *)0xd;
      piStack_94 = (int *)0xe18bd0;
      local_4c = 0xf;
      local_50 = 0;
      local_60[0] = local_60[0] & 0xffffff00;
      FUN_00409350();
      local_8 = 2;
      puStack_90 = local_60;
      piStack_94 = (int *)0x7c2e53;
      piVar4 = (int *)(**(code **)(**(int **)(iVar3 + 0x20) + 0x34))();
      piStack_94 = (int *)0x2;
      (**(code **)(*piVar4 + 0x48))();
      local_8 = 0xffffffff;
      if (0xf < local_4c) {
        puStack_90 = (uint *)local_60[0];
                    /* WARNING: Subroutine does not return */
        piStack_94 = (int *)&UNK_007c2e74;
        FUN_00aae91b();
      }
    }
    local_14 = (int *)local_14[2];
  }
LAB_007c2e88:
  puStack_90 = (uint *)0x7c2e92;
  (**(code **)(*local_18 + 0x6c))();
  ExceptionList = local_10;
  return;
}


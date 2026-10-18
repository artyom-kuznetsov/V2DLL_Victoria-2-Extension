// FUN_0057a690 @ 0057a690 body=[[0057a690, 0057a74d] [0057a751, 0057a778] [0057a77c, 0057a89d] [0057a8a1, 0057a8be] [0057a8c2, 0057a990] [0057a994, 0057a9ae] [0057a9b2, 0057a9cf] [0057a9d3, 0057aa2a] [0057aa2e, 0057aa42]]


undefined1 * FUN_0057a690(int param_1,undefined1 *param_2,undefined4 param_3,int param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  uint *puStack_c4;
  uint *puStack_c0;
  uint *puStack_bc;
  undefined4 uStack_b8;
  undefined1 *local_b4;
  uint *puStack_b0;
  uint local_9c [4];
  undefined4 local_8c;
  uint local_88;
  uint local_80 [4];
  undefined4 local_70;
  uint local_6c;
  undefined4 local_64;
  int local_60;
  undefined4 local_58;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined4 *local_1c;
  undefined1 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b8ea3c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8 = 0;
  puStack_b0 = (uint *)0x0;
  local_b4 = &DAT_00ded94d;
  local_58 = 1;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  uStack_b8 = 0x57a6e8;
  FUN_00409350();
  local_8 = 1;
  puStack_b0 = local_38;
  local_18 = (undefined1 *)&local_b4;
  local_b4 = (undefined1 *)0x3e8;
  uStack_b8 = *(undefined4 *)(*(int *)(param_1 + 0x310) + 0x44);
  puStack_bc = local_9c;
  puStack_c0 = (uint *)0x57a72a;
  uVar2 = (**(code **)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_4 * 4) + 0xa48) + 0x24))
                    ();
  puStack_c0 = (uint *)0xffffffff;
  puStack_c4 = (uint *)0x0;
  local_8._0_1_ = 2;
  FUN_00448aa0(uVar2);
  if (0xf < local_88) {
    puStack_c0 = (uint *)local_9c[0];
                    /* WARNING: Subroutine does not return */
    puStack_c4 = (uint *)&UNK_0057a74e;
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_88 = 0xf;
  local_8c = 0;
  local_9c[0] = local_9c[0] & 0xffffff00;
  if (0xf < local_24) {
    puStack_c0 = (uint *)local_38[0];
                    /* WARNING: Subroutine does not return */
    puStack_c4 = (uint *)&UNK_0057a779;
    FUN_00aae91b();
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  iVar3 = (int)((double)((*(int *)(DAT_012588e8 + 0xb0c) + -43800000) / 0x18) / 365.0) -
          *(int *)(param_1 + 0x340);
  if (0 < iVar3) {
    iVar4 = iVar3 * 1000;
    puVar1 = *(uint **)(*(int *)(DAT_012586dc + 0x40) + 0xbc);
    if (puVar1 == (uint *)0x0) {
      iVar3 = -1;
    }
    else if (iVar4 + 0x189373U < 0x39580e) {
      iVar3 = (iVar3 * 1000000) / (int)puVar1;
    }
    else {
      local_60 = iVar4 >> 0x1f;
      local_18 = (undefined1 *)((int)puVar1 >> 0x1f);
      puStack_c0 = (uint *)0x0;
      puStack_c4 = (uint *)0x3e8;
      local_1c = puVar1;
      uVar5 = __allmul(iVar4,local_60);
      puStack_c0 = (uint *)local_18;
      puStack_c4 = local_1c;
      iVar3 = __alldiv(uVar5);
      local_60 = iVar3 >> 0x1f;
    }
    if (1000 < iVar3) {
      iVar3 = 1000;
    }
    puStack_c0 = (uint *)0x0;
    local_18 = (undefined1 *)&puStack_c4;
    puStack_c4 = (uint *)-iVar3;
    puStack_c0 = (uint *)FUN_009c8c30(local_54);
    puStack_c4 = local_80;
    local_8 = 3;
    uVar2 = FUN_0042c180();
    puStack_c0 = (uint *)0xffffffff;
    puStack_c4 = (uint *)0x0;
    local_8._0_1_ = 4;
    FUN_00448aa0(uVar2);
    if (0xf < local_6c) {
      puStack_c0 = (uint *)local_80[0];
                    /* WARNING: Subroutine does not return */
      puStack_c4 = (uint *)&UNK_0057a89e;
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    if (0xf < local_40) {
      puStack_c0 = (uint *)local_54[0];
                    /* WARNING: Subroutine does not return */
      puStack_c4 = (uint *)&UNK_0057a8bf;
      FUN_00aae91b();
    }
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
  }
  iVar3 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_4 * 4);
  if (((*(char *)(iVar3 + 0xcf5) != '\0') || (*(char *)(iVar3 + 0xcf4) != '\0')) &&
     (local_64 = *(undefined4 *)(iVar3 + 0xcf8),
     0 < *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                            *(int *)(iVar3 + 0xcfc) * 4) + 0xbcc) + 0x2b8) +
                 *(int *)(param_1 + 0x2e4) * 4))) {
    puStack_c0 = (uint *)0x1;
    puStack_c4 = (uint *)&DAT_00dee2cc;
    FUN_00448740();
    puStack_c0 = (uint *)0x2;
    puStack_c4 = (uint *)&DAT_00df9638;
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    FUN_00409350();
    local_8 = 5;
    puStack_c0 = (uint *)0x57a95d;
    FUN_004f97a0();
    puStack_c0 = local_38;
    local_8._0_1_ = 6;
    puStack_c4 = (uint *)0x57a96f;
    uVar2 = FUN_00988f20();
    puStack_c0 = (uint *)0xffffffff;
    puStack_c4 = (uint *)0x0;
    local_8._0_1_ = 7;
    FUN_00448aa0(uVar2);
    if (0xf < local_40) {
      puStack_c0 = (uint *)local_54[0];
                    /* WARNING: Subroutine does not return */
      puStack_c4 = (uint *)&UNK_0057a991;
      FUN_00aae91b();
    }
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    if (0xf < local_6c) {
      puStack_c0 = (uint *)local_80[0];
                    /* WARNING: Subroutine does not return */
      puStack_c4 = (uint *)&UNK_0057a9af;
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    if (0xf < local_24) {
      puStack_c0 = (uint *)local_38[0];
                    /* WARNING: Subroutine does not return */
      puStack_c4 = (uint *)&UNK_0057a9d0;
      FUN_00aae91b();
    }
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    puStack_c0 = (uint *)0x0;
    puStack_c4 = (uint *)-*(int *)(*(int *)(DAT_012586dc + 0x40) + 0xc0);
    uVar2 = FUN_009c8c30(local_54);
    puStack_c0 = (uint *)0xffffffff;
    puStack_c4 = (uint *)0x0;
    local_8 = 8;
    FUN_00448aa0(uVar2);
    if (0xf < local_40) {
      puStack_c0 = (uint *)local_54[0];
                    /* WARNING: Subroutine does not return */
      puStack_c4 = (uint *)&UNK_0057aa2b;
      FUN_00aae91b();
    }
  }
  ExceptionList = local_10;
  return param_2;
}


// FUN_00771da0 @ 00771da0 body=[[00771da0, 00771e1c] [00771e20, 00771e88] [00771e91, 00771f42] [00771f46, 00771fd4] [00771fd8, 00771fee] [00771ff2, 00772002] [00772006, 00772016]]


void FUN_00771da0(void)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int in_ECX;
  byte *pbVar5;
  bool bVar6;
  undefined4 local_90 [5];
  uint local_7c;
  uint local_74 [4];
  undefined4 local_64;
  uint local_60;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  int local_20;
  int local_1c;
  uint local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4c312;
  local_10 = ExceptionList;
  local_18 = 0;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("lobby_chat_edit",0xf);
  local_8 = 0;
  iVar2 = (**(code **)(**(int **)(in_ECX + 0x278) + 0x40))(local_3c);
  (**(code **)(*(int *)(iVar2 + 0x54) + 0x4c))(local_90);
  local_8._0_1_ = 2;
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c[0]);
  }
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  pbVar3 = (byte *)FUN_00989330(local_74);
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar3 = *(byte **)pbVar3;
  }
  pbVar5 = &DAT_00ded94d;
  do {
    bVar1 = *pbVar3;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00771e70:
      iVar2 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00771e75;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00771e70;
    pbVar3 = pbVar3 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar2 = 0;
LAB_00771e75:
  local_11 = iVar2 == 0;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_74[0]);
  }
  if (!(bool)local_11) {
    iVar2 = FUN_00aae9af(0x68);
    local_8._0_1_ = 3;
    local_1c = iVar2;
    if (iVar2 == 0) {
      uVar4 = 0;
    }
    else {
      local_44 = 0xf;
      local_48 = 0;
      local_58[0] = local_58[0] & 0xffffff00;
      FUN_00409350(&DAT_00ded94d,0);
      local_8 = CONCAT31(local_8._1_3_,4);
      local_18 = 1;
      local_20 = FUN_00aae9af(0x40);
      local_8 = 5;
      if (local_20 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_009f24c0(local_20,local_90,in_ECX + 0x2d0);
      }
      local_8 = CONCAT31(local_8._1_3_,4);
      uVar4 = FUN_009f4240(iVar2,uVar4,*(undefined4 *)(in_ECX + 0x27c),local_58);
    }
    local_8 = 2;
    if ((local_18 & 1) != 0) {
      if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_58[0]);
      }
      local_44 = 0xf;
      local_48 = 0;
      local_58[0] = local_58[0] & 0xffffff00;
    }
    iVar2 = (**(code **)(**(int **)(in_ECX + 4) + 0x44))();
    (**(code **)(**(int **)(iVar2 + 0x38) + 0x18))(uVar4);
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = local_74[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    local_8._0_1_ = 7;
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
    FUN_00409350("lobby_chat_edit",0xf);
    local_8._0_1_ = 8;
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x278) + 0x40))(local_58);
    (**(code **)(*(int *)(iVar2 + 0x54) + 0x40))(local_74);
    if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_58[0]);
    }
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
    if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_74[0]);
    }
  }
  if (local_7c < 0x10) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_90[0]);
}


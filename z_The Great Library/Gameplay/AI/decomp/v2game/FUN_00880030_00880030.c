// FUN_00880030 @ 00880030 body=[[00880030, 008800db] [008800df, 008801ad] [008801b1, 008802b2] [008802b6, 008802d5] [008802d9, 008802ef]]


void FUN_00880030(void)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  byte ****ppppbVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 ****ppppuVar7;
  int in_ECX;
  byte *pbVar8;
  bool bVar9;
  byte ***local_130 [4];
  undefined4 local_120;
  uint local_11c;
  undefined4 ***local_114 [4];
  undefined4 local_104;
  uint local_100;
  uint local_f8 [4];
  undefined4 local_e8;
  uint local_e4;
  int local_dc;
  undefined **appuStack_60 [19];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b58d5a;
  local_14 = ExceptionList;
  pcVar3 = &stack0x00000008;
  ExceptionList = &local_14;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined1 *)(in_ECX + 0x24) = 0;
  local_11c = 0xf;
  local_120 = 0;
  local_130[0] = (byte ***)((uint)local_130[0] & 0xffffff00);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(&stack0x00000008,(int)pcVar3 - (int)&stack0x00000009);
  ppppbVar4 = (byte ****)local_130[0];
  if (local_11c < 0x10) {
    ppppbVar4 = local_130;
  }
  pbVar8 = &DAT_00dfdc14;
  do {
    bVar2 = *(byte *)ppppbVar4;
    bVar9 = bVar2 < *pbVar8;
    if (bVar2 != *pbVar8) {
LAB_008800c5:
      iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_008800ca;
    }
    if (bVar2 == 0) break;
    bVar2 = *(byte *)((int)ppppbVar4 + 1);
    bVar9 = bVar2 < pbVar8[1];
    if (bVar2 != pbVar8[1]) goto LAB_008800c5;
    ppppbVar4 = (byte ****)((int)ppppbVar4 + 2);
    pbVar8 = pbVar8 + 2;
  } while (bVar2 != 0);
  iVar5 = 0;
LAB_008800ca:
  if (0xf < local_11c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_130[0]);
  }
  if (iVar5 == 0) {
    *(undefined1 *)(in_ECX + 0x24) = 1;
    ExceptionList = local_14;
    return;
  }
  pcVar3 = &stack0x00000008;
  local_11c = 0xf;
  local_120 = 0;
  local_130[0] = (byte ***)((uint)local_130[0] & 0xffffff00);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(&stack0x00000008,(int)pcVar3 - (int)&stack0x00000009);
  local_c = 0;
  if (DAT_0131bd5c == 0) {
    local_dc = FUN_00aae9af(0x1c);
    local_c._0_1_ = 1;
    if (local_dc == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_008b0060();
    }
    local_c = (uint)local_c._1_3_ << 8;
    FUN_00972090(uVar6);
  }
  uVar6 = FUN_009721b0(local_130);
  local_c = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x20) = uVar6;
  if (0xf < local_11c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_130[0]);
  }
  if (*(int *)(in_ECX + 0x20) == 0) {
    local_e4 = 0xf;
    local_e8 = 0;
    local_f8[0] = local_f8[0] & 0xffffff00;
    FUN_00409350("effect.cpp",10);
    local_c = 2;
    pcVar3 = &stack0x00000008;
    local_100 = 0xf;
    local_104 = 0;
    local_114[0] = (undefined4 ***)((uint)local_114[0] & 0xffffff00);
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(&stack0x00000008,(int)pcVar3 - (int)&stack0x00000009);
    local_c._0_1_ = 3;
    uVar6 = FUN_004015b0(local_f8,0x3cf,0x10004);
    local_c._0_1_ = 4;
    FUN_00987d50(uVar6,"unknown government \'",0x14,0);
    ppppuVar7 = (undefined4 ****)local_114[0];
    if (local_100 < 0x10) {
      ppppuVar7 = local_114;
    }
    uVar6 = FUN_00418e30(uVar6,ppppuVar7);
    uVar6 = FUN_00418e30(uVar6,"\' in effect.");
    FUN_00401280(uVar6);
    local_c = CONCAT31(local_c._1_3_,3);
    FUN_00987ac0(appuStack_60);
    appuStack_60[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_60);
    if (0xf < local_100) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_114[0]);
    }
    local_100 = 0xf;
    local_104 = 0;
    local_114[0] = (undefined4 ***)((uint)local_114[0] & 0xffffff00);
    if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_f8[0]);
    }
  }
  ExceptionList = local_14;
  return;
}


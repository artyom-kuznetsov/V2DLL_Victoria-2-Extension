// FUN_008e7f80 @ 008e7f80 body=[[008e7f80, 008e80d3] [008e80d7, 008e80fc] [008e8100, 008e82a5] [008e82a9, 008e82cf] [008e82d3, 008e82e9]]


void FUN_008e7f80(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  byte ****ppppbVar7;
  undefined4 uVar8;
  int in_ECX;
  byte *pbVar9;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 unaff_EDI;
  char *pcVar10;
  int *piVar11;
  bool bVar12;
  byte ***local_134 [4];
  DWORD local_124;
  uint local_120;
  uint local_118 [4];
  undefined4 local_108;
  uint local_104;
  uint auStack_fc [4];
  undefined4 uStack_ec;
  uint uStack_e8;
  int local_e0 [32];
  undefined **appuStack_60 [19];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bab9aa;
  local_14 = ExceptionList;
  if ((param_2 != 0xd9) && (param_2 != 0x1d4)) {
    if (param_2 != 0x344) {
      ExceptionList = &local_14;
      FUN_008b33e0(param_1,param_2);
      ExceptionList = local_14;
      return;
    }
    ExceptionList = &local_14;
    puVar3 = (undefined4 *)FUN_0098fdd0(param_1 + 0x228,local_e0);
    *(undefined4 *)(in_ECX + 0x20) = *puVar3;
    *(undefined4 *)(in_ECX + 0x24) = puVar3[1];
    ExceptionList = local_14;
    return;
  }
  pcVar10 = (char *)(param_1 + 0x22c);
  local_104 = 0xf;
  local_108 = 0;
  local_118[0] = local_118[0] & 0xffffff00;
  pcVar4 = pcVar10;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  ExceptionList = &local_14;
  FUN_00409350(pcVar10,(int)pcVar4 - (param_1 + 0x22d));
  local_c = 0;
  if (DAT_0131bb34 == 0) {
    local_e0[0] = FUN_00aae9af(0x188);
    local_c._0_1_ = 1;
    if (local_e0[0] == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_0041a160();
    }
    local_c = (uint)local_c._1_3_ << 8;
    FUN_00423700(uVar5);
  }
  iVar6 = FUN_005c2ad0(local_118);
  if (iVar6 == 0) {
    iVar6 = FUN_0096bb70();
  }
  local_c = 0xffffffff;
  *(int *)(in_ECX + 0x28) = iVar6;
  if (0xf < local_104) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_118[0]);
  }
  local_104 = 0xf;
  local_120 = 0xf;
  local_108 = 0;
  local_118[0] = local_118[0] & 0xffffff00;
  local_124 = 0;
  local_134[0] = (byte ***)((uint)local_134[0] & 0xffffff00);
  pcVar4 = pcVar10;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  FUN_00409350(pcVar10,(int)pcVar4 - (param_1 + 0x22d));
  local_c = 2;
  ppppbVar7 = (byte ****)local_134[0];
  if (local_120 < 0x10) {
    ppppbVar7 = local_134;
  }
  CharLowerBuffA((LPSTR)ppppbVar7,local_124);
  cVar2 = (**(code **)(**(int **)(in_ECX + 0x28) + 0x18))();
  if (cVar2 == '\0') {
    ppppbVar7 = (byte ****)local_134[0];
    if (local_120 < 0x10) {
      ppppbVar7 = local_134;
    }
    pbVar9 = &DAT_00e22d44;
    do {
      bVar1 = *(byte *)ppppbVar7;
      bVar12 = bVar1 < *pbVar9;
      if (bVar1 != *pbVar9) {
LAB_008e8180:
        iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        goto LAB_008e8185;
      }
      if (bVar1 == 0) break;
      bVar1 = *(byte *)((int)ppppbVar7 + 1);
      bVar12 = bVar1 < pbVar9[1];
      if (bVar1 != pbVar9[1]) goto LAB_008e8180;
      ppppbVar7 = (byte ****)((int)ppppbVar7 + 2);
      pbVar9 = pbVar9 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_008e8185:
    if (iVar6 == 0) {
      *(undefined1 *)(in_ECX + 0x18) = 1;
    }
  }
  if (*(char *)(in_ECX + 0x18) == '\0') {
    cVar2 = (**(code **)(**(int **)(in_ECX + 0x28) + 0x18))();
    if (cVar2 == '\0') {
      uStack_e8 = 0xf;
      uStack_ec = 0;
      auStack_fc[0] = auStack_fc[0] & 0xffffff00;
      FUN_00409350("trigger.cpp",0xb);
      local_c._0_1_ = 3;
      uVar8 = FUN_004015b0(auStack_fc,0x16d1,0x10004);
      local_c._0_1_ = 4;
      iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
      uVar5 = *(undefined4 *)(iVar6 + 8);
      piVar11 = (int *)(iVar6 + 0x14);
      FUN_00987d50(uVar8,"bad unemployment poptype ",0x19,0);
      uVar8 = FUN_00418e30(uVar8,unaff_EDI,extraout_ECX," file ");
      uVar8 = FUN_00418e30(uVar8);
      if (0xf < *(uint *)(iVar6 + 0x28)) {
        piVar11 = (int *)*piVar11;
      }
      uVar8 = FUN_00418e30(uVar8,piVar11);
      uVar5 = FUN_00418e30(uVar8," line ",extraout_ECX_00,uVar5);
      uVar5 = FUN_00455470(uVar5);
      FUN_00401280(uVar5);
      local_c = CONCAT31(local_c._1_3_,3);
      FUN_00987ac0(appuStack_60);
      appuStack_60[0] = std::ios_base::vftable;
      FUN_00aad52d(appuStack_60);
      if (0xf < uStack_e8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_fc[0]);
      }
      uStack_e8 = 0xf;
      uStack_ec = 0;
      auStack_fc[0] = auStack_fc[0] & 0xffffff00;
    }
  }
  if (0xf < local_120) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_134[0]);
  }
  ExceptionList = local_14;
  return;
}


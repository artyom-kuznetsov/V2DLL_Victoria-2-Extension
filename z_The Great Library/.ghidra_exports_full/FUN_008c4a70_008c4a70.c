// FUN_008c4a70 @ 008c4a70 body=[[008c4a70, 008c4b11] [008c4b15, 008c4c9c] [008c4ca0, 008c4d62] [008c4d66, 008c4d85] [008c4d89, 008c4d9f]]


void FUN_008c4a70(void)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  int in_ECX;
  undefined1 *unaff_EBX;
  undefined4 *puVar8;
  int unaff_EDI;
  uint uStack_204;
  uint local_1ec [3];
  undefined4 uStack_1e0;
  undefined4 local_1dc;
  uint local_1d8;
  undefined1 local_1d0 [4];
  uint uStack_1cc;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined1 auStack_1b4 [4];
  uint uStack_1b0;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined **appuStack_130 [48];
  undefined **appuStack_70 [19];
  void *pvStack_24;
  undefined1 uStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b673a2;
  pvStack_14 = ExceptionList;
  pcVar3 = &stack0x00000008;
  local_1d8 = 0xf;
  local_1dc = 0;
  local_1ec[0] = local_1ec[0] & 0xffffff00;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  ExceptionList = &pvStack_14;
  FUN_00409350(&stack0x00000008,(int)pcVar3 - (int)&stack0x00000009);
  local_c = 0;
  piVar4 = (int *)FUN_00975ed0(local_1ec);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)FUN_00974850();
  }
  local_c = 0xffffffff;
  if (0xf < local_1d8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_1ec[0]);
  }
  local_1d8 = 0xf;
  local_1dc = 0;
  local_1ec[0] = local_1ec[0] & 0xffffff00;
  if ((piVar4 == (int *)0x0) || (cVar2 = (**(code **)(*piVar4 + 0x34))(), cVar2 == '\0')) {
    local_1bc = 0xf;
    local_1c0 = 0;
    local_1d0[0] = 0;
    FUN_00409350("trigger.cpp",0xb);
    local_c = 3;
    pcVar3 = &stack0x00000008;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    FUN_00409350(&stack0x00000008,(int)pcVar3 - (int)&stack0x00000009);
    local_c._0_1_ = 4;
    uVar5 = FUN_004015b0(local_1d0,0x710,0x10004);
    local_c = CONCAT31(local_c._1_3_,5);
    FUN_00987d50(uVar5,"unknown issue in trigger \'",0x1a,0);
    puVar7 = unaff_EBX;
    if (uStack_204 < 0x10) {
      puVar7 = &stack0xfffffde8;
    }
    uVar5 = FUN_00418e30(uVar5,puVar7);
    uVar5 = FUN_00418e30(uVar5,&DAT_00dfe3cc);
    FUN_00401280(uVar5);
    uStack_1c = 4;
    FUN_00987ac0(appuStack_70);
    appuStack_70[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_70);
    uStack_1c4 = uStack_1e0;
    uStack_1b0 = uStack_1cc;
    if (0xf < uStack_204) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(unaff_EBX);
    }
  }
  else {
    if (piVar4[0x15] == *(int *)(in_ECX + 0x20)) {
      *(int **)(in_ECX + 0x24) = piVar4;
      ExceptionList = pvStack_14;
      return;
    }
    uStack_1a0 = 0xf;
    uStack_1a4 = 0;
    auStack_1b4[0] = 0;
    FUN_00409350("trigger.cpp",0xb);
    local_c = 1;
    uVar5 = FUN_004015b0(auStack_1b4,0x70a,0x10004);
    local_c = CONCAT31(local_c._1_3_,2);
    iVar1 = *(int *)(in_ECX + 0x20);
    puVar8 = (undefined4 *)(iVar1 + 0x18);
    FUN_00987d50(uVar5,"mismatching issue \'",0x13,0);
    puVar6 = (undefined4 *)(unaff_EDI + 0x34);
    if (0xf < *(uint *)(unaff_EDI + 0x48)) {
      puVar6 = (undefined4 *)*puVar6;
    }
    uVar5 = FUN_00418e30(uVar5,puVar6);
    uVar5 = FUN_00418e30(uVar5,"\' for group ");
    if (0xf < *(uint *)(iVar1 + 0x2c)) {
      puVar8 = (undefined4 *)*puVar8;
    }
    uVar5 = FUN_00418e30(uVar5,puVar8);
    FUN_00401280(uVar5);
    uStack_1c = 1;
    FUN_00987ac0(appuStack_130);
    appuStack_130[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_130);
  }
  if (uStack_1b0 < 0x10) {
    ExceptionList = pvStack_24;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(uStack_1c4);
}


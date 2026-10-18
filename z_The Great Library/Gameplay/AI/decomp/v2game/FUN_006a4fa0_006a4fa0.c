// FUN_006a4fa0 @ 006a4fa0 body=[[006a4fa0, 006a4fcc] [006a4fd0, 006a506c] [006a5070, 006a51a4] [006a51a8, 006a527e] [006a5282, 006a5291] [006a5295, 006a52d7]]


undefined4 FUN_006a4fa0(int param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 unaff_EBX;
  int *piVar9;
  uint uStack_158;
  uint uStack_154;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  uint uStack_144;
  undefined1 auStack_13c [4];
  uint uStack_138;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  int aiStack_120 [26];
  undefined **appuStack_b8 [37];
  void *pvStack_24;
  undefined1 uStack_1c;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  puStack_10 = &LAB_00b59d3f;
  pvStack_14 = ExceptionList;
  bVar3 = true;
  ExceptionList = &pvStack_14;
  while( true ) {
    uStack_c = 0xffffffff;
    piVar6 = (int *)param_2[7];
    if ((char)piVar6[0x44] == '\0') {
      iVar4 = (**(code **)(*piVar6 + 4))();
      piVar6[2] = iVar4;
      if (iVar4 == 0) {
        piVar6[3] = 0x13;
      }
      *(undefined1 *)(piVar6 + 0x44) = 1;
    }
    piVar6 = piVar6 + 3;
    piVar9 = aiStack_120;
    for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar9 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar9 = piVar9 + 1;
    }
    if (aiStack_120[0] == 0x13) {
      (**(code **)*param_2)(1);
      ExceptionList = pvStack_18;
      return 1;
    }
    if (bVar3) {
      iVar4 = 0;
      FUN_009a1440(param_2);
      if (param_2[8] == 0x9a1) {
        iVar4 = FUN_00aaf0c5(param_2 + 0x8b);
      }
      bVar3 = false;
      if (iVar4 < 5) {
        ExceptionList = pvStack_14;
        return 3;
      }
    }
    FUN_009a1440(param_2);
    uStack_144 = 0xf;
    uStack_148 = 0;
    uStack_158 = uStack_158 & 0xffffff00;
    pcVar5 = (char *)(param_2 + 9);
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(param_2 + 9,(int)pcVar5 - ((int)param_2 + 0x25));
    uStack_c = 0;
    piVar6 = (int *)FUN_00aae9af(0x3c);
    uStack_c._0_1_ = 1;
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6[1] = 0x18d;
      *piVar6 = (int)CMessageType::vftable;
      piVar6[2] = 5;
      piVar6[3] = 0x100;
      *(undefined2 *)(piVar6 + 4) = 0;
      *(undefined1 *)((int)piVar6 + 0x12) = 1;
      piVar6[10] = 0xf;
      piVar6[9] = 0;
      *(undefined1 *)(piVar6 + 5) = 0;
      FUN_00408ed0(&uStack_158,0,0xffffffff);
      piVar6[0xc] = 0;
      *(undefined1 *)(piVar6 + 0xd) = 0;
      piVar6[0xe] = 0;
    }
    uStack_c._0_1_ = 0;
    (**(code **)(*piVar6 + 0xc))(param_2);
    if (param_2[3] != 0) break;
    iVar4 = FUN_0090da40(&uStack_158);
    if (iVar4 == 0) {
      FUN_006a5a20(piVar6);
      iVar4 = *(int *)(param_1 + 0x10);
      puVar7 = (undefined4 *)FUN_00aae9af(0x10);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        *puVar7 = piVar6;
        puVar7[1] = iVar4;
        puVar7[2] = 0;
        *(undefined1 *)(puVar7 + 3) = 0;
      }
      iVar2 = *(int *)(param_1 + 0x14);
      *(undefined4 **)(param_1 + 0x10) = puVar7;
      *(int *)(param_1 + 0x14) = iVar2 + 1;
      if (iVar2 == 0) {
        *(undefined4 **)(param_1 + 0xc) = puVar7;
      }
      else {
        *(undefined4 **)(iVar4 + 8) = puVar7;
      }
    }
    else {
      piVar9 = piVar6;
      FUN_0090da40(&uStack_158);
      FUN_006a7da0(piVar9);
      (**(code **)*piVar6)(1);
    }
    uStack_c = 0xffffffff;
    if (0xf < uStack_144) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_158);
    }
    uStack_144 = 0xf;
    uStack_148 = 0;
    uStack_158 = uStack_158 & 0xffffff00;
  }
  uStack_128 = 0xf;
  uStack_12c = 0;
  auStack_13c[0] = 0;
  FUN_00409350("messagehandler.cpp",0x12);
  uStack_c._0_1_ = 2;
  uVar8 = FUN_004015b0(auStack_13c,0x45,0x10004);
  uStack_c = CONCAT31(uStack_c._1_3_,3);
  FUN_00987d50(uVar8,"Failed to read message types",0x1c,0);
  FUN_00401280(uVar8);
  uStack_1c = 2;
  FUN_00987ac0(appuStack_b8);
  appuStack_b8[0] = std::ios_base::vftable;
  FUN_00aad52d(appuStack_b8);
  if (0xf < uStack_138) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_14c);
  }
  if (0xf < uStack_154) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_EBX);
  }
  ExceptionList = pvStack_24;
  return 2;
}


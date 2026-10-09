// FUN_00599910 @ 00599910

/* WARNING: Removing unreachable block (ram,0x00599ae1) */
/* WARNING: Removing unreachable block (ram,0x00599d41) */
/* WARNING: Removing unreachable block (ram,0x00599a4e) */
/* WARNING: Removing unreachable block (ram,0x00599ca9) */

void FUN_00599910(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int in_ECX;
  int *piVar6;
  int *piVar7;
  uint uStack_190;
  int aiStack_120 [67];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b53282;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  *(undefined1 *)(in_ECX + 0x18c) = 1;
  if (0x425 < param_2) {
    if (param_2 != 0x426) {
LAB_00599d6a:
      FUN_00593e00();
      ExceptionList = pvStack_14;
      return;
    }
    FUN_00409350(&DAT_00ded94d,0);
    FUN_005ab780();
    uStack_c = 1;
    FUN_0072d580();
    iVar2 = FUN_00967f50();
    if (iVar2 != 0) {
      uVar4 = FUN_00967f50();
      iVar2 = *(int *)(in_ECX + 0x170);
      puVar5 = (undefined4 *)FUN_00aae9af();
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        *puVar5 = uVar4;
        puVar5[1] = iVar2;
        puVar5[2] = 0;
        *(undefined1 *)(puVar5 + 3) = 0;
      }
      iVar3 = *(int *)(in_ECX + 0x174);
      *(undefined4 **)(in_ECX + 0x170) = puVar5;
      *(int *)(in_ECX + 0x174) = iVar3 + 1;
      if (iVar3 == 0) {
        *(undefined4 **)(in_ECX + 0x16c) = puVar5;
      }
      else {
        *(undefined4 **)(iVar2 + 8) = puVar5;
      }
    }
LAB_00599e2e:
    if (uStack_190 < 0x10) {
      ExceptionList = pvStack_14;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (param_2 == 0x425) {
    while( true ) {
      uStack_c = 0xffffffff;
      piVar6 = *(int **)(param_1 + 0x1c);
      if ((char)piVar6[0x44] == '\0') {
        iVar2 = (**(code **)(*piVar6 + 4))();
        piVar6[2] = iVar2;
        if (iVar2 == 0) {
          piVar6[3] = 0x13;
        }
        *(undefined1 *)(piVar6 + 0x44) = 1;
      }
      piVar6 = piVar6 + 3;
      piVar7 = aiStack_120;
      for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar7 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar7 = piVar7 + 1;
      }
      if ((aiStack_120[0] == 4) || (aiStack_120[0] == 0x13)) break;
      FUN_009a1440();
      iVar3 = FUN_00aaf0c5();
      FUN_00409350();
      uVar1 = DAT_01268fec;
      uStack_c = 4;
      FUN_00408ed0();
      uStack_c = 5;
      FUN_0072d580();
      iVar2 = DAT_01258a94;
      if (uVar1 < 0x1269) {
        iVar2 = DAT_01258a98;
      }
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_009c1d40();
      }
      if (iVar2 != 0) {
        *(int *)(in_ECX + 0xec + iVar3 * 4) = iVar2;
      }
    }
  }
  else {
    if (param_2 == 0x1a6) {
      FUN_00409350(&DAT_00ded94d,0);
      FUN_005ab780();
      uStack_c = 0;
      FUN_0072d580();
      iVar2 = FUN_00967f50();
      if (iVar2 != 0) {
        uVar4 = FUN_00967f50();
        iVar2 = *(int *)(in_ECX + 0x180);
        puVar5 = (undefined4 *)FUN_00aae9af();
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          *puVar5 = uVar4;
          puVar5[1] = iVar2;
          puVar5[2] = 0;
          *(undefined1 *)(puVar5 + 3) = 0;
        }
        iVar3 = *(int *)(in_ECX + 0x184);
        *(undefined4 **)(in_ECX + 0x180) = puVar5;
        *(int *)(in_ECX + 0x184) = iVar3 + 1;
        if (iVar3 == 0) {
          *(undefined4 **)(in_ECX + 0x17c) = puVar5;
        }
        else {
          *(undefined4 **)(iVar2 + 8) = puVar5;
        }
      }
      goto LAB_00599e2e;
    }
    if (param_2 != 0x424) goto LAB_00599d6a;
    while( true ) {
      uStack_c = 0xffffffff;
      piVar6 = *(int **)(param_1 + 0x1c);
      if ((char)piVar6[0x44] == '\0') {
        iVar2 = (**(code **)(*piVar6 + 4))();
        piVar6[2] = iVar2;
        if (iVar2 == 0) {
          piVar6[3] = 0x13;
        }
        *(undefined1 *)(piVar6 + 0x44) = 1;
      }
      piVar6 = piVar6 + 3;
      piVar7 = aiStack_120;
      for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar7 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar7 = piVar7 + 1;
      }
      if ((aiStack_120[0] == 4) || (aiStack_120[0] == 0x13)) break;
      FUN_009a1440();
      iVar3 = FUN_00aaf0c5();
      FUN_00409350();
      uVar1 = DAT_01268fec;
      uStack_c = 2;
      FUN_00408ed0();
      uStack_c = 3;
      FUN_0072d580();
      iVar2 = DAT_01258a94;
      if (uVar1 < 0x1269) {
        iVar2 = DAT_01258a98;
      }
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_009c1d40();
      }
      if (iVar2 != 0) {
        *(int *)(in_ECX + 0x6c + iVar3 * 4) = iVar2;
      }
    }
  }
  (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
  ExceptionList = pvStack_14;
  return;
}



// FUN_0091dd30 @ 0091dd30 body=[[0091dd30, 0091def5] [0091def9, 0091df1b] [0091df1f, 0091df3b] [0091df3f, 0091df5b] [0091df5f, 0091df75]]


void FUN_0091dd30(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 uVar10;
  int in_ECX;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint auStack_88 [4];
  undefined4 uStack_78;
  uint uStack_74;
  uint auStack_6c [4];
  undefined4 uStack_5c;
  uint uStack_58;
  uint auStack_50 [4];
  undefined4 uStack_40;
  uint uStack_3c;
  uint uStack_34;
  undefined4 uStack_24;
  uint uStack_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b4a970;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  iVar6 = FUN_00aae9af(0x24);
  if (iVar6 == 0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = (int *)FUN_005163c0();
  }
  iVar6 = *(int *)(in_ECX + 0xc);
  iVar2 = *(int *)(in_ECX + 0x10);
  iVar3 = *(int *)(in_ECX + 0x14);
  iVar4 = *(int *)(in_ECX + 8);
  piVar7[6] = *(int *)(in_ECX + 0x18);
  piVar7[2] = iVar4;
  piVar7[4] = iVar2;
  piVar7[5] = iVar3;
  pcVar5 = *(code **)(*piVar7 + 0x28);
  piVar7[3] = iVar6;
  (*pcVar5)();
  iVar2 = DAT_012588e8;
  iVar6 = *(int *)(DAT_012588e8 + 0xa88);
  puVar8 = (undefined4 *)FUN_00aae9af(0x10);
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    *puVar8 = piVar7;
    puVar8[1] = iVar6;
    puVar8[2] = 0;
    *(undefined1 *)(puVar8 + 3) = 0;
  }
  iVar3 = *(int *)(iVar2 + 0xa8c);
  *(undefined4 **)(iVar2 + 0xa88) = puVar8;
  *(int *)(iVar2 + 0xa8c) = iVar3 + 1;
  if (iVar3 == 0) {
    *(undefined4 **)(iVar2 + 0xa84) = puVar8;
  }
  else {
    *(undefined4 **)(iVar6 + 8) = puVar8;
  }
  if (*(char *)(DAT_012588e8 + 0xd11) != '\0') {
    uStack_3c = 0xf;
    uStack_40 = 0;
    auStack_50[0] = auStack_50[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    uStack_c = 0;
    uStack_58 = 0xf;
    uStack_5c = 0;
    auStack_6c[0] = auStack_6c[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    uStack_c._0_1_ = 1;
    piVar7 = *(int **)(DAT_012588e8 + 0xb24);
    uStack_8c = *(undefined4 *)(in_ECX + 0x14);
    pcVar9 = (char *)&uStack_90;
    uStack_90 = *(undefined4 *)(in_ECX + 0x10);
    uStack_74 = 0xf;
    uStack_78 = 0;
    auStack_88[0] = auStack_88[0] & 0xffffff00;
    do {
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(&uStack_90,(int)pcVar9 - ((int)&uStack_90 + 1));
    uStack_c._0_1_ = 2;
    uVar10 = FUN_00988fa0(auStack_88);
    uStack_c = CONCAT31(uStack_c._1_3_,3);
    (**(code **)(*piVar7 + 0x120))(uVar10,auStack_6c,auStack_50,0);
    if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_34);
    }
    uStack_20 = 0xf;
    uStack_24 = 0;
    uStack_34 = uStack_34 & 0xffffff00;
    if (0xf < uStack_74) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_88[0]);
    }
    uStack_74 = 0xf;
    uStack_78 = 0;
    auStack_88[0] = auStack_88[0] & 0xffffff00;
    if (0xf < uStack_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_6c[0]);
    }
    uStack_58 = 0xf;
    uStack_5c = 0;
    auStack_6c[0] = auStack_6c[0] & 0xffffff00;
    if (0xf < uStack_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_50[0]);
    }
  }
  ExceptionList = pvStack_14;
  return;
}


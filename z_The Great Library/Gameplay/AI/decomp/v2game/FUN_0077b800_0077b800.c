// FUN_0077b800 @ 0077b800 body=[[0077b800, 0077bb1c] [0077bb20, 0077bd0c] [0077bd10, 0077bda0] [0077bda4, 0077bdd4] [0077bdd8, 0077bdeb]]


/* WARNING: Type propagation algorithm not settling */

void FUN_0077b800(int *param_1)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  byte *******pppppppbVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int in_ECX;
  char *pcVar10;
  uint unaff_EBX;
  int unaff_ESI;
  bool bVar11;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  byte *******apppppppbStack_6c [4];
  undefined4 uStack_5c;
  uint auStack_58 [2];
  uint auStack_50 [4];
  int iStack_40;
  uint uStack_3c;
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  uint uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00bb9a97;
  pvStack_14 = ExceptionList;
  local_80 = 0;
  ExceptionList = &pvStack_14;
  uVar4 = (**(code **)(*param_1 + 0x44))();
  auStack_58[0] = 0xf;
  uStack_5c = 0;
  apppppppbStack_6c[0] = (byte *******)((uint)apppppppbStack_6c[0] & 0xffffff00);
  FUN_00408ed0(uVar4,0,0xffffffff);
  uVar2 = auStack_58[0];
  uStack_c._0_1_ = 0;
  uStack_c._1_3_ = 0;
  pppppppbVar5 = apppppppbStack_6c[0];
  if (auStack_58[0] < 0x10) {
    pppppppbVar5 = (byte *******)apppppppbStack_6c;
  }
  pcVar10 = "tutorial_button_1";
  do {
    bVar1 = *(byte *)pppppppbVar5;
    bVar11 = bVar1 < (byte)*pcVar10;
    if (bVar1 != *pcVar10) {
LAB_0077b892:
      iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_0077b897;
    }
    if (bVar1 == 0) break;
    bVar1 = *(byte *)((int)pppppppbVar5 + 1);
    bVar11 = bVar1 < (byte)pcVar10[1];
    if (bVar1 != pcVar10[1]) goto LAB_0077b892;
    pppppppbVar5 = (byte *******)((int)pppppppbVar5 + 2);
    pcVar10 = pcVar10 + 2;
  } while (bVar1 != 0);
  iVar6 = 0;
LAB_0077b897:
  if (iVar6 == 0) {
    iVar6 = 2;
  }
  else {
    pppppppbVar5 = apppppppbStack_6c[0];
    if (auStack_58[0] < 0x10) {
      pppppppbVar5 = (byte *******)apppppppbStack_6c;
    }
    pcVar10 = "tutorial_button_2";
    do {
      bVar1 = *(byte *)pppppppbVar5;
      bVar11 = bVar1 < (byte)*pcVar10;
      if (bVar1 != *pcVar10) {
LAB_0077b8d7:
        iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto LAB_0077b8dc;
      }
      if (bVar1 == 0) break;
      bVar1 = *(byte *)((int)pppppppbVar5 + 1);
      bVar11 = bVar1 < (byte)pcVar10[1];
      if (bVar1 != pcVar10[1]) goto LAB_0077b8d7;
      pppppppbVar5 = (byte *******)((int)pppppppbVar5 + 2);
      pcVar10 = pcVar10 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_0077b8dc:
    if (iVar6 == 0) {
      iVar6 = 3;
    }
    else {
      pppppppbVar5 = apppppppbStack_6c[0];
      if (auStack_58[0] < 0x10) {
        pppppppbVar5 = (byte *******)apppppppbStack_6c;
      }
      pcVar10 = "tutorial_button_3";
      do {
        bVar1 = *(byte *)pppppppbVar5;
        bVar11 = bVar1 < (byte)*pcVar10;
        if (bVar1 != *pcVar10) {
LAB_0077b920:
          iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
          goto LAB_0077b925;
        }
        if (bVar1 == 0) break;
        bVar1 = *(byte *)((int)pppppppbVar5 + 1);
        bVar11 = bVar1 < (byte)pcVar10[1];
        if (bVar1 != pcVar10[1]) goto LAB_0077b920;
        pppppppbVar5 = (byte *******)((int)pppppppbVar5 + 2);
        pcVar10 = pcVar10 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
LAB_0077b925:
      if (iVar6 == 0) {
        iVar6 = 4;
      }
      else {
        cVar3 = FUN_0040b360();
        if (cVar3 == '\0') {
          cVar3 = FUN_0040b360();
          if (cVar3 == '\0') {
            cVar3 = FUN_0040b360();
            if (cVar3 == '\0') {
              cVar3 = FUN_0040b360();
              if (cVar3 == '\0') {
                cVar3 = FUN_0040b360();
                if (cVar3 == '\0') {
                  cVar3 = FUN_0040b360();
                  if ((cVar3 == '\0') && (cVar3 = FUN_0040b360(), cVar3 == '\0'))
                  goto joined_r0x0077bdbd;
                  iVar6 = 1;
                }
                else {
                  iVar6 = 9;
                }
              }
              else {
                iVar6 = 8;
              }
            }
            else {
              iVar6 = 7;
            }
          }
          else {
            iVar6 = 6;
          }
        }
        else {
          iVar6 = 5;
        }
      }
    }
  }
  if (iVar6 <= *(int *)(*(int *)(in_ECX + 0x90) + 0x30)) {
    iVar7 = FUN_00867ed0();
    iVar9 = DAT_012588e8;
    *(int *)(DAT_012588e8 + 0xd14) = iVar6;
    *(undefined1 *)(iVar9 + 0xd11) = 1;
    *(undefined4 *)(iVar9 + 0xd18) = 0;
    iVar6 = *(int *)(in_ECX + 0x94);
    if (iVar6 == 0) {
      *(undefined4 *)(iVar9 + 0xd18) = 0;
    }
    else if (iVar6 == 1) {
      *(undefined4 *)(iVar9 + 0xd18) = 1;
    }
    else if (iVar6 == 2) {
      *(undefined4 *)(iVar9 + 0xd18) = 2;
    }
    pppppppbVar5 = apppppppbStack_6c[0];
    if (auStack_58[0] < 0x10) {
      pppppppbVar5 = (byte *******)apppppppbStack_6c;
    }
    pcVar10 = "tutorial_button_9";
    do {
      bVar1 = *(byte *)pppppppbVar5;
      bVar11 = bVar1 < (byte)*pcVar10;
      if (bVar1 != *pcVar10) {
LAB_0077ba80:
        iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto LAB_0077ba85;
      }
      if (bVar1 == 0) break;
      bVar1 = *(byte *)((int)pppppppbVar5 + 1);
      bVar11 = bVar1 < (byte)pcVar10[1];
      if (bVar1 != pcVar10[1]) goto LAB_0077ba80;
      pppppppbVar5 = (byte *******)((int)pppppppbVar5 + 2);
      pcVar10 = pcVar10 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_0077ba85:
    iStack_70 = iVar7;
    if ((iVar6 == 0) || (cVar3 = FUN_0040b360(), cVar3 != '\0')) {
      *(undefined4 *)(iVar9 + 0xd18) = 0;
    }
    uVar4 = *(undefined4 *)(iVar7 + 0x80);
    *(undefined4 *)(iVar9 + 0xb5c) = *(undefined4 *)(iVar7 + 0x7c);
    *(undefined4 *)(iVar9 + 0xb60) = uVar4;
    iVar6 = FUN_006a4f40();
    *(undefined1 *)(iVar6 + 0x30) = 0;
    FUN_00867640(iVar7);
    uStack_c._0_1_ = 1;
    if (iStack_40 == 0) {
      iVar6 = (**(code **)(**(int **)(in_ECX + 4) + 0x100))();
      (**(code **)(**(int **)(iVar6 + 0xe4) + 0x10))(1);
      uVar4 = DAT_01259abc;
      iVar6 = *(int *)(DAT_012588e8 + 0xb0c);
      iVar9 = *(int *)(iVar7 + 0x84);
      local_80 = iVar9;
      iStack_7c = iVar6;
      (**(code **)(**(int **)(unaff_EBX + 4) + 0x100))();
      FUN_0063ef30(0,uVar4);
      if (iVar6 != iVar9) {
        FUN_005edf10(&local_80);
        *(int *)(DAT_012588e8 + 0xb0c) = iVar9;
        FUN_00688050();
      }
      iVar6 = (**(code **)(**(int **)(unaff_EBX + 4) + 0x100))();
      (**(code **)(**(int **)(iVar6 + 0xe4) + 0x10))(0);
      iVar7 = iStack_74;
    }
    else {
      uVar4 = FUN_00988fa0(auStack_50);
      uStack_c._0_1_ = 2;
      FUN_00408ed0(uVar4,0,0xffffffff);
      uStack_c._0_1_ = 1;
      if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_34);
      }
      piVar8 = (int *)FUN_009a71d0();
      cVar3 = (**(code **)(*piVar8 + 0x24))(auStack_50);
      if (cVar3 != '\0') {
        iVar6 = (**(code **)(**(int **)(unaff_EBX + 4) + 0x100))();
        (**(code **)(**(int **)(iVar6 + 0xe4) + 0x10))(1);
        piVar8 = (int *)FUN_009a71d0();
        (**(code **)(*piVar8 + 0x30))(auStack_58);
        DAT_01258a66 = 0;
        FUN_0067f1d0(DAT_012588e8,&uStack_5c);
        DAT_01258a66 = 1;
        iVar6 = (**(code **)(**(int **)(unaff_EBX + 4) + 0x100))();
        (**(code **)(**(int **)(iVar6 + 0xe4) + 0x10))(0);
      }
    }
    iVar6 = FUN_00aae9af(0x60);
    puStack_10._0_1_ = 3;
    iStack_74 = iVar6;
    if (iVar6 == 0) {
      uVar4 = 0;
    }
    else {
      uStack_24 = 0xf;
      uStack_28 = 0;
      auStack_38[0] = 0;
      FUN_00409350("Mr Human",8);
      puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,4);
      iVar9 = (**(code **)(**(int **)(unaff_EBX + 4) + 0x44))();
      uVar4 = FUN_0072ba30(iVar6,auStack_38,*(undefined4 *)(iVar9 + 0x6c),1);
    }
    puStack_10 = (undefined1 *)0x5;
    iVar6 = (**(code **)(**(int **)(unaff_EBX + 4) + 0x44))();
    (**(code **)(**(int **)(iVar6 + 0x38) + 0x18))(uVar4);
    pvStack_14 = (void *)0x1;
    if (((unaff_EBX & 1) != 0) && (0xf < uStack_28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_3c);
    }
    iVar6 = FUN_00aae9af(0x50);
    uVar4 = 0;
    pvStack_14._0_1_ = 6;
    iStack_78 = iVar6;
    if (iVar6 != 0) {
      local_80 = 0x2d2d2d;
      iVar9 = (**(code **)(**(int **)(unaff_ESI + 4) + 0x44))();
      uVar4 = FUN_007297a0(iVar6,*(undefined4 *)(iVar7 + 0x7c),*(undefined4 *)(iVar7 + 0x80),
                           local_80,0,*(undefined4 *)(iVar9 + 0x6c));
    }
    pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,1);
    iVar6 = (**(code **)(**(int **)(unaff_ESI + 4) + 0x44))();
    (**(code **)(**(int **)(iVar6 + 0x38) + 0x18))(uVar4);
    *(undefined1 *)(*(int *)(unaff_ESI + 4) + 0x761) = 1;
    if (0xf < uStack_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_50[0]);
    }
    uStack_3c = 0xf;
    iStack_40 = 0;
    auStack_50[0] = auStack_50[0] & 0xffffff00;
    uVar2 = auStack_58[0];
  }
joined_r0x0077bdbd:
  if (uVar2 < 0x10) {
    ExceptionList = pvStack_14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(apppppppbStack_6c[0]);
}


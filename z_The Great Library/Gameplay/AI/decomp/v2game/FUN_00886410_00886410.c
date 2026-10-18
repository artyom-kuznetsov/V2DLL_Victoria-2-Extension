// FUN_00886410 @ 00886410 body=[[00886410, 008866e6] [008866ea, 0088677b] [0088677f, 008867cb] [008867cf, 008867e2]]


void FUN_00886410(int param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  undefined1 uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  int in_ECX;
  int iVar8;
  undefined4 unaff_EBX;
  undefined4 unaff_EDI;
  int iVar9;
  int local_6c;
  int *piStack_68;
  int iStack_64;
  int *local_60;
  int iStack_5c;
  undefined1 auStack_54 [4];
  undefined4 uStack_50;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined1 auStack_38 [12];
  uint uStack_2c;
  uint uStack_28;
  undefined1 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b9ff9a;
  pvStack_14 = ExceptionList;
  iVar9 = *(int *)(DAT_0125870c + 0x2238);
  local_6c = *(int *)(iVar9 + (*(int *)(in_ECX + 0x20) / 1000) * 4);
  if (*(char *)(in_ECX + 0x1c) == '\0') {
    if (*(char *)(in_ECX + 0x1d) == '\0') {
      if (*(char *)(in_ECX + 0x28) != '\0') {
        iVar8 = *(int *)(param_1 + 0x10);
        goto LAB_00886486;
      }
    }
    else {
      local_6c = *(int *)(iVar9 + *(int *)(*(int *)(param_1 + 0x24) + 0x34) * 4);
    }
  }
  else {
    iVar8 = *(int *)(*(int *)(param_1 + 0x24) + 0x10);
LAB_00886486:
    local_6c = *(int *)(iVar9 + iVar8 * 4);
  }
  piVar5 = *(int **)(in_ECX + 0x24);
  ExceptionList = &pvStack_14;
  local_60 = piVar5;
  cVar3 = (**(code **)(*piVar5 + 0x24))();
  if (cVar3 == '\0') {
    ExceptionList = pvStack_14;
    return;
  }
  piStack_68 = *(int **)(param_1 + 8);
  iVar9 = *(int *)(param_1 + 0xc);
  if (*(char *)(in_ECX + 0x28) != '\0') {
    piStack_68 = *(int **)(local_6c + 0x130);
    iVar9 = *(int *)(local_6c + 0x134);
  }
  uVar1 = *(undefined4 *)(*(int *)(DAT_012587e4 + 4) + iVar9 * 4);
  if (*(char *)((int)piVar5 + 0x39) == '\0') {
    if ((char)piVar5[0xe] != '\0') {
      piVar5 = (int *)FUN_00aae9af(0x8c);
      uStack_c = 2;
      piStack_68 = piVar5;
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        FUN_005be1a0(piVar5);
        *piVar5 = (int)CWing::vftable;
      }
      uStack_c = 0xffffffff;
      piVar6 = (int *)FUN_00aae9af(0x1a4);
      uStack_c = 3;
      if (piVar6 == (int *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        piStack_68 = piVar6;
        FUN_005c5e00(piVar6);
        *piVar6 = (int)CAir::vftable;
        piVar6[2] = (int)CAir::vftable;
      }
      goto LAB_0088660f;
    }
    piVar5 = (int *)FUN_00aae9af(0x8c);
    uStack_c = 4;
    piStack_68 = piVar5;
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      FUN_005be1a0(piVar5);
      *piVar5 = (int)CShip::vftable;
    }
    uStack_c = 0xffffffff;
    piStack_68 = (int *)FUN_00aae9af(0x1c0);
    uStack_c = 5;
    if (piStack_68 != (int *)0x0) {
      piVar6 = (int *)FUN_005d75b0();
      goto LAB_0088660f;
    }
  }
  else {
    piVar5 = (int *)FUN_00aae9af(0x8c);
    uStack_c = 0;
    piStack_68 = piVar5;
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      FUN_005be1a0(piVar5);
      *piVar5 = (int)CRegiment::vftable;
    }
    uStack_c = 0xffffffff;
    piStack_68 = (int *)FUN_00aae9af(0x1b8);
    uStack_c = 1;
    if (piStack_68 != (int *)0x0) {
      piVar6 = (int *)FUN_004460d0();
      goto LAB_0088660f;
    }
  }
  piVar6 = (int *)0x0;
LAB_0088660f:
  uStack_c = 0xffffffff;
  iStack_64 = DAT_00f096cc;
  piStack_68 = (int *)0x28;
  DAT_00f096cc = DAT_00f096cc + 1;
  (**(code **)(*piVar5 + 0x18))(&piStack_68);
  local_6c = 0;
  FUN_004fa8b0(uVar1,auStack_54,iStack_64,unaff_EBX,0,0,&local_6c);
  puStack_10 = (undefined1 *)0x8;
  cVar3 = (**(code **)(*piVar5 + 0x28))();
  if (cVar3 != '\0') {
    iStack_5c = piVar5[0x18];
    FUN_004f9be0(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + piVar5[0x19] * 4),auStack_54);
  }
  FUN_00408ed0(auStack_54,0,0xffffffff);
  pcVar2 = *(code **)(*piVar5 + 0x20);
  *(undefined2 *)(piVar5 + 0x22) = (undefined2)local_6c;
  uVar7 = (*pcVar2)(auStack_38);
  pvStack_14._0_1_ = 9;
  FUN_004f9be0(uVar1,uVar7);
  pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,8);
  if (0xf < uStack_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_3c);
  }
  FUN_005c03c0(piStack_68);
  iStack_64 = DAT_00f096cc;
  piStack_68 = (int *)0x28;
  DAT_00f096cc = DAT_00f096cc + 1;
  (**(code **)(piVar6[2] + 0x18))(&piStack_68);
  FUN_00513c80();
  FUN_005cb2c0(unaff_EDI);
  FUN_005cb1d0(piVar5);
  iVar9 = piVar6[0x37];
  uVar4 = (**(code **)(*piVar6 + 0x3c))(iVar9);
  uVar7 = FUN_004f9d10(uVar1,&uStack_40,uVar4,iVar9);
  uStack_18 = 10;
  FUN_005cdc70(uVar7);
  uStack_18 = 8;
  if (0xf < uStack_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_40);
  }
  uVar7 = (**(code **)(*piVar6 + 0x20))();
  FUN_004f9be0(uVar1,uVar7);
  *(undefined1 *)(piVar6 + 0x2f) = 1;
  FUN_005cae80(piVar6);
  FUN_005cb2c0(local_6c);
  FUN_005b57a0(DAT_012588e8 + 0xab4);
  if (uStack_3c < 0x10) {
    ExceptionList = pvStack_14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(uStack_50);
}


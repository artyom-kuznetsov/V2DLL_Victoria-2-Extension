// FUN_006e45f0 @ 006e45f0 body=[[006e45f0, 006e4757] [006e4760, 006e48cd]]


void FUN_006e45f0(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  char cVar9;
  char cVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int in_ECX;
  int iVar14;
  undefined4 uVar15;
  bool bVar16;
  int iStack_50;
  undefined1 auStack_2c [4];
  uint local_28;
  int local_24;
  uint local_20;
  int iStack_1c;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  iVar4 = DAT_012588e8;
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b50a36;
  pvStack_14 = ExceptionList;
  piVar1 = *(int **)(DAT_012588e8 + 0xb24);
  iVar11 = *(int *)(*(int *)(in_ECX + 4) + 0x1c);
  local_20 = *(uint *)(DAT_012588e8 + 0xb5c);
  iVar13 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar11 + 0x5c) * 4);
  iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
  local_28 = *(uint *)(iVar2 + 0xe78);
  local_24 = *(int *)(iVar2 + 0xe7c);
  ExceptionList = &pvStack_14;
  cVar9 = (**(code **)(*(int *)piVar1[7] + 0x30))();
  if ((cVar9 == '\0') && (cVar10 = (**(code **)(*(int *)piVar1[7] + 0x28))(), cVar10 != '\0')) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
    if (cVar9 == '\0') {
      iVar11 = FUN_00aae9af(0x58);
      uStack_c = 1;
      if (iVar11 == 0) {
        uVar15 = 0;
      }
      else {
        uVar15 = FUN_0048c050();
        uVar15 = FUN_0057c130(iVar11,*(undefined4 *)(iVar4 + 0xb5c),*(undefined4 *)(iVar4 + 0xb60),
                              uVar15);
      }
      uStack_c = 0xffffffff;
      iVar11 = (**(code **)(*piVar1 + 0x44))();
      (**(code **)(**(int **)(iVar11 + 0x38) + 0x18))(uVar15);
      ExceptionList = pvStack_18;
      return;
    }
  }
  piVar12 = *(int **)(iVar13 + 0xe44);
  do {
    if (piVar12 == (int *)0x0) {
      ExceptionList = pvStack_14;
      return;
    }
    piVar3 = (int *)piVar12[2];
    iStack_50 = 0;
    iVar13 = *(int *)(*piVar12 + 0x60);
    while (piVar12 = piVar3, iVar13 != 0) {
      iVar4 = *(int *)(iVar13 + 0x224);
      if (((bVar5) ||
          ((cVar9 != '\0' && (*(int *)(iVar13 + 0x18) == *(int *)(*(int *)(in_ECX + 4) + 0x18)))))
         && (cVar10 = FUN_0052d150(), cVar10 != '\0')) {
        iVar14 = 0;
        iVar8 = *(int *)(iVar11 + 0x60);
        do {
          iVar6 = iVar8;
          if (iVar6 == 0) goto LAB_006e47d6;
          iVar8 = *(int *)(iVar6 + 0x224);
        } while (*(int *)(iVar6 + 0x18) != *(int *)(iVar13 + 0x18));
        iVar14 = *(int *)(iVar6 + 0x20);
LAB_006e47d6:
        FUN_004da850(*(int *)(iVar13 + 0x18),&local_20,iVar2,0,iVar2 + 0x1184,iVar14 + 1);
        iVar13 = iStack_1c;
        uVar7 = local_20;
        if ((((local_20 != 0 || iStack_1c != 0) && (iStack_1c <= local_24)) &&
            ((iStack_1c < local_24 || (local_20 <= local_28)))) &&
           ((iVar14 = *(int *)(*(int *)(DAT_012586dc + 0x10) + 0x54), iVar14 < 1 ||
            (piVar12 = (int *)FUN_004f3820(auStack_2c), iVar14 <= *piVar12)))) {
          bVar16 = local_28 < uVar7;
          local_28 = local_28 - uVar7;
          local_24 = (local_24 - iVar13) - (uint)bVar16;
          iVar13 = FUN_00aae9af(0x58);
          uVar15 = 0;
          uStack_c = 0;
          if (iVar13 != 0) {
            uVar15 = FUN_0057c130(iVar13,*(undefined4 *)(iVar2 + 0x1c),*(undefined4 *)(iVar2 + 0x20)
                                  ,iStack_50);
          }
          uStack_c = 0xffffffff;
          iVar13 = (**(code **)(*piVar1 + 0x44))();
          (**(code **)(**(int **)(iVar13 + 0x38) + 0x18))(uVar15);
        }
      }
      iStack_50 = iStack_50 + 1;
      iVar13 = iVar4;
    }
  } while( true );
}


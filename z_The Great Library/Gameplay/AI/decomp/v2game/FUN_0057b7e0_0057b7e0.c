// FUN_0057b7e0 @ 0057b7e0 body=[[0057b7e0, 0057bacd] [0057bad1, 0057bc3b]]


void FUN_0057b7e0(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int in_ECX;
  int unaff_EBX;
  int iVar7;
  longlong lVar8;
  int local_84;
  undefined4 local_80;
  undefined4 *local_7c;
  undefined4 local_78;
  undefined **ppuStack_74;
  undefined4 local_70;
  undefined1 local_6c [64];
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00ba6a06;
  local_14 = ExceptionList;
  local_84 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(in_ECX + 0x40) * 4);
  local_78 = *(undefined4 *)(in_ECX + 0x4c);
  iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x50) * 4);
  if (*(char *)(in_ECX + 0x54) == '\0') {
    ExceptionList = &local_14;
    FUN_00511670(iVar5,*(undefined4 *)(in_ECX + 0x3c),local_84);
  }
  else {
    ExceptionList = &local_14;
    FUN_004a4cb0(*(int *)(local_84 + 0x188) + 0x1c8);
  }
  piVar3 = (int *)FUN_00aae9af(0x60);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    *piVar3 = (int)&PTR_FUN_00e3a544;
    piVar3[1] = 0x18d;
    piVar3[2] = DAT_01268fec;
    piVar3[3] = DAT_01268ff0;
    *(undefined1 *)(piVar3 + 4) = 0;
    piVar3[10] = 0xf;
    piVar3[9] = 0;
    *(undefined1 *)(piVar3 + 5) = 0;
    piVar3[0xc] = (int)CSelectable::vftable;
    *(undefined1 *)(piVar3 + 0xd) = 0;
    *piVar3 = (int)CConstruction::vftable;
    piVar3[0xc] = (int)CConstruction::vftable;
    piVar3[0xe] = 43800000;
    piVar3[0xe] = DAT_01259abc;
    piVar3[0xf] = 43800000;
    piVar3[0xf] = DAT_01259abc;
    piVar3[0x11] = 0;
    local_78 = 0x2d2d2d;
    piVar3[0x12] = 0;
    piVar3[0x13] = 0x2d2d2d;
    piVar3[0x14] = 0;
    piVar3[0x15] = 0;
    *piVar3 = (int)CBuildingConstruction::vftable;
    piVar3[0xc] = (int)CBuildingConstruction::vftable;
    piVar3[0x16] = 0;
    piVar3[0x17] = 0;
  }
  (**(code **)(*piVar3 + 0x18))(in_ECX + 0x44);
  iVar7 = in_ECX;
  if (*(char *)(in_ECX + 0x54) == '\0') {
    local_70 = 0x18d;
    ppuStack_74 = CGoodsPool::vftable;
    iStack_2c = 0;
    local_28 = 0;
    local_24 = 0;
    puStack_10 = (undefined1 *)0x0;
    _memset(local_6c,0,0x40);
    FUN_00423920();
    puStack_10 = (undefined1 *)0x1;
    iVar7 = *(int *)(in_ECX + 0x3c);
    FUN_0047dbb0(&ppuStack_74,iVar7 + 0x60);
    iVar7 = *(int *)(iVar7 + 300);
    lVar8 = 0x8000;
    if ((((iVar7 != 0) && (lVar8 = 0x8000, DAT_01258734 != 0)) &&
        (lVar8 = 0x8000, iVar7 != DAT_01258734 + 0x10)) && (lVar8 = 0x8000, iVar7 != 0)) {
      uVar1 = *(uint *)(*(int *)(unaff_EBX + 0xbcc) + 0x18);
      lVar8 = __alldiv(uVar1 << 0x1e,
                       (((int)uVar1 >> 0x1f) << 0xf | uVar1 >> 0x11) << 0xf | (uVar1 & 0x1ffff) >> 2
                       ,0x1f40000,0);
      lVar8 = lVar8 + 0x8000;
    }
    lVar8 = __allmul(lVar8,0x10000 - *(uint *)(unaff_EBX + 0xe70),
                     -(uint)(0x10000 < *(uint *)(unaff_EBX + 0xe70)) - *(int *)(unaff_EBX + 0xe74));
    FUN_0047de60(&ppuStack_74,lVar8 >> 0xf);
    FUN_0047e3e0(&ppuStack_74,*(int *)(DAT_012588e8 + 0xbcc) + 0x280);
    puVar4 = (undefined4 *)FUN_00aae9af(0xc0);
    puStack_10._0_1_ = 2;
    local_7c = puVar4;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4[1] = 0x18d;
      *puVar4 = CGoodsProject::vftable;
      FUN_0047db00(puVar4 + 2,&ppuStack_74);
      puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,3);
      FUN_0047db00(puVar4 + 0x18,&ppuStack_74);
      puVar4[0x2e] = local_84;
      puVar4[0x2f] = local_80;
    }
    puStack_10 = (undefined1 *)0xffffffff;
    piVar3[0x15] = (int)puVar4;
    iVar7 = iVar5;
    if (iStack_2c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iStack_2c);
    }
  }
  iVar2 = DAT_012588e8;
  piVar3[0x13] = *(int *)(unaff_EBX + 0x1c);
  piVar3[0x14] = *(int *)(unaff_EBX + 0x20);
  iVar7 = *(int *)(iVar7 + 0x3c);
  piVar3[0x16] = iVar7;
  local_84 = *(int *)(iVar2 + 0xb0c);
  local_7c = (undefined4 *)(local_84 + *(int *)(iVar7 + 0xb8) * 0x18);
  FUN_004911a0(&local_84);
  FUN_004b5f60();
  FUN_00515490(unaff_EBX);
  if (*(int *)(iVar5 + 0x40) != 0) {
    piVar3[0x12] = in_ECX;
    (**(code **)(*piVar3 + 0x20))();
    *(undefined1 *)(DAT_012588dc + 0x3a28) = 1;
  }
  if (*(int *)(DAT_012588e8 + 0xb60) == *(int *)(iVar5 + 0x50)) {
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xf0))();
    iVar5 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x124))();
    if ((iVar5 != 0) &&
       (iVar5 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x124))(),
       *(char *)(*(int *)(iVar5 + 0x20) + 0x67) != '\0')) {
      uVar6 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x124))();
      FUN_00740050(uVar6);
    }
    piVar3 = *(int **)(DAT_012588e8 + 0xb24);
    iVar5 = (**(code **)(*piVar3 + 0x13c))();
    if ((iVar5 == 4) || (iVar5 = (**(code **)(*piVar3 + 0x13c))(), iVar5 == 0x15)) {
      (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xdc))();
    }
    (**(code **)(*piVar3 + 0xe0))(0);
    FUN_00679970();
  }
  ExceptionList = pvStack_18;
  return;
}


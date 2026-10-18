// FUN_00a67de0 @ 00a67de0 body=[[00a67de0, 00a67f2f] [00a67f35, 00a67f38]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a67de0(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  DWORD DVar6;
  int in_ECX;
  uint uVar7;
  size_t _Size;
  undefined **appuStack_1b0 [48];
  undefined **local_f0 [18];
  uint local_a8 [4];
  undefined4 local_98;
  uint local_94;
  uint auStack_8c [4];
  undefined4 uStack_7c;
  uint uStack_78;
  void *pvStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint uStack_50;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined **ppuStack_34;
  undefined4 uStack_30;
  undefined4 *puStack_2c;
  undefined1 uStack_28;
  char cStack_27;
  void *pvStack_24;
  void *local_20;
  int local_1c;
  int *piStack_18;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5cc07;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xfffffdcc;
  piVar5 = *(int **)(in_ECX + 0x100);
  if ((piVar5[0x20] == piVar5[0x20]) && (piVar5[0x20] == piVar5[0x42] + *piVar5)) {
    ExceptionList = &pvStack_10;
    FUN_00a67f40();
    return;
  }
  local_94 = 0xf;
  local_98 = 0;
  local_a8[0] = local_a8[0] & 0xffffff00;
  ExceptionList = &pvStack_10;
  local_1c = in_ECX;
  local_14 = &stack0xfffffdcc;
  FUN_00409350("server.cpp",10);
  local_8 = 0;
  FUN_004015b0(local_a8,0x87b,0x301);
  local_8._0_1_ = 1;
  piVar5 = *(int **)(in_ECX + 0x100);
  local_20 = (void *)*piVar5;
  uVar7 = (piVar5[0x20] - piVar5[0x42]) - (int)local_20;
  uVar2 = FUN_00987d20(((int)uVar7 < 0) - 1 & uVar7," commands"," on tick ",
                       *(undefined4 *)(*(int *)(in_ECX + 0x1c) + 0x54));
  uVar2 = FUN_00447240(uVar2);
  uVar2 = FUN_00418e30(uVar2);
  uVar2 = FUN_00418e30(uVar2);
  uVar2 = FUN_00455470(uVar2);
  FUN_00401280(uVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00987ac0(local_f0);
  local_f0[0] = std::ios_base::vftable;
  FUN_00aad52d(local_f0);
  local_8 = 0xffffffff;
  if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a8[0]);
  }
  do {
    piVar5 = *(int **)(in_ECX + 0x100);
    if ((piVar5[0x20] == piVar5[0x20]) && (piVar5[0x20] == piVar5[0x42] + *piVar5)) {
      ExceptionList = pvStack_10;
      return;
    }
    piStack_18 = (int *)0x0;
    cVar1 = FUN_00a6ab10(in_ECX + 0xfc,&piStack_18);
    piVar5 = piStack_18;
  } while (cVar1 == '\0');
  iVar3 = *(int *)(*(int *)(in_ECX + 0x1c) + 0x54);
  if (0x7fff < iVar3) {
    iVar3 = 0;
  }
  *(short *)(piStack_18 + 0xd) = (short)iVar3;
  *(undefined4 *)(in_ECX + 0xec) = *(undefined4 *)(*(int *)(in_ECX + 0x1c) + 0x54);
  *(undefined1 *)(in_ECX + 0xf0) = 1;
  pvStack_70 = (void *)0x0;
  iStack_6c = 0;
  uStack_68 = 0;
  iStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_3c = 0xf;
  uStack_40 = 0;
  uStack_50 = uStack_50 & 0xffffff00;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  pvStack_24 = (void *)FUN_00aae9af(0x3c);
  local_8._0_1_ = 4;
  if (pvStack_24 == (void *)0x0) {
    puStack_2c = (undefined4 *)0x0;
  }
  else {
    puStack_2c = (undefined4 *)FUN_009d5450(pvStack_24,&pvStack_70,1,0,0);
  }
  ppuStack_34 = &PTR_FUN_00e38528;
  uStack_30 = 0;
  cStack_27 = '\x01';
  uStack_28 = *(char *)((int)puStack_2c + 0x13) != '\0';
  local_8._0_1_ = 5;
  (**(code **)(*piVar5 + 0x1c))();
  FUN_009a0940(&ppuStack_34);
  (**(code **)(*piVar5 + 4))(&ppuStack_34);
  _Size = iStack_6c - (int)pvStack_70;
  pvStack_24 = pvStack_70;
  puVar4 = (undefined4 *)(*(code *)PTR__malloc_00f071f8)(0x10);
  if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _abort();
  }
  local_20 = (void *)(*(code *)PTR__malloc_00f071f8)(_Size);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _abort();
  }
  puVar4[2] = local_20;
  if (pvStack_24 != (void *)0x0) {
    FID_conflict__memcpy(local_20,pvStack_24,_Size);
  }
  *puVar4 = 0;
  puVar4[1] = 1;
  puVar4[3] = _Size;
  iVar3 = FUN_00a89f70(*(undefined4 *)(*(int *)(local_1c + 0x18) + 0x20),0);
  if (iVar3 == -1) {
    uStack_78 = 0xf;
    uStack_7c = 0;
    auStack_8c[0] = auStack_8c[0] & 0xffffff00;
    FUN_00409350("server.cpp",10);
    local_8._0_1_ = 6;
    FUN_004015b0(auStack_8c,0x894,0x301);
    local_8 = CONCAT31(local_8._1_3_,7);
    piVar5 = (int *)FUN_00987d20();
    FUN_00408be0(piVar5);
    uVar7 = 0;
    if ((*(byte *)(*(int *)(*piVar5 + 4) + 0xc + (int)piVar5) & 6) == 0) {
      iVar3 = (**(code **)(**(int **)(*(int *)(*piVar5 + 4) + 0x38 + (int)piVar5) + 0x34))();
      if (iVar3 == -1) {
        uVar7 = 4;
      }
    }
    if (uVar7 != 0) {
      uVar7 = *(uint *)((int)piVar5 + *(int *)(*piVar5 + 4) + 0xc) | uVar7;
      if (*(int *)((int)piVar5 + *(int *)(*piVar5 + 4) + 0x38) == 0) {
        uVar7 = uVar7 | 4;
      }
      FUN_00401120(uVar7,0);
    }
    local_8._0_1_ = 6;
    FUN_00987ac0(appuStack_1b0);
    appuStack_1b0[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_1b0);
    local_8._0_1_ = 5;
    if (0xf < uStack_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_8c[0]);
    }
    uStack_78 = 0xf;
    uStack_7c = 0;
    auStack_8c[0] = auStack_8c[0] & 0xffffff00;
  }
  DVar6 = timeGetTime();
  DAT_012586d0 = DVar6 - _DAT_01258b70;
  FUN_00a899f0(0,0);
  (**(code **)*piStack_18)(1);
  local_8 = CONCAT31(local_8._1_3_,3);
  ppuStack_34 = &PTR_FUN_00e38528;
  if ((puStack_2c != (undefined4 *)0x0) && (cStack_27 != '\0')) {
    (**(code **)*puStack_2c)(1);
    FUN_00a68201();
    return;
  }
  local_8 = 0xffffffff;
  if (0xf < uStack_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_50);
  }
  uStack_3c = 0xf;
  uStack_40 = 0;
  uStack_50 = uStack_50 & 0xffffff00;
  if (iStack_60 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iStack_60);
  }
  iStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  if (pvStack_70 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(pvStack_70);
  }
  pvStack_70 = (void *)0x0;
  iStack_6c = 0;
  uStack_68 = 0;
  FUN_00a67f40();
  return;
}


// FUN_00857530 @ 00857530  (requested 00857614, first bytes: 55 8B EC 83 E4 F8 6A FF)


int FUN_00857530(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  void **ppvVar10;
  char cVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  int local_3c;
  int local_38;
  int local_28;
  int iStack_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b58d70;
  local_14 = ExceptionList;
  uVar1 = *(uint *)(*(int *)(param_2 + 300) + 0x128);
  iVar2 = *(int *)(*(int *)(*(int *)(param_2 + 300) + 0xf0) + 0x28);
  piVar12 = *(int **)(param_3 + 0xe44);
  local_3c = 0;
  local_38 = -10000;
  ppvVar10 = &local_14;
  if (piVar12 == (int *)0x0) {
    return 0;
  }
  do {
    ExceptionList = ppvVar10;
    iVar3 = *piVar12;
    piVar12 = (int *)piVar12[2];
    bVar9 = false;
    if (*(int *)(iVar3 + 200) != 0) {
      if ((*(char *)(param_1 + 0x6c) == '\0') || (cVar11 = FUN_004d04b0(), cVar11 == '\0')) {
        iVar6 = *(int *)(iVar3 + 0x60);
        do {
          iVar15 = iVar6;
          if (iVar15 == 0) goto LAB_00857783;
          iVar6 = *(int *)(iVar15 + 0x224);
        } while (*(int *)(iVar15 + 0x18) != param_2);
        if (((*(char *)(param_1 + 0x6d) == '\0') ||
            (*(int *)(*(int *)(iVar15 + 0x18) + 0xc4) <= *(int *)(iVar15 + 0x20))) ||
           (*(int *)(iVar15 + 0x17c) != 0)) goto LAB_00857783;
        bVar9 = true;
      }
      uVar4 = *(uint *)(iVar3 + 200);
      uVar13 = uVar4 / uVar1;
      if (uVar4 == 0) {
        iStack_24 = 0;
        local_28 = 0;
      }
      else {
        uVar16 = __alldiv(*(uint *)(iVar3 + 0xd8) << 0x1e,*(uint *)(iVar3 + 0xd8) >> 2,uVar4 << 0xf,
                          uVar4 >> 0x11);
        local_28 = 0x8000 - (uint)uVar16;
        iStack_24 = -(uint)(0x8000 < (uint)uVar16) - (int)((ulonglong)uVar16 >> 0x20);
      }
      uVar16 = __allmul(local_28,iStack_24,uVar13 << 0xf,uVar13 >> 0x11);
      piVar5 = *(int **)(iVar3 + 0x26c);
      iVar6 = *piVar5;
      iVar15 = piVar5[1];
      iVar7 = piVar5[2];
      iVar8 = piVar5[3];
      FUN_00401000(0x47c35040);
      iVar14 = FUN_00b31c00();
      iVar15 = __alldiv((longlong)iVar14 * (longlong)(iVar6 + iVar15 + iVar7 + iVar8),1000,0);
      iVar6 = *(int *)(iVar3 + 0x60);
      iVar15 = ((uint)uVar16 >> 0x1e | (int)((ulonglong)uVar16 >> 0x20) << 2) + iVar15 / 1000;
      do {
        if (iVar6 == 0) goto LAB_0085771e;
        piVar5 = (int *)(iVar6 + 0x17c);
        iVar6 = *(int *)(iVar6 + 0x224);
      } while (*piVar5 == 0);
      iVar15 = iVar15 / 2;
LAB_0085771e:
      if (bVar9) {
        iVar15 = iVar15 * 2;
      }
      uVar4 = *(uint *)(*(int *)(iVar3 + 0x118) + iVar2 * 4);
      uVar13 = *(uint *)(iVar3 + 200);
      uVar16 = __alldiv(uVar4 << 0x1e,uVar4 >> 2,uVar13 << 0xf,
                        ((int)uVar13 >> 0x1f) << 0xf | uVar13 >> 0x11);
      uVar16 = __allmul(uVar16,0x640000,0);
      iVar15 = iVar15 + ((uint)uVar16 >> 0x1e | (int)((ulonglong)uVar16 >> 0x20) << 2);
      if ((local_3c == 0) || (local_38 < iVar15)) {
        local_3c = iVar3;
        local_38 = iVar15;
      }
    }
LAB_00857783:
    ppvVar10 = ExceptionList;
    if (piVar12 == (int *)0x0) {
      ExceptionList = local_14;
      return local_3c;
    }
  } while( true );
}


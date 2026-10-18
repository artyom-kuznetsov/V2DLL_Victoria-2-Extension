// FUN_0082e190 @ 0082e190  (requested 0082E190, first bytes: 55 8B EC 64 A1 00 00 00)


/* WARNING: Removing unreachable block (ram,0x0082e4ba) */
/* WARNING: Removing unreachable block (ram,0x0082e4aa) */

int FUN_0082e190(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  int iVar9;
  char cVar10;
  int iVar11;
  float fVar12;
  undefined4 uVar13;
  int local_20;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4ad90;
  local_10 = ExceptionList;
  iVar11 = *(int *)(param_2 + 0x98);
  if (iVar11 != 0) {
    if (iVar11 <= param_3) {
      ExceptionList = &local_10;
      (**(code **)(*param_1 + 0x1a8))();
      ExceptionList = local_10;
      return iVar11;
    }
    if ((*(int *)(param_2 + 0x74) == 0) && (*(char *)(param_2 + 0x104) == '\0')) {
      iVar11 = 0;
      local_18 = 0;
      local_8 = 1;
      local_20 = 4;
      ExceptionList = &local_10;
      do {
        FUN_004e9b90();
        FUN_004e9b90();
        local_20 = local_20 + -1;
      } while (local_20 != 0);
      piVar2 = *(int **)(param_2 + 0x90);
      while (piVar2 != (int *)0x0) {
        iVar3 = *piVar2;
        piVar2 = (int *)piVar2[2];
        piVar1 = (int *)(*(int *)(*(int *)(iVar3 + 0x38) + 0x34) * 4);
        *piVar1 = *piVar1 + 1;
        iVar11 = iVar11 + 1;
      }
      piVar2 = (int *)param_1[0x2b];
      while (piVar2 != (int *)0x0) {
        piVar1 = (int *)piVar2[2];
        piVar4 = (int *)*piVar2;
        cVar10 = (**(code **)(*piVar4 + 0x38))();
        piVar2 = piVar1;
        if (cVar10 != '\0') {
          piVar1 = (int *)piVar4[0x24];
          while (piVar1 != (int *)0x0) {
            iVar3 = *piVar1;
            piVar1 = (int *)piVar1[2];
            local_18 = local_18 + 1;
            piVar4 = (int *)(*(int *)(*(int *)(iVar3 + 0x38) + 0x34) * 4);
            *piVar4 = *piVar4 + 1;
          }
        }
      }
      DAT_0131ca68 = FUN_009c12d0();
      DAT_01258a9c = DAT_01258a9c + 1;
      uVar13 = *(undefined4 *)(param_2 + 0xdc);
      (**(code **)(*param_1 + 0xe8))(uVar13);
      FUN_0084fc60(uVar13);
      iVar3 = param_3;
      if ((*(int **)(param_2 + 0x144) != (int *)0x0) &&
         (cVar10 = (**(code **)(**(int **)(param_2 + 0x144) + 0x104))(), cVar10 != '\0')) {
        FUN_00829090();
      }
      for (; 0 < iVar3; iVar3 = iVar3 + -1) {
        piVar2 = *(int **)(param_2 + 0x90);
        fVar8 = 100000.0;
        iVar9 = 0;
        while (piVar2 != (int *)0x0) {
          iVar5 = *piVar2;
          iVar6 = *(int *)(*(int *)(iVar5 + 0x38) + 0x34);
          iVar7 = *(int *)(iVar6 * 4);
          piVar2 = (int *)piVar2[2];
          fVar12 = DAT_00f07eb0;
          if (0 < iVar7) {
            fVar12 = (float)local_18 / (float)iVar7;
          }
          iVar6 = *(int *)(iVar6 * 4);
          if (iVar6 < 1) {
            fVar12 = fVar12 - 900.0;
          }
          else {
            fVar12 = fVar12 - (float)iVar11 / (float)iVar6;
          }
          if ((iVar9 == 0) || (fVar12 < fVar8)) {
            fVar8 = fVar12;
            iVar9 = iVar5;
          }
        }
        (**(code **)(*param_1 + 0xe8))();
        FUN_0084fd10(iVar9);
        piVar2 = (int *)(*(int *)(*(int *)(iVar9 + 0x38) + 0x34) * 4);
        *piVar2 = *piVar2 + 1;
        local_18 = local_18 + 1;
        iVar11 = iVar11 + -1;
        piVar2 = (int *)(*(int *)(*(int *)(iVar9 + 0x38) + 0x34) * 4);
        *piVar2 = *piVar2 + -1;
      }
      (**(code **)(*param_1 + 0x1a8))();
      ExceptionList = local_10;
      return param_3 - iVar3;
    }
  }
  return 0;
}


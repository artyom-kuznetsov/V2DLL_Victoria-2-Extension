// FUN_0082dc50 @ 0082dc50  (requested 0082DC50, first bytes: 55 8B EC 6A FF 68 B8 AD)


/* WARNING: Removing unreachable block (ram,0x0082e170) */
/* WARNING: Removing unreachable block (ram,0x0082e160) */

int FUN_0082dc50(int *param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  int *piVar8;
  uint uVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  float fVar14;
  undefined4 uVar15;
  int *local_68;
  int *local_64;
  int local_60;
  undefined4 *local_54;
  undefined4 *local_44;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4adb8;
  local_10 = ExceptionList;
  local_20 = 0;
  local_1c = 0;
  local_54 = (undefined4 *)0x0;
  local_44 = (undefined4 *)0x0;
  local_8 = 1;
  local_28 = 0;
  local_2c = 0;
  local_24 = 4;
  ExceptionList = &local_10;
  do {
    if (&local_28 < local_54) {
      if (local_54 == (undefined4 *)0x0) {
        FUN_007b94a0();
      }
      else {
        *local_54 = *(undefined4 *)(((int)&local_28 >> 2) * 4);
      }
    }
    else if (local_54 == (undefined4 *)0x0) {
      FUN_007b94a0();
    }
    else {
      *local_54 = 0;
    }
    local_54 = local_54 + 1;
    if (&local_2c < local_44) {
      if (local_44 == (undefined4 *)0x0) {
        FUN_007b94a0();
      }
      else {
        *local_44 = *(undefined4 *)(((int)&local_2c >> 2) * 4);
      }
    }
    else if (local_44 == (undefined4 *)0x0) {
      FUN_007b94a0();
    }
    else {
      *local_44 = 0;
    }
    local_44 = local_44 + 1;
    local_24 = local_24 + -1;
  } while (local_24 != 0);
  local_24 = 0;
  piVar4 = (int *)*param_2;
  iVar12 = local_20;
  while (piVar4 != (int *)0x0) {
    local_18 = (int *)piVar4[2];
    piVar2 = (int *)*piVar4;
    cVar10 = (**(code **)(*piVar2 + 0x38))();
    piVar4 = local_18;
    if (cVar10 != '\0') {
      piVar2 = (int *)piVar2[0x24];
      while (piVar2 != (int *)0x0) {
        iVar3 = *piVar2;
        piVar2 = (int *)piVar2[2];
        piVar1 = (int *)(*(int *)(*(int *)(iVar3 + 0x38) + 0x34) * 4);
        *piVar1 = *piVar1 + 1;
        iVar12 = iVar12 + 1;
      }
    }
  }
  local_18 = (int *)param_1[0x2b];
  local_20 = iVar12;
  iVar12 = local_1c;
  while (local_18 != (int *)0x0) {
    piVar4 = (int *)*local_18;
    local_18 = (int *)local_18[2];
    cVar10 = (**(code **)(*piVar4 + 0x38))();
    if (cVar10 != '\0') {
      piVar4 = (int *)piVar4[0x24];
      while (piVar4 != (int *)0x0) {
        iVar3 = *piVar4;
        piVar4 = (int *)piVar4[2];
        piVar2 = (int *)(*(int *)(*(int *)(iVar3 + 0x38) + 0x34) * 4);
        *piVar2 = *piVar2 + 1;
        iVar12 = iVar12 + 1;
      }
    }
  }
  local_64 = (int *)0x0;
  local_60 = 0;
  uVar9 = (uint)local_8 >> 8;
  local_8 = CONCAT31((int3)uVar9,2);
  local_18 = (int *)0x0;
  local_68 = (int *)0x0;
  piVar4 = (int *)param_2[1];
  local_24 = param_3;
  local_1c = iVar12;
  while ((piVar8 = local_64, piVar1 = local_68, piVar2 = piVar1, piVar4 != (int *)0x0 &&
         (0 < local_24))) {
    local_18 = (int *)piVar4[1];
    iVar12 = *piVar4;
    local_68 = piVar1;
    piVar4 = local_18;
    local_64 = piVar8;
    if ((*(int *)(iVar12 + 0x74) == 0) &&
       (((*(char *)(*(int *)(*(int *)(iVar12 + 0xdc) + 0x5c) + 0x2a) != '\0' &&
         (*(char *)(iVar12 + 0x104) == '\0')) && (iVar3 = *(int *)(iVar12 + 0x98), iVar3 != 0)))) {
      if (local_24 < iVar3) {
        DAT_0131ca68 = FUN_009c12d0();
        DAT_01258a9c = DAT_01258a9c + 1;
        uVar15 = *(undefined4 *)(iVar12 + 0xdc);
        (**(code **)(*param_1 + 0xe8))(uVar15);
        FUN_0084fc60(uVar15);
        if ((*(int **)(iVar12 + 0x144) != (int *)0x0) &&
           (cVar10 = (**(code **)(**(int **)(iVar12 + 0x144) + 0x104))(), cVar10 != '\0')) {
          FUN_00829090();
        }
        do {
          piVar4 = *(int **)(iVar12 + 0x90);
          fVar7 = 100000.0;
          iVar3 = 0;
          while (piVar4 != (int *)0x0) {
            iVar11 = *piVar4;
            iVar5 = *(int *)(*(int *)(iVar11 + 0x38) + 0x34);
            iVar6 = *(int *)(iVar5 * 4);
            piVar4 = (int *)piVar4[2];
            fVar14 = DAT_00f07eb0;
            if (0 < iVar6) {
              fVar14 = (float)local_1c / (float)iVar6;
            }
            iVar5 = *(int *)(iVar5 * 4);
            if (iVar5 < 1) {
              fVar14 = fVar14 - 900.0;
            }
            else {
              fVar14 = fVar14 - (float)local_20 / (float)iVar5;
            }
            if ((iVar3 == 0) || (fVar14 < fVar7)) {
              fVar7 = fVar14;
              iVar3 = iVar11;
            }
          }
          (**(code **)(*param_1 + 0xe8))();
          FUN_0084fd10(iVar3);
          piVar4 = (int *)(*(int *)(*(int *)(iVar3 + 0x38) + 0x34) * 4);
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(*(int *)(*(int *)(iVar3 + 0x38) + 0x34) * 4);
          *piVar4 = *piVar4 + -1;
          local_1c = local_1c + 1;
          local_20 = local_20 + -1;
          local_24 = local_24 + -1;
        } while (0 < local_24);
        local_64 = (int *)FUN_00aae9af();
        if (local_64 == (int *)0x0) {
          local_64 = (int *)0x0;
        }
        else {
          *local_64 = iVar12;
          local_64[1] = (int)piVar8;
          local_64[2] = 0;
          *(undefined1 *)(local_64 + 3) = 0;
        }
        iVar12 = local_60 + 1;
        bVar13 = local_60 != 0;
        local_68 = local_64;
        piVar4 = local_18;
        local_60 = iVar12;
        if (bVar13) {
          piVar8[2] = (int)local_64;
          local_68 = piVar1;
        }
      }
      else {
        local_64 = (int *)FUN_00aae9af();
        if (local_64 == (int *)0x0) {
          local_64 = (int *)0x0;
        }
        else {
          *local_64 = iVar12;
          local_64[1] = (int)piVar8;
          local_64[2] = 0;
          *(undefined1 *)(local_64 + 3) = 0;
        }
        iVar11 = local_60 + 1;
        local_68 = local_64;
        if (local_60 != 0) {
          piVar8[2] = (int)local_64;
          local_68 = piVar1;
        }
        piVar2 = *(int **)(iVar12 + 0x90);
        local_24 = local_24 - iVar3;
        while (piVar4 = local_18, local_60 = iVar11, piVar2 != (int *)0x0) {
          iVar12 = *piVar2;
          piVar2 = (int *)piVar2[2];
          piVar4 = (int *)(*(int *)(*(int *)(iVar12 + 0x38) + 0x34) * 4);
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(*(int *)(*(int *)(iVar12 + 0x38) + 0x34) * 4);
          *piVar4 = *piVar4 + -1;
          local_1c = local_1c + 1;
          local_20 = local_20 + -1;
        }
      }
    }
  }
  while (piVar2 != (int *)0x0) {
    piVar2 = (int *)piVar2[2];
    (**(code **)(*param_1 + 0x1a8))();
  }
  if (piVar1 == (int *)0x0) {
    ExceptionList = local_10;
    return param_3 - local_24;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}


// FUN_00821dc0 @ 00821dc0 body=[[00821dc0, 008220fe]]


undefined4 * FUN_00821dc0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  void **ppvVar4;
  int *piVar5;
  char cVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  int *in_ECX;
  bool bVar13;
  int local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b52c6e;
  local_14 = ExceptionList;
  if ((char)in_ECX[0xf] == '\0') {
    return ExceptionList;
  }
  bVar13 = true;
  ppvVar4 = &local_14;
  if (0 < in_ECX[0x1c]) {
    iVar7 = in_ECX[0x1a];
    ppvVar4 = &local_14;
    do {
      ExceptionList = ppvVar4;
      if (iVar7 == 0) {
        bVar13 = false;
        ppvVar4 = ExceptionList;
        break;
      }
      iVar7 = *(int *)(iVar7 + 8);
      cVar6 = FUN_005cc3e0();
      ppvVar4 = ExceptionList;
    } while (cVar6 != '\0');
  }
  ExceptionList = ppvVar4;
  if ((0 < *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + in_ECX[0xe] * 4) + 0xdd4)) &&
     (iVar7 = FUN_005dba20(), 0 < iVar7 * 1000)) {
    piVar8 = (int *)in_ECX[0x1a];
    iVar7 = 0;
    if (piVar8 != (int *)0x0) {
      do {
        iVar11 = *piVar8;
        piVar8 = (int *)piVar8[2];
        iVar7 = iVar7 + *(int *)(iVar11 + 0x40);
      } while (piVar8 != (int *)0x0);
      if (0 < iVar7) {
        if (bVar13) {
          FUN_00822300();
          if (0 < (int)(in_ECX[0x23] - in_ECX[0x22] & 0xfffffffcU)) {
            FUN_008230a0(in_ECX);
            FUN_008223a0(in_ECX);
            FUN_00823370(in_ECX);
            FUN_00822c70();
            if ((in_ECX[0x28] == 0) || (iVar7 = FUN_009b7610(), iVar7 % 0x14 == 0xc)) {
              FUN_00824e80(in_ECX);
            }
            FUN_00822100(in_ECX);
            FUN_00824650(in_ECX);
          }
          FUN_00823d90(in_ECX);
          FUN_00822fa0();
          FUN_00822cf0(in_ECX);
        }
        puVar9 = *(undefined4 **)(*(int *)(DAT_012587e4 + 4) + in_ECX[0xe] * 4);
        iVar7 = 1;
        if (*(char *)(puVar9 + 0x19f) == '\0') {
          iVar7 = FUN_009b7610();
          puVar9 = (undefined4 *)(iVar7 / 5);
          iVar7 = iVar7 % 5 + 1;
        }
        in_ECX[0xc] = iVar7;
        goto LAB_00821ff0;
      }
    }
  }
  iVar7 = DAT_012587e4;
  in_ECX[0xc] = 0x1e;
  puVar9 = *(undefined4 **)(*(int *)(iVar7 + 4) + in_ECX[0xe] * 4);
  if (puVar9[0x375] == 0) {
    if (!bVar13) {
      ExceptionList = local_14;
      return puVar9;
    }
    puVar9 = (undefined4 *)(**(code **)(*in_ECX + 0x1b4))();
    puVar1 = (undefined4 *)*puVar9;
    while (puVar1 != (undefined4 *)0x0) {
      uVar12 = *puVar1;
      puVar1 = (undefined4 *)puVar1[2];
      puVar9 = (undefined4 *)FUN_005cc3e0();
      if ((char)puVar9 == '\0') {
        iVar7 = FUN_00aae9af(100);
        local_c = 0;
        if (iVar7 == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = FUN_005e02a0(iVar7,uVar12);
        }
        local_c = 0xffffffff;
        iVar7 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
        puVar9 = (undefined4 *)(**(code **)(**(int **)(iVar7 + 0x38) + 0x18))(uVar12);
      }
    }
  }
LAB_00821ff0:
  if (bVar13) {
    local_20 = 0;
    local_c = 1;
    piVar8 = (int *)in_ECX[0x1a];
    piVar10 = (int *)0x0;
    piVar5 = (int *)0x0;
    while (piVar2 = piVar5, piVar3 = piVar10, piVar8 != (int *)0x0) {
      iVar7 = *piVar8;
      piVar8 = (int *)piVar8[2];
      piVar10 = piVar3;
      piVar5 = piVar2;
      if ((*(int *)(iVar7 + 0x98) < 1) && (*(int *)(iVar7 + 0x40) < 1)) {
        piVar10 = (int *)FUN_00aae9af(0x10);
        if (piVar10 == (int *)0x0) {
          piVar10 = (int *)0x0;
        }
        else {
          *piVar10 = iVar7;
          piVar10[1] = (int)piVar3;
          piVar10[2] = 0;
          *(undefined1 *)(piVar10 + 3) = 0;
        }
        iVar7 = local_20 + 1;
        bVar13 = local_20 != 0;
        piVar5 = piVar10;
        local_20 = iVar7;
        if (bVar13) {
          piVar3[2] = (int)piVar10;
          piVar5 = piVar2;
        }
      }
    }
    while (piVar2 != (int *)0x0) {
      iVar7 = *piVar2;
      piVar2 = (int *)piVar2[2];
      iVar11 = FUN_00aae9af(100);
      local_c._0_1_ = 2;
      if (iVar11 == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = FUN_005e02a0(iVar11,iVar7);
      }
      local_c = CONCAT31(local_c._1_3_,1);
      iVar7 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
      (**(code **)(**(int **)(iVar7 + 0x38) + 0x18))(uVar12);
    }
    FUN_009a63f0();
    puVar9 = (undefined4 *)FUN_009a63f0();
  }
  ExceptionList = local_14;
  return puVar9;
}


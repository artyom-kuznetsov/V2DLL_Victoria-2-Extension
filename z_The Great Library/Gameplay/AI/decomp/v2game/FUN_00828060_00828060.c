// FUN_00828060 @ 00828060 body=[[00828060, 008280da] [008280e0, 0082831b]]


int FUN_00828060(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  bool bVar5;
  void **ppvVar6;
  int *piVar7;
  char cVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int *local_30;
  int *local_2c;
  int local_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b52c38;
  local_10 = ExceptionList;
  ppvVar6 = &local_10;
  if (0 < param_1[0x2d]) {
    iVar11 = param_1[0x2b];
    ExceptionList = &local_10;
    do {
      if (iVar11 == 0) goto LAB_008282d6;
      iVar11 = *(int *)(iVar11 + 8);
      cVar8 = FUN_005cc3e0();
      ppvVar6 = ExceptionList;
    } while (cVar8 != '\0');
  }
  ExceptionList = ppvVar6;
  bVar5 = false;
  local_30 = (int *)0x0;
  local_2c = (int *)0x0;
  local_28 = 0;
  local_8 = 0;
  piVar9 = (int *)param_1[0x2b];
  if (piVar9 != (int *)0x0) {
    do {
      piVar1 = (int *)*piVar9;
      piVar9 = (int *)piVar9[2];
      if ((piVar1[0x37] != 0) &&
         (iVar11 = (**(code **)(*piVar1 + 0x2c))(), *(int *)(iVar11 + 0x1b4) == 0)) {
        iVar11 = piVar1[0x37];
        for (piVar10 = local_30; piVar10 != (int *)0x0; piVar10 = (int *)piVar10[2]) {
          if (*piVar10 == iVar11) goto LAB_008281e4;
        }
        if ((((((char)piVar1[0x59] != '\0') || (*(char *)(iVar11 + 0x130) != 'R')) ||
             (*(char *)(iVar11 + 0x131) != 'E')) || (*(char *)(iVar11 + 0x132) != 'B')) &&
           (((param_1[0x3a] == 0 || (piVar1[5] != param_1[0x3c])) || (piVar1[4] != param_1[0x3b]))))
        {
          piVar10 = (int *)FUN_00aae9af(0x10);
          if (piVar10 == (int *)0x0) {
            piVar10 = (int *)0x0;
          }
          else {
            *piVar10 = iVar11;
            piVar10[1] = (int)local_2c;
            piVar10[2] = 0;
            *(undefined1 *)(piVar10 + 3) = 0;
          }
          iVar11 = local_28 + 1;
          piVar7 = piVar10;
          if (local_28 != 0) {
            local_2c[2] = (int)piVar10;
            piVar7 = local_30;
          }
          local_30 = piVar7;
          local_2c = piVar10;
          local_28 = iVar11;
          if (!bVar5) {
            cVar8 = FUN_0082d8a0(param_1,piVar1[0x37],param_1 + 0x2b,1);
            bVar5 = false;
            if (cVar8 == '\0') goto LAB_008281e4;
          }
          bVar5 = true;
        }
      }
LAB_008281e4:
    } while (piVar9 != (int *)0x0);
    if (bVar5) goto LAB_008282ce;
  }
  if (((param_1[0x38] == 0) && (param_1[0x3a] == 0)) && (0 < param_1[0x31])) {
    if (param_1[0x2d] < 2) {
LAB_0082827c:
      puVar3 = (undefined4 *)param_1[0x2f];
      while (puVar3 != (undefined4 *)0x0) {
        uVar4 = *puVar3;
        puVar3 = (undefined4 *)puVar3[2];
        iVar11 = (**(code **)(*param_1 + 0xe8))();
        (**(code **)(**(int **)(iVar11 + 0x210) + 0x1b8))(uVar4);
      }
    }
    else {
      iVar11 = FUN_0082da70();
      piVar9 = (int *)param_1[0x2b];
      do {
        if (piVar9 == (int *)0x0) goto LAB_0082827c;
        iVar2 = *piVar9;
        piVar9 = (int *)piVar9[2];
      } while ((iVar2 == iVar11) ||
              (cVar8 = FUN_0051b200(*(undefined4 *)(iVar2 + 0xdc),*(undefined4 *)(iVar11 + 0xdc)),
              cVar8 != '\0'));
    }
  }
  FUN_00828320(param_1);
  if (param_1[0x38] < 1) {
    FUN_00828550(param_1);
  }
  else {
    FUN_008290f0(param_1);
  }
  FUN_00829ab0(param_1);
LAB_008282ce:
  FUN_009a63f0();
LAB_008282d6:
  iVar11 = 1;
  if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_1[0xe] * 4) + 0x67c) == '\0') {
    iVar11 = FUN_00ab047b();
    iVar11 = iVar11 % 3 + 2;
  }
  ExceptionList = local_10;
  return iVar11;
}


// FUN_00911760 @ 00911760  (requested 00911760, first bytes: 55 8B EC 83 E4 F8 64 A1)


uint FUN_00911760(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *unaff_ESI;
  undefined4 local_34 [5];
  uint uStack_20;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00bbc108;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (*(char *)((int)DAT_012588e8 + 0xd11) != '\0') {
    piVar3 = (int *)DAT_012588e8[0x2c9];
    ExceptionList = &pvStack_14;
    (**(code **)(*unaff_ESI + 0x24))(local_34);
    puStack_10 = (undefined1 *)0x0;
    (**(code **)(*piVar3 + 400))();
    piVar3 = (int *)FUN_00416db0();
    uStack_c = 0xffffffff;
    if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    if ((char)piVar3 == '\0') goto LAB_00911bc2;
  }
  uStack_c = 0xffffffff;
  cVar2 = (**(code **)(*unaff_ESI + 0x70))();
  if (cVar2 != '\0') {
    if ((((DAT_0125873e == '\0') &&
         (DAT_012588e8[0x2c3] <=
          *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + unaff_ESI[3] * 4) + 0xbe8
                                    ) + unaff_ESI[5] * 4) + 100))) && (unaff_ESI[9] == 0)) &&
       (piVar3 = DAT_012588e8, *(char *)((int)DAT_012588e8 + 0xd11) == '\0')) goto LAB_00911bc2;
  }
  piVar3 = (int *)unaff_ESI[3];
  if (((((piVar3 == (int *)unaff_ESI[5]) ||
        ((cVar2 = (**(code **)(*unaff_ESI + 100))(), cVar2 != '\0' &&
         (piVar3 = (int *)unaff_ESI[3],
         *(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + (int)piVar3 * 4) + 0x31) == '\0')))) ||
       ((cVar2 = (**(code **)(*unaff_ESI + 100))(), cVar2 != '\0' &&
        (piVar3 = *(int **)(*(int *)(DAT_012587e4 + 4) + unaff_ESI[5] * 4),
        *(char *)((int)piVar3 + 0x31) != '\0')))) ||
      (((cVar2 = (**(code **)(*unaff_ESI + 100))(), cVar2 != '\0' &&
        (piVar3 = *(int **)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + unaff_ESI[3] * 4
                                                      ) + 0xbe8) + unaff_ESI[5] * 4) + 0x9c),
        DAT_012588e8[0x2c3] <= (int)piVar3)) ||
       ((piVar3 = (int *)(**(code **)(*unaff_ESI + 0x68))(), (char)piVar3 != '\0' &&
        (piVar3 = *(int **)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + unaff_ESI[3] * 4) + 0xbe8
                                    ) + unaff_ESI[5] * 4), piVar3[0xd] != 0)))))) ||
     ((unaff_ESI[3] == 0 ||
      (((((((char)unaff_ESI[2] == 'R' && (*(char *)((int)unaff_ESI + 9) == 'E')) &&
          (*(char *)((int)unaff_ESI + 10) == 'B')) ||
         ((iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + unaff_ESI[3] * 4),
          piVar3 = (int *)(iVar4 + 0x9d8),
          (int)(*(int *)(iVar4 + 0x9dc) - *piVar3 & 0xfffffffcU) < 1 &&
          (piVar3 = (int *)(**(code **)(*unaff_ESI + 0x84))(), (char)piVar3 == '\0')))) ||
        (iVar4 = DAT_012587e4, unaff_ESI[5] == 0)) ||
       ((piVar3 = (int *)FUN_0047e4d0(), (char)piVar3 == '\0' ||
        (iVar4 = *(int *)(*(int *)(iVar4 + 4) + unaff_ESI[5] * 4), piVar3 = (int *)(iVar4 + 0x9d8),
        (int)(*(int *)(iVar4 + 0x9dc) - *piVar3 & 0xfffffffcU) < 1)))))))) goto LAB_00911bc2;
  cVar2 = (**(code **)(*unaff_ESI + 0x74))();
  if (cVar2 != '\0') {
    iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + unaff_ESI[3] * 4);
    if (((*(char *)(iVar4 + 0xcf5) != '\0') || (*(char *)(iVar4 + 0xcf4) != '\0')) &&
       (piVar3 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + unaff_ESI[3] * 4) + 0xcfc),
       piVar3 != (int *)unaff_ESI[5])) goto LAB_00911bc2;
  }
  cVar2 = (**(code **)(*unaff_ESI + 0x78))();
  if (cVar2 == '\0') {
LAB_00911a75:
    cVar2 = (**(code **)(*unaff_ESI + 0x7c))();
    if (cVar2 != '\0') {
      iVar4 = *(int *)(DAT_012587e4 + 4);
      iVar1 = *(int *)(iVar4 + unaff_ESI[5] * 4);
      if (((*(char *)(iVar1 + 0xcf5) != '\0') || (*(char *)(iVar1 + 0xcf4) != '\0')) &&
         (*(char *)(*(int *)(iVar4 + unaff_ESI[5] * 4) + 0xcf4) != '\0')) goto LAB_00911ac0;
    }
  }
  else {
    iVar4 = *(int *)(DAT_012587e4 + 4);
    iVar1 = *(int *)(iVar4 + unaff_ESI[5] * 4);
    if (((*(char *)(iVar1 + 0xcf5) == '\0') && (*(char *)(iVar1 + 0xcf4) == '\0')) ||
       (*(char *)(*(int *)(iVar4 + unaff_ESI[5] * 4) + 0xcf4) != '\0')) goto LAB_00911a75;
LAB_00911ac0:
    piVar3 = *(int **)(*(int *)(iVar4 + unaff_ESI[5] * 4) + 0xcfc);
    if (piVar3 != (int *)unaff_ESI[3]) goto LAB_00911bc2;
  }
  iVar4 = (**(code **)(*unaff_ESI + 0x54))();
  cVar2 = (**(code **)(*unaff_ESI + 0x60))();
  if (((cVar2 == '\0') && (iVar4 != 0x15b)) && (unaff_ESI[9] == 0)) {
    if (DAT_01258a08 == 0) {
      piVar3 = *(int **)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + unaff_ESI[3] * 4) +
                                          0xbe8) + unaff_ESI[5] * 4) + 0x48);
    }
    else {
      piVar3 = (int *)0x186a0;
    }
    if ((int)piVar3 < *(int *)(*(int *)(DAT_012586dc + 0x30) + iVar4 * 4)) goto LAB_00911bc2;
  }
  iVar4 = (**(code **)(*unaff_ESI + 0x50))();
  if (((iVar4 == 0x15b) || (unaff_ESI[9] != 0)) ||
     (piVar3 = (int *)FUN_0051b810(), *(int *)(*(int *)(DAT_012586dc + 0x30) + iVar4 * 4) <= *piVar3
     )) {
    uVar5 = (**(code **)(*unaff_ESI + 0x90))(param_1);
    ExceptionList = pvStack_18;
    return uVar5;
  }
LAB_00911bc2:
  ExceptionList = pvStack_14;
  return (uint)piVar3 & 0xffffff00;
}


// FUN_008626d0 @ 008626d0 body=[[008626d0, 0086294d]]


bool FUN_008626d0(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int unaff_EDI;
  undefined1 local_4c [8];
  undefined4 local_44;
  undefined4 local_40;
  
  if ((*(char *)(unaff_EDI + 0x1a5) == '\0') || (*(int **)(unaff_EDI + 0x750) == (int *)0x0)) {
    if (*(char *)(unaff_EDI + 0x1a4) != '\0') {
      piVar3 = (int *)(unaff_EDI + 0x6fc);
      iVar2 = 3;
      do {
        if (*piVar3 != 0) {
          (**(code **)(*(int *)*piVar3 + 0x2c))();
        }
        piVar3 = piVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  else {
    (**(code **)(**(int **)(unaff_EDI + 0x750) + 0x2c))();
  }
  if ((*(int *)(unaff_EDI + 0x89c) != 0) &&
     (cVar1 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x18c))(unaff_EDI + 0x88c),
     cVar1 != '\0')) {
    FUN_00866980();
  }
  if (0 < *(int *)(unaff_EDI + 0x860)) {
    for (piVar3 = *(int **)(*(int *)(DAT_012588e8 + 0xb24) + 0x1600); piVar3 != (int *)0x0;
        piVar3 = (int *)piVar3[2]) {
      iVar2 = (**(code **)(*(int *)*piVar3 + 4))();
      if ((((iVar2 == 0) || (iVar2 = (**(code **)(*(int *)*piVar3 + 4))(), iVar2 == 1)) &&
          (*piVar3 != 0)) && (*(int *)(*piVar3 + 0x14) == *(int *)(unaff_EDI + 0x860))) {
        FUN_00866980();
        break;
      }
    }
  }
  if (*(int *)(unaff_EDI + 0x85c) < 1) {
    if (0 < *(int *)(unaff_EDI + 0x864)) {
      iVar2 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(unaff_EDI + 0x864) * 4);
      for (piVar3 = *(int **)(iVar2 + 0xec); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
        if (*(char *)(*piVar3 + 4) == '\0') goto LAB_008628a2;
      }
      if (*(int *)(iVar2 + 0xf4) != 0) {
        for (piVar3 = *(int **)(*(int *)(DAT_012588e8 + 0xb24) + 0x1600); piVar3 != (int *)0x0;
            piVar3 = (int *)piVar3[2]) {
          iVar2 = (**(code **)(*(int *)*piVar3 + 4))();
          if (((iVar2 != 0) && (iVar2 = (**(code **)(*(int *)*piVar3 + 4))(), iVar2 != 1)) ||
             (*(int *)(*(int *)(*piVar3 + 0xdc) + 0x58) != *(int *)(unaff_EDI + 0x864)))
          goto LAB_008628a2;
        }
LAB_0086289b:
        FUN_00866980();
      }
    }
  }
  else {
    for (piVar3 = *(int **)(*(int *)(DAT_012588e8 + 0xb24) + 0x1600); piVar3 != (int *)0x0;
        piVar3 = (int *)piVar3[2]) {
      iVar2 = (**(code **)(*(int *)*piVar3 + 4))();
      if (((iVar2 == 0) || (iVar2 = (**(code **)(*(int *)*piVar3 + 4))(), iVar2 == 1)) &&
         ((*piVar3 != 0 &&
          (*(int *)(*(int *)(*piVar3 + 0xdc) + 0x58) == *(int *)(unaff_EDI + 0x85c)))))
      goto LAB_0086289b;
    }
  }
LAB_008628a2:
  FUN_008a8650(0);
  local_44 = *(undefined4 *)(unaff_EDI + 0x724);
  local_40 = *(undefined4 *)(unaff_EDI + 0x728);
  if (((*(int *)(unaff_EDI + 0x738) - *(int *)(unaff_EDI + 0x734) & 0xfffffffcU) != 0) &&
     (cVar1 = (**(code **)(*(int *)(unaff_EDI + 0x72c) + 0x18))(local_4c), cVar1 != '\0')) {
    if (*(char *)(unaff_EDI + 0x1a4) != '\0') {
      (**(code **)(*(int *)(*(int *)(unaff_EDI + 0x6fc) + 0x18) + 0x38))();
      (**(code **)(*(int *)(*(int *)(unaff_EDI + 0x700) + 0x18) + 0x38))();
      (**(code **)(*(int *)(*(int *)(unaff_EDI + 0x704) + 0x18) + 0x34))();
      return *(char *)(unaff_EDI + 0x748) == '\0';
    }
    *(undefined1 *)(unaff_EDI + 0x748) = 1;
  }
  return *(char *)(unaff_EDI + 0x748) == '\0';
}


// FUN_0066bd60 @ 0066bd60 body=[[0066bd60, 0066bef6] [0066befa, 0066c102]]


void FUN_0066bd60(int param_1,char param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *unaff_EDI;
  bool bVar4;
  undefined4 local_2c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((char)unaff_EDI[0x3a] == '\0') {
    ExceptionList = &local_10;
    cVar2 = (**(code **)(**(int **)(unaff_EDI[0x360] + param_1 * 4) + 0x1c))();
    if ((cVar2 != '\0') && (param_2 != '\0')) {
      iVar3 = 0;
      if (0 < (int)(unaff_EDI[0x361] - unaff_EDI[0x360] & 0xfffffffcU)) {
        do {
          cVar2 = (**(code **)(**(int **)(unaff_EDI[0x360] + iVar3 * 4) + 0x1c))();
          if (cVar2 != '\0') {
            (**(code **)(**(int **)(unaff_EDI[0x360] + iVar3 * 4) + 0x14))();
            (**(code **)(**(int **)(unaff_EDI[0x360] + iVar3 * 4) + 0x10))();
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < unaff_EDI[0x361] - unaff_EDI[0x360] >> 2);
      }
      FUN_00718f30();
      (**(code **)(*(int *)unaff_EDI[0x65b] + 0x38))();
    }
    if ((char)unaff_EDI[0x3a] == '\0') {
      if (param_2 == '\0') {
        ExceptionList = local_10;
        return;
      }
      (**(code **)(*(int *)unaff_EDI[0x65c] + 0x34))();
      *(undefined2 *)(unaff_EDI + 0x736) = 1;
      ExceptionList = local_10;
      return;
    }
  }
  cVar2 = (**(code **)(*unaff_EDI + 0x144))();
  if (cVar2 != '\0') {
    FUN_00868080();
    iVar3 = FUN_008676e0();
    if (iVar3 != 0) {
      FUN_00868080();
      iVar3 = FUN_008676e0();
      if (*(int *)(iVar3 + 0x87c) != 0) {
        FUN_009885d0();
        local_8 = 0;
        FUN_00868080();
        FUN_008676e0();
        cVar2 = FUN_00416db0();
        local_8 = 0xffffffff;
        if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_2c);
        }
        if (cVar2 == '\0') {
          ExceptionList = local_10;
          return;
        }
      }
    }
  }
  bVar4 = false;
  cVar2 = FUN_0066bbf0();
  if (cVar2 != '\0') {
    cVar2 = (**(code **)(**(int **)(unaff_EDI[0x360] + param_1 * 4) + 0x1c))();
    bVar4 = cVar2 != '\0';
    iVar3 = 0;
    if (0 < (int)(unaff_EDI[0x361] - unaff_EDI[0x360] & 0xfffffffcU)) {
      do {
        cVar2 = (**(code **)(**(int **)(unaff_EDI[0x360] + iVar3 * 4) + 0x1c))();
        if (cVar2 != '\0') {
          (**(code **)(**(int **)(unaff_EDI[0x360] + iVar3 * 4) + 0x14))();
          (**(code **)(**(int **)(unaff_EDI[0x360] + iVar3 * 4) + 0x10))();
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < unaff_EDI[0x361] - unaff_EDI[0x360] >> 2);
    }
    FUN_00718f30();
    (**(code **)(*(int *)unaff_EDI[0x65b] + 0x38))();
  }
  unaff_EDI[0x35f] = param_1;
  FUN_0066bc90();
  if (bVar4) {
    (**(code **)(*(int *)unaff_EDI[0x65c] + 0x34))();
    *(undefined1 *)((int)unaff_EDI + 0x1cd9) = 0;
  }
  else {
    (**(code **)(*(int *)unaff_EDI[0x65c] + 0x38))();
    *(undefined1 *)((int)unaff_EDI + 0x1cd9) = 1;
    iVar3 = unaff_EDI[0x780];
    if (((*(char *)(*(int *)(iVar3 + 0x28) + 0x67) != '\0') &&
        ((**(code **)(*(int *)(*(int *)(iVar3 + 0x28) + 0x18) + 0x38))(),
        *(char *)(iVar3 + 0x38) == '\0')) &&
       (cVar2 = (**(code **)(**(int **)(iVar3 + 0x20) + 0x158))(), cVar2 != '\0')) {
      (**(code **)(**(int **)(iVar3 + 0x20) + 0x15c))();
    }
    FUN_00679440();
    (**(code **)(**(int **)(unaff_EDI[0x360] + unaff_EDI[0x35f] * 4) + 0x20))();
    (**(code **)(**(int **)(unaff_EDI[0x360] + unaff_EDI[0x35f] * 4) + 8))();
    (**(code **)(*(int *)unaff_EDI[0x75c] + 0x2c))();
    piVar1 = *(int **)(unaff_EDI[0x348] + 4);
    if (((piVar1 != (int *)0x0) && (*(char *)((int)piVar1 + 0x67) != '\0')) &&
       ((piVar1 != (int *)0x0 && (*(char *)((int)piVar1 + 0x67) != '\0')))) {
      (**(code **)(*piVar1 + 0x2c))();
    }
    piVar1 = *(int **)(unaff_EDI[0x349] + 4);
    if (((piVar1 != (int *)0x0) && (*(char *)((int)piVar1 + 0x67) != '\0')) &&
       ((piVar1 != (int *)0x0 && (*(char *)((int)piVar1 + 0x67) != '\0')))) {
      (**(code **)(*piVar1 + 0x2c))();
    }
  }
  (**(code **)(*(int *)unaff_EDI[0x585] + 0xc))();
  (**(code **)(**(int **)(unaff_EDI[0x585] + 0x20) + 0x2c))();
  (**(code **)(*(int *)unaff_EDI[0x585] + 8))();
  (**(code **)(*unaff_EDI + 0xa4))(0);
  ExceptionList = local_10;
  return;
}


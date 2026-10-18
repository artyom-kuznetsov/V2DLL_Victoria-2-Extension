// FUN_0082c380 @ 0082c380 body=[[0082c380, 0082c4cf]]


bool FUN_0082c380(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  int unaff_EDI;
  undefined4 local_18;
  int local_14;
  int local_10;
  char local_9;
  
  if (param_1[0x1c] == 0) {
    return false;
  }
  piVar5 = *(int **)(param_1[0x37] + 0xec);
  local_10 = 0;
  local_14 = 0;
  local_9 = '\0';
  if (piVar5 != (int *)0x0) {
    do {
      piVar1 = (int *)*piVar5;
      piVar5 = (int *)piVar5[2];
      cVar4 = (**(code **)(*piVar1 + 0x38))();
      iVar3 = local_14;
      if (cVar4 != '\0') {
        if (piVar1[0x31] != *(int *)(unaff_EDI + 0x38)) {
          iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_EDI + 0x38) * 4);
          if (((piVar1[0x31] != *(int *)(iVar2 + 0x20)) &&
              (((*(int *)(*(int *)(*(int *)(iVar2 + 0xbe8) + piVar1[0x31] * 4) + 0x34) != 0 ||
                ((((char)piVar1[0x30] == 'R' && (*(char *)((int)piVar1 + 0xc1) == 'E')) &&
                 (*(char *)((int)piVar1 + 0xc2) == 'B')))) ||
               (((*(char *)(iVar2 + 0x1c) == 'R' && (*(char *)(iVar2 + 0x1d) == 'E')) &&
                (*(char *)(iVar2 + 0x1e) == 'B')))))) && ((char)piVar1[0x41] != '\0')) {
            local_9 = '\x01';
          }
        }
        if (((piVar1[0x1c] != 0) && (iVar2 = piVar1[0x26], iVar3 = iVar2, piVar1 != param_1)) &&
           (iVar3 = local_14, local_10 < iVar2)) {
          local_10 = iVar2;
        }
      }
      local_14 = iVar3;
    } while (piVar5 != (int *)0x0);
    if ((0 < local_10) && (local_10 <= local_14)) {
      return false;
    }
  }
  if (*(char *)(unaff_EDI + 0xf4) != '\0') {
    if (local_9 != '\0') {
      return false;
    }
    local_18 = *(undefined4 *)(unaff_EDI + 0x34);
    if (*(int *)(param_1[0x37] + 300) != *(int *)(unaff_EDI + 0x38)) {
      local_14 = *(undefined4 *)(unaff_EDI + 0x38);
      cVar4 = FUN_004b7db0(&local_18);
      return cVar4 != '\0';
    }
  }
  return true;
}


// FUN_009a0e90 @ 009a0e90 body=[[009a0e90, 009a0f35]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009a0e90(void)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  int *piVar3;
  int local_108 [65];
  
  iVar1 = _DAT_013f08d4;
  _DAT_013f08d4 = _DAT_013f08d4 + 1;
  if (*(int *)(in_ECX + 0x228) != 3) {
    _DAT_013f08d4 = iVar1;
    return;
  }
  while( true ) {
    piVar2 = *(int **)(in_ECX + 0x1c);
    if ((char)piVar2[0x44] == '\0') {
      iVar1 = (**(code **)(*piVar2 + 4))();
      piVar2[2] = iVar1;
      if (iVar1 == 0) {
        piVar2[3] = 0x13;
      }
      *(undefined1 *)(piVar2 + 0x44) = 1;
    }
    piVar2 = piVar2 + 3;
    piVar3 = local_108;
    for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar3 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 1;
    }
    if ((local_108[0] == 4) || (local_108[0] == 0x13)) break;
    FUN_009a1440(in_ECX);
    if (*(int *)(in_ECX + 0x228) == 3) {
      FUN_009a0e90();
    }
  }
  (**(code **)(**(int **)(in_ECX + 0x1c) + 4))();
  _DAT_013f08d4 = _DAT_013f08d4 + -1;
  return;
}


// FUN_009bf5b0 @ 009bf5b0 body=[[009bf5b0, 009bf667]]


void FUN_009bf5b0(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  undefined1 local_c [4];
  int local_8;
  
  piVar1 = (int *)FUN_00a2ab50(*(undefined4 *)(in_ECX + 0x140),local_c);
  local_8 = piVar1[1];
  if (*piVar1 != 0) {
    iVar2 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x144) + 0x1b8) + 4))(*piVar1,0);
    if (*(char *)(*(int *)(in_ECX + 0x140) + 0x15e) == '\0') {
      *(ushort *)(iVar2 + 0x9c) = *(ushort *)(iVar2 + 0x9c) & 0xff7f;
    }
    else {
      *(ushort *)(iVar2 + 0x9c) = *(ushort *)(iVar2 + 0x9c) | 0x80;
    }
    *(int *)(in_ECX + 0x184) = local_8;
    iVar3 = *(int *)(in_ECX + 0x1a4) - *(int *)(in_ECX + 0x1a0) >> 2;
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        (**(code **)(**(int **)(*(int *)(in_ECX + 0x1a0) + iVar2 * 4) + 0x17c))(param_1);
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
    }
  }
  return;
}


// FUN_005957b0 @ 005957b0 body=[[005957b0, 005957f8] [00595804, 00595810]]


void FUN_005957b0(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x20);
  while (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[2];
    if (*(int *)(iVar2 + 0x74) == *(int *)(in_ECX + 0x1c)) {
      *(undefined4 *)(iVar2 + 0x74) = 0;
      FUN_005d1360();
    }
    else if (*(int *)(iVar2 + 0x70) == *(int *)(in_ECX + 0x1c)) {
      *(undefined4 *)(iVar2 + 0x70) = 0;
    }
  }
  if (*(int *)(in_ECX + 0x20) == 0) {
    *(undefined4 *)(in_ECX + 0x20) = 0;
    *(undefined4 *)(in_ECX + 0x24) = 0;
    *(undefined4 *)(in_ECX + 0x28) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*(int *)(in_ECX + 0x20));
}


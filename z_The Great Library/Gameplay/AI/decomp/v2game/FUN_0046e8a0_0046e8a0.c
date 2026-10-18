// FUN_0046e8a0 @ 0046e8a0 body=[[0046e8a0, 0046e904] [0046e908, 0046e943]]


void FUN_0046e8a0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  int local_18 [5];
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0x40) + 4);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 0x67) == '\0')) {
    piVar3 = (int *)FUN_0045af30(*(undefined4 *)(DAT_012588e8 + 0xcf4),local_18);
    if (local_18[0] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_18[0]);
    }
    if (0 < (int)(piVar3[1] - *piVar3 & 0xfffffffcU)) {
      iVar1 = *(int *)(in_ECX + 0x40);
      iVar2 = *(int *)(iVar1 + 4);
      if ((iVar2 != 0) && (*(char *)(iVar2 + 0x67) == '\0')) {
        (**(code **)(*(int *)(iVar2 + 0x18) + 0x34))();
        (**(code **)(**(int **)(iVar1 + 4) + 0x2c))();
        FUN_0046f0d0();
        FUN_0046f490(iVar1);
      }
    }
  }
  else if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x18) + 0x38))();
    return;
  }
  return;
}


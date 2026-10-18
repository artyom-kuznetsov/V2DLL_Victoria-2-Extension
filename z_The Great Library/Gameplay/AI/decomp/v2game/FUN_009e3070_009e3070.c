// FUN_009e3070 @ 009e3070 body=[[009e3070, 009e30ff]]


void FUN_009e3070(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x494) + 0x80))();
  piVar1 = *(int **)(in_ECX + 0x494);
  iVar2 = *(int *)(in_ECX + 0x90);
  (**(code **)(*piVar1 + 0x80))();
  iVar3 = iVar2 + 0x6b9e0;
  if ((*(int *)(iVar2 + 0x6bab8) == 0) && (*(int *)(iVar2 + 0x6babc) != 0)) {
    iVar3 = *(int *)(iVar2 + 0x6babc);
  }
  iVar2 = *(int *)(iVar3 + 0xd4);
  if (iVar2 == 0) {
    piVar1[0x35] = 0;
    *(int **)(*(int *)(iVar3 + 0xe4) + 0xdc) = piVar1;
  }
  else {
    *(int **)(iVar2 + 0xd8) = piVar1;
    piVar1[0x35] = iVar2;
  }
  piVar1[0x36] = iVar3;
  *(int **)(iVar3 + 0xd4) = piVar1;
  piVar1[0x39] = *(int *)(iVar3 + 0xe4);
  return;
}


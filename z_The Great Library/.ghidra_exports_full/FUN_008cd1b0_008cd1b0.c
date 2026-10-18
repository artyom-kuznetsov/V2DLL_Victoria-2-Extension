// FUN_008cd1b0 @ 008cd1b0 body=[[008cd1b0, 008cd1e0]]


undefined4 FUN_008cd1b0(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 0x1c);
  if (0xf < *(uint *)(in_ECX + 0x30)) {
    piVar1 = (int *)*piVar1;
  }
  iVar2 = (**(code **)(*(int *)(DAT_012588e8 + 100) + 8))(piVar1);
  if ((iVar2 != 0) && (*(char *)(iVar2 + 0x1c) != '\0')) {
    return 1;
  }
  return 0;
}


// FUN_008ccb90 @ 008ccb90 body=[[008ccb90, 008ccbe4]]


undefined4 FUN_008ccb90(int param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  piVar2 = (int *)(in_ECX + 0x1c);
  if (0xf < *(uint *)(in_ECX + 0x30)) {
    piVar2 = (int *)*piVar2;
  }
  iVar1 = (**(code **)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) +
                               0x1b0) + 8))(piVar2,*(undefined4 *)(param_1 + 8));
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0x1c) != '\0')) {
    return 1;
  }
  return 0;
}


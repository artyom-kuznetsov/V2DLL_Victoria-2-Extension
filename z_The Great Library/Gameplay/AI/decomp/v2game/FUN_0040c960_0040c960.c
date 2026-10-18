// FUN_0040c960 @ 0040c960 body=[[0040c960, 0040c9c6]]


void FUN_0040c960(undefined1 param_1)

{
  int iVar1;
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x18) = param_1;
  iVar1 = *(int *)(in_ECX + 0x30);
  if ((*(char *)(iVar1 + 0xe4) == '\0') || (*(char *)(iVar1 + 0x142) != '\0')) {
    *(undefined4 *)(iVar1 + 0x6c) = 0;
    *(undefined4 *)(iVar1 + 0x10c) = 0;
  }
  iVar1 = *(int *)(*(int *)(in_ECX + 0x120) + 0x390);
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0x1f0) != '\0')) {
    FUN_004063e0();
  }
  FUN_0040f740();
  FUN_00413350();
  return;
}


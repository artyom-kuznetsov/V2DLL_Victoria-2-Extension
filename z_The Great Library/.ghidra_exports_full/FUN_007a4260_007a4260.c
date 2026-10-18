// FUN_007a4260 @ 007a4260 body=[[007a4260, 007a42a6]]


void FUN_007a4260(void)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0xfc) == '\0') {
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x38) + 0x34))();
    if (*(int *)(iVar1 + 8) != 0) {
      puVar2 = (undefined4 *)(**(code **)(**(int **)(in_ECX + 0x38) + 0x34))();
      if (*(int *)(*(int *)*puVar2 + 0x28) != 0) {
        FUN_007a77c0();
        return;
      }
    }
  }
  else {
    FUN_007a77c0();
  }
  return;
}


// FUN_008a1a20 @ 008a1a20 body=[[008a1a20, 008a1a60]]


void FUN_008a1a20(int param_1)

{
  char cVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x20) != 0) {
    cVar1 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x38))();
    if ((cVar1 != '\0') && (*(int *)(param_1 + 0x10) != 0)) {
      *(undefined4 *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4) + 800)
           = *(undefined4 *)(in_ECX + 0x20);
    }
  }
  return;
}


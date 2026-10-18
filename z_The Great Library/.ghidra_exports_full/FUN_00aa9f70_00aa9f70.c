// FUN_00aa9f70 @ 00aa9f70 body=[[00aa9f70, 00aa9f95] [00aa9fa1, 00aa9fbc]]


void FUN_00aa9f70(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 4) + 4);
  if (*(char *)(iVar1 + 0x15) == '\0') {
    FUN_00aa9f30(*(undefined4 *)(iVar1 + 8));
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  *(int *)(*(int *)(in_ECX + 4) + 4) = *(int *)(in_ECX + 4);
  *(undefined4 *)*(undefined4 *)(in_ECX + 4) = *(undefined4 *)(in_ECX + 4);
  *(int *)(*(int *)(in_ECX + 4) + 8) = *(int *)(in_ECX + 4);
  *(undefined4 *)(in_ECX + 8) = 0;
  return;
}


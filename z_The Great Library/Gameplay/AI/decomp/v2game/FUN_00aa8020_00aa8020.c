// FUN_00aa8020 @ 00aa8020 body=[[00aa8020, 00aa8045] [00aa8051, 00aa806c]]


void FUN_00aa8020(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 4) + 4);
  if (*(char *)(iVar1 + 0x25) == '\0') {
    FUN_00aa7830(*(undefined4 *)(iVar1 + 8));
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  *(int *)(*(int *)(in_ECX + 4) + 4) = *(int *)(in_ECX + 4);
  *(undefined4 *)*(undefined4 *)(in_ECX + 4) = *(undefined4 *)(in_ECX + 4);
  *(int *)(*(int *)(in_ECX + 4) + 8) = *(int *)(in_ECX + 4);
  *(undefined4 *)(in_ECX + 8) = 0;
  return;
}


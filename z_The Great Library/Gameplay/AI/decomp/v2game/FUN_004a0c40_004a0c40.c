// FUN_004a0c40 @ 004a0c40 body=[[004a0c40, 004a0c84]]


undefined2 FUN_004a0c40(int param_1)

{
  int iVar1;
  int in_EDX;
  int unaff_ESI;
  
  if ((((-1 < in_EDX) && (-1 < unaff_ESI)) &&
      (iVar1 = *(int *)(param_1 + 0x212c), in_EDX < *(int *)(iVar1 + 4))) &&
     (unaff_ESI < *(int *)(iVar1 + 8))) {
    return *(undefined2 *)
            (*(int *)(iVar1 + 0xc) * in_EDX + *(int *)(iVar1 + 0x18) * unaff_ESI +
            *(int *)(iVar1 + 0x20));
  }
  return 0;
}


// FUN_00705a60 @ 00705a60 body=[[00705a60, 00705aba]]


void FUN_00705a60(int param_1)

{
  undefined4 *puVar1;
  int in_EDX;
  
  puVar1 = (undefined4 *)(param_1 + 8);
  for (; in_EDX != 0; in_EDX = in_EDX + -1) {
    if (puVar1 != (undefined4 *)&DAT_00000008) {
      puVar1[-2] = CFilterWindow::vftable;
      puVar1[-1] = 0;
      *puVar1 = 0xffffffff;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1[2] = 0;
    }
    puVar1 = puVar1 + 5;
  }
  return;
}


// FUN_00894070 @ 00894070 body=[[00894070, 008940a6]]


int FUN_00894070(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = *(int *)(in_ECX + 0x20);
  piVar1 = (int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4) + 0x1a4);
  *piVar1 = *piVar1 + iVar2 / 1000;
  return iVar2 * 0x10624dd3;
}


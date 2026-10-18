// FUN_00856960 @ 00856960 body=[[00856960, 00856983]]


int FUN_00856960(void)

{
  int iVar1;
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x3c) = 1;
  iVar1 = FUN_009b7610();
  *(int *)(in_ECX + 0x30) = iVar1 % 3 + 1;
  return iVar1 / 3;
}


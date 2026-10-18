// FUN_00859590 @ 00859590 body=[[00859590, 008595d9]]


int FUN_00859590(void)

{
  code *pcVar1;
  int iVar2;
  int *in_ECX;
  
  pcVar1 = *(code **)(*in_ECX + 0xf0);
  *(undefined1 *)(in_ECX + 0xf) = 1;
  (*pcVar1)();
  FUN_00859d30();
  iVar2 = FUN_009b7610();
  in_ECX[0xc] = iVar2 % 3 + 1;
  return iVar2 / 3;
}


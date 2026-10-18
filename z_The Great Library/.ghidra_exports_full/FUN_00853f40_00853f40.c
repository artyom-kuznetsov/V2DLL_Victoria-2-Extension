// FUN_00853f40 @ 00853f40 body=[[00853f40, 00853f89]]


int FUN_00853f40(void)

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


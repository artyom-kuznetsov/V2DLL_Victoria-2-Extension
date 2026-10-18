// FUN_00827da0 @ 00827da0 body=[[00827da0, 00827def]]


void FUN_00827da0(void)

{
  code *pcVar1;
  int iVar2;
  int *in_ECX;
  
  iVar2 = DAT_00f07eb0;
  pcVar1 = *(code **)(*in_ECX + 0xf0);
  in_ECX[0x1c] = *(int *)(DAT_012588e8 + 0xb0c);
  *(undefined1 *)(in_ECX + 0xf) = 1;
  in_ECX[0x1b] = iVar2;
  (*pcVar1)();
  FUN_00859d30();
  in_ECX[0xc] = 1;
  return;
}


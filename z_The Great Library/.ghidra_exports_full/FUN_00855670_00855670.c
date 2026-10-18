// FUN_00855670 @ 00855670 body=[[00855670, 008556b6]]


void FUN_00855670(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = DAT_012588e8;
  in_ECX[0xc] = 1;
  iVar1 = *(int *)(iVar1 + 0xb0c);
  *(undefined1 *)(in_ECX + 0xf) = 1;
  in_ECX[0x1c] = iVar1;
  (**(code **)(*in_ECX + 0xf0))();
  FUN_00859d30();
  return;
}


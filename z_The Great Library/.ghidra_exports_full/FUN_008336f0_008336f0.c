// FUN_008336f0 @ 008336f0 body=[[008336f0, 00833833]]


int FUN_008336f0(void)

{
  code *pcVar1;
  int iVar2;
  int *in_ECX;
  
  pcVar1 = *(code **)(*in_ECX + 0xf0);
  *(undefined1 *)(in_ECX + 0xf) = 1;
  (*pcVar1)();
  FUN_00859d30();
  (**(code **)(*in_ECX + 0xf0))();
  FUN_00859d30();
  (**(code **)(*in_ECX + 0xf0))();
  FUN_00859d30();
  (**(code **)(*in_ECX + 0xf0))();
  FUN_00859d30();
  (**(code **)(*in_ECX + 0xf0))();
  FUN_00859d30();
  (**(code **)(*in_ECX + 0xf0))();
  FUN_00859d30();
  (**(code **)(*in_ECX + 0xf0))();
  FUN_00859d30();
  if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + in_ECX[0xe] * 4) + 0x31) != '\0') {
    iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + in_ECX[0xe] * 4);
    in_ECX[0xc] = *(int *)(iVar2 + 0x1404) + 1;
    return iVar2;
  }
  iVar2 = FUN_009b7610();
  in_ECX[0xc] = iVar2 % 3 + 1;
  return iVar2 / 3;
}


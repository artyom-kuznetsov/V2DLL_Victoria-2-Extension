// FUN_004a3d80 @ 004a3d80 body=[[004a3d80, 004a3dcf]]


int FUN_004a3d80(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_EAX;
  int in_ECX;
  undefined4 *puVar2;
  
  if (in_EAX != param_1) {
    puVar2 = in_EAX + 0xe;
    do {
      FUN_00408ed0(puVar2 + -0xe,0,0xffffffff);
      FUN_00408ed0(puVar2 + -7,0,0xffffffff);
      *(undefined4 *)(in_ECX + 0x38) = *puVar2;
      puVar1 = puVar2 + 2;
      *(undefined4 *)(in_ECX + 0x3c) = puVar2[1];
      in_ECX = in_ECX + 0x40;
      puVar2 = puVar2 + 0x10;
    } while (puVar1 != param_1);
  }
  return in_ECX;
}


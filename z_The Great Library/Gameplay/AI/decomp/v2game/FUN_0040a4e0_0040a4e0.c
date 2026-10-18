// FUN_0040a4e0 @ 0040a4e0 body=[[0040a4e0, 0040a547]]


int FUN_0040a4e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_EAX;
  int in_ECX;
  undefined4 *puVar2;
  
  if (in_EAX != param_1) {
    puVar2 = in_EAX + 0xb;
    do {
      FUN_0043a750(puVar2 + -0xb);
      FUN_00408ed0(puVar2 + -7,0,0xffffffff);
      *(undefined4 *)(in_ECX + 0x2c) = *puVar2;
      *(undefined4 *)(in_ECX + 0x30) = puVar2[1];
      *(undefined4 *)(in_ECX + 0x34) = puVar2[2];
      FUN_00408ed0(puVar2 + 3,0,0xffffffff);
      *(undefined4 *)(in_ECX + 0x54) = puVar2[10];
      puVar1 = puVar2 + 0xb;
      in_ECX = in_ECX + 0x58;
      puVar2 = puVar2 + 0x16;
    } while (puVar1 != param_1);
  }
  return in_ECX;
}


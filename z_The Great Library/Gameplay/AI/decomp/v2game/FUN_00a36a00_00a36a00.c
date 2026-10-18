// FUN_00a36a00 @ 00a36a00 body=[[00a36a00, 00a36a4c]]


int FUN_00a36a00(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_EAX;
  int in_ECX;
  undefined4 *puVar2;
  
  if (in_EAX != param_1) {
    puVar2 = in_EAX + 2;
    do {
      *(undefined4 *)(in_ECX + 4) = puVar2[-1];
      *(undefined4 *)(in_ECX + 8) = *puVar2;
      FUN_00408ed0(puVar2 + 1,0,0xffffffff);
      FUN_009beeb0(puVar2 + 8);
      puVar1 = puVar2 + 0xc;
      in_ECX = in_ECX + 0x38;
      puVar2 = puVar2 + 0xe;
    } while (puVar1 != param_1);
  }
  return in_ECX;
}


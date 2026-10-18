// FUN_0040a550 @ 0040a550 body=[[0040a550, 0040a5a7]]


undefined4 * FUN_0040a550(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  undefined4 *puVar2;
  
  if (in_EAX != param_1) {
    puVar2 = in_EAX + 9;
    do {
      *in_ECX = puVar2[-9];
      in_ECX[1] = puVar2[-8];
      FUN_00408ed0(puVar2 + -7,0,0xffffffff);
      in_ECX[9] = *puVar2;
      in_ECX[10] = puVar2[1];
      in_ECX[0xb] = puVar2[2];
      in_ECX[0xc] = puVar2[3];
      puVar1 = puVar2 + 4;
      in_ECX = in_ECX + 0xd;
      puVar2 = puVar2 + 0xd;
    } while (puVar1 != param_1);
  }
  return in_ECX;
}


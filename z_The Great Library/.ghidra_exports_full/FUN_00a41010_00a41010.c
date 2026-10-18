// FUN_00a41010 @ 00a41010 body=[[00a41010, 00a410c9]]


undefined4 * FUN_00a41010(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  undefined4 *puVar2;
  
  if (in_EAX != param_1) {
    puVar2 = in_EAX + 2;
    do {
      *in_ECX = puVar2[-2];
      in_ECX[1] = puVar2[-1];
      in_ECX[2] = *puVar2;
      in_ECX[3] = puVar2[1];
      in_ECX[4] = puVar2[2];
      in_ECX[5] = puVar2[3];
      in_ECX[6] = puVar2[4];
      in_ECX[7] = puVar2[5];
      in_ECX[8] = puVar2[6];
      in_ECX[9] = puVar2[7];
      in_ECX[10] = puVar2[8];
      *(undefined8 *)(in_ECX + 0xb) = *(undefined8 *)(puVar2 + 9);
      *(undefined8 *)(in_ECX + 0xd) = *(undefined8 *)(puVar2 + 0xb);
      *(undefined8 *)(in_ECX + 0xf) = *(undefined8 *)(puVar2 + 0xd);
      in_ECX[0x11] = puVar2[0xf];
      in_ECX[0x12] = puVar2[0x10];
      in_ECX[0x13] = puVar2[0x11];
      in_ECX[0x14] = puVar2[0x12];
      in_ECX[0x15] = puVar2[0x13];
      FUN_00408ed0(puVar2 + 0x14,0,0xffffffff);
      puVar1 = puVar2 + 0x1b;
      in_ECX = in_ECX + 0x1d;
      puVar2 = puVar2 + 0x1d;
    } while (puVar1 != param_1);
  }
  return in_ECX;
}


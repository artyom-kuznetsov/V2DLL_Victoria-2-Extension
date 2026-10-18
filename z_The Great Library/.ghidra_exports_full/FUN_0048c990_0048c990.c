// FUN_0048c990 @ 0048c990 body=[[0048c990, 0048ca67]]


void FUN_0048c990(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_EAX;
  undefined4 *puVar2;
  undefined4 *in_EDX;
  
  if (param_1 != in_EDX) {
    puVar2 = param_1 + 4;
    do {
      *in_EAX = puVar2[-4];
      in_EAX[1] = puVar2[-3];
      in_EAX[2] = puVar2[-2];
      in_EAX[3] = puVar2[-1];
      in_EAX[4] = *puVar2;
      in_EAX[5] = puVar2[1];
      in_EAX[6] = puVar2[2];
      in_EAX[7] = puVar2[3];
      in_EAX[8] = puVar2[4];
      in_EAX[9] = puVar2[5];
      in_EAX[10] = puVar2[6];
      in_EAX[0xb] = puVar2[7];
      in_EAX[0xc] = puVar2[8];
      in_EAX[0xd] = puVar2[9];
      in_EAX[0xe] = puVar2[10];
      in_EAX[0xf] = puVar2[0xb];
      in_EAX[0x10] = puVar2[0xc];
      in_EAX[0x11] = puVar2[0xd];
      in_EAX[0x12] = puVar2[0xe];
      in_EAX[0x13] = puVar2[0xf];
      in_EAX[0x14] = puVar2[0x10];
      in_EAX[0x15] = puVar2[0x11];
      in_EAX[0x16] = puVar2[0x12];
      in_EAX[0x17] = puVar2[0x13];
      in_EAX[0x18] = puVar2[0x14];
      in_EAX[0x19] = puVar2[0x15];
      in_EAX[0x1a] = puVar2[0x16];
      in_EAX[0x1b] = puVar2[0x17];
      in_EAX[0x1c] = puVar2[0x18];
      in_EAX[0x1d] = puVar2[0x19];
      puVar1 = puVar2 + 0x1a;
      in_EAX = in_EAX + 0x1e;
      puVar2 = puVar2 + 0x1e;
    } while (puVar1 != in_EDX);
  }
  return;
}


// FUN_00a8a9a0 @ 00a8a9a0 body=[[00a8a9a0, 00a8aae3]]


void FUN_00a8a9a0(SOCKET *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  closesocket(*param_1);
  uVar2 = param_1[8];
  if (uVar2 < param_1[9] * 0xe8 + uVar2) {
    puVar3 = (undefined4 *)(uVar2 + 8);
    do {
      *(undefined2 *)(puVar3 + 2) = 0;
      puVar3[0x16] = 0x20;
      puVar3[0x17] = 0x20;
      puVar3[0x1a] = 2;
      puVar3[0x1b] = 2;
      *(undefined2 *)(puVar3 + -1) = 0xffff;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[4] = 0;
      puVar3[7] = 0;
      puVar3[8] = 0;
      puVar3[9] = 0;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      puVar3[0xc] = 0;
      puVar3[0xd] = 0;
      puVar3[0xe] = 0;
      puVar3[0xf] = 0;
      puVar3[0x10] = 0;
      puVar3[0x11] = 0;
      puVar3[0x12] = 0;
      puVar3[0x13] = 0;
      puVar3[0x14] = 0;
      puVar3[0x15] = 0;
      puVar3[0x18] = 0;
      puVar3[0x19] = 0;
      puVar3[0x1c] = 5000;
      puVar3[0x1d] = 500;
      puVar3[0x1e] = 500;
      puVar3[0x1f] = 0;
      puVar3[0x20] = 0;
      puVar3[0x21] = 500;
      puVar3[0x22] = 0;
      *(undefined2 *)(puVar3 + 0x23) = *(undefined2 *)(puVar3[-2] + 0x18);
      puVar3[0x25] = 0;
      puVar3[0x26] = 0;
      puVar3[0x24] = 0x1000;
      puVar3[0x31] = 0;
      puVar3[0x32] = 0;
      puVar3[0x37] = 0;
      *(undefined8 *)(puVar3 + 0x33) = 0;
      *(undefined8 *)(puVar3 + 0x35) = 0;
      FUN_00a8a2a0();
      puVar1 = puVar3 + 0x38;
      puVar3 = puVar3 + 0x3a;
    } while (puVar1 < (undefined4 *)(param_1[9] * 0xe8 + param_1[8]));
  }
  (*(code *)PTR__free_00f071fc)(param_1[8]);
  (*(code *)PTR__free_00f071fc)(param_1);
  return;
}


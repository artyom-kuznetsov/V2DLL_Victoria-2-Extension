// FUN_004c2bf0 @ 004c2bf0 body=[[004c2bf0, 004c2cbe]]


int FUN_004c2bf0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *in_EAX;
  undefined4 *puVar2;
  
  if (in_EAX != param_1) {
    puVar2 = in_EAX + 2;
    do {
      *(undefined4 *)(param_2 + 4) = puVar2[-1];
      *(undefined4 *)(param_2 + 8) = *puVar2;
      *(undefined4 *)(param_2 + 0xc) = puVar2[1];
      FUN_004c01c0(puVar2 + 2);
      *(undefined4 *)(param_2 + 0x80) = puVar2[0x1e];
      *(undefined4 *)(param_2 + 0x84) = puVar2[0x1f];
      *(undefined4 *)(param_2 + 0x88) = puVar2[0x20];
      *(undefined4 *)(param_2 + 0x8c) = puVar2[0x21];
      *(undefined4 *)(param_2 + 0x90) = puVar2[0x22];
      *(undefined4 *)(param_2 + 0x94) = puVar2[0x23];
      *(undefined4 *)(param_2 + 0x98) = puVar2[0x24];
      *(undefined4 *)(param_2 + 0x9c) = puVar2[0x25];
      *(undefined4 *)(param_2 + 0xa0) = puVar2[0x26];
      *(undefined4 *)(param_2 + 0xa4) = puVar2[0x27];
      *(undefined1 *)(param_2 + 0xa8) = *(undefined1 *)(puVar2 + 0x28);
      puVar1 = puVar2 + 0x2a;
      param_2 = param_2 + 0xb0;
      puVar2 = puVar2 + 0x2c;
    } while (puVar1 != param_1);
  }
  return param_2;
}


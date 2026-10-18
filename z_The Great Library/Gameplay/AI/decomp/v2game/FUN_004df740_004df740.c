// FUN_004df740 @ 004df740 body=[[004df740, 004df782]]


void FUN_004df740(undefined4 *param_1)

{
  undefined4 *puVar1;
  int in_EAX;
  undefined4 *puVar2;
  undefined4 *in_EDX;
  
  if (param_1 != in_EDX) {
    puVar2 = param_1 + 2;
    do {
      *(undefined4 *)(in_EAX + 4) = puVar2[-1];
      *(undefined4 *)(in_EAX + 8) = *puVar2;
      *(undefined4 *)(in_EAX + 0x10) = puVar2[2];
      *(undefined4 *)(in_EAX + 0x14) = puVar2[3];
      *(undefined4 *)(in_EAX + 0x18) = puVar2[4];
      *(undefined4 *)(in_EAX + 0x1c) = puVar2[5];
      puVar1 = puVar2 + 6;
      in_EAX = in_EAX + 0x20;
      puVar2 = puVar2 + 8;
    } while (puVar1 != in_EDX);
  }
  return;
}


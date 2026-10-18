// FUN_004ca0f0 @ 004ca0f0 body=[[004ca0f0, 004ca0fc] [004ca100, 004ca148]]


void FUN_004ca0f0(void)

{
  undefined4 *puVar1;
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *unaff_ESI;
  
  if (in_ECX != unaff_ESI) {
    puVar3 = in_EAX + 8;
    puVar2 = in_ECX + 8;
    do {
      if (in_EAX != (undefined4 *)0x0) {
        *in_EAX = puVar2[-8];
        puVar3[-7] = puVar2[-7];
        puVar3[-6] = puVar2[-6];
        puVar3[-5] = puVar2[-5];
        puVar3[-4] = puVar2[-4];
        puVar3[-3] = puVar2[-3];
        puVar3[-2] = puVar2[-2];
        puVar3[-1] = puVar2[-1];
        *puVar3 = *puVar2;
      }
      puVar1 = puVar2 + 1;
      in_EAX = in_EAX + 9;
      puVar3 = puVar3 + 9;
      puVar2 = puVar2 + 9;
    } while (puVar1 != unaff_ESI);
  }
  return;
}


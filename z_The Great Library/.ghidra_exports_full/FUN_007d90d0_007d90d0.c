// FUN_007d90d0 @ 007d90d0 body=[[007d90d0, 007d90dc] [007d90e0, 007d9122]]


void FUN_007d90d0(void)

{
  undefined2 *puVar1;
  undefined2 *in_EAX;
  undefined2 *in_ECX;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *unaff_ESI;
  
  if (in_ECX != unaff_ESI) {
    puVar3 = in_EAX + 5;
    puVar2 = in_ECX + 5;
    do {
      if (in_EAX != (undefined2 *)0x0) {
        *in_EAX = puVar2[-5];
        puVar3[-4] = puVar2[-4];
        puVar3[-3] = puVar2[-3];
        puVar3[-2] = puVar2[-2];
        puVar3[-1] = puVar2[-1];
        *puVar3 = *puVar2;
      }
      puVar1 = puVar2 + 1;
      in_EAX = in_EAX + 6;
      puVar3 = puVar3 + 6;
      puVar2 = puVar2 + 6;
    } while (puVar1 != unaff_ESI);
  }
  return;
}


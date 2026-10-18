// FUN_0080dfc0 @ 0080dfc0 body=[[0080dfc0, 0080dfe6]]


void FUN_0080dfc0(void)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  undefined4 *in_ECX;
  undefined4 *puVar2;
  undefined4 *unaff_ESI;
  
  if (in_ECX != unaff_ESI) {
    puVar1 = in_EAX;
    puVar2 = in_ECX;
    do {
      *puVar1 = *puVar2;
      puVar1[1] = *(undefined4 *)((int)in_ECX + (4 - (int)in_EAX) + (int)puVar1);
      puVar2 = puVar2 + 2;
      puVar1 = puVar1 + 2;
    } while (puVar2 != unaff_ESI);
  }
  return;
}


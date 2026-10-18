// FUN_0054cb60 @ 0054cb60 body=[[0054cb60, 0054cb9d]]


void FUN_0054cb60(void)

{
  undefined4 *puVar1;
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  undefined4 *puVar2;
  undefined4 *unaff_ESI;
  
  if (in_ECX != unaff_ESI) {
    puVar2 = in_ECX + 2;
    do {
      if (in_EAX != (undefined4 *)0x0) {
        in_EAX[1] = puVar2[-1];
        *in_EAX = CTradeSetting::vftable;
        in_EAX[2] = *puVar2;
        in_EAX[3] = puVar2[1];
        *(undefined1 *)(in_EAX + 4) = *(undefined1 *)(puVar2 + 2);
        *(undefined1 *)((int)in_EAX + 0x11) = *(undefined1 *)((int)puVar2 + 9);
      }
      puVar1 = puVar2 + 4;
      in_EAX = in_EAX + 6;
      puVar2 = puVar2 + 6;
    } while (puVar1 != unaff_ESI);
  }
  return;
}


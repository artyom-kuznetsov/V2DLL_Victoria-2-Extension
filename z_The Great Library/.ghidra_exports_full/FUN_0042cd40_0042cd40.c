// FUN_0042cd40 @ 0042cd40 body=[[0042cd40, 0042cdb8]]


void FUN_0042cd40(void)

{
  undefined4 *puVar1;
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  undefined4 *puVar2;
  undefined4 *unaff_ESI;
  
  if (in_ECX != unaff_ESI) {
    puVar2 = in_ECX + 3;
    do {
      if (in_EAX != (undefined4 *)0x0) {
        in_EAX[1] = 0x18d;
        *in_EAX = CWarGoal::vftable;
        in_EAX[2] = puVar2[-1];
        in_EAX[3] = *puVar2;
        in_EAX[4] = puVar2[1];
        in_EAX[5] = puVar2[2];
        in_EAX[6] = puVar2[3];
        in_EAX[7] = puVar2[4];
        in_EAX[8] = puVar2[5];
        in_EAX[9] = puVar2[6];
        in_EAX[10] = puVar2[7];
        in_EAX[0xb] = puVar2[8];
        in_EAX[0xc] = puVar2[9];
        in_EAX[0xd] = puVar2[10];
        *(undefined1 *)(in_EAX + 0xe) = *(undefined1 *)(puVar2 + 0xb);
        in_EAX[0xf] = puVar2[0xc];
      }
      puVar1 = puVar2 + 0xd;
      in_EAX = in_EAX + 0x10;
      puVar2 = puVar2 + 0x10;
    } while (puVar1 != unaff_ESI);
  }
  return;
}


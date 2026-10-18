// FUN_00706210 @ 00706210 body=[[00706210, 00706245]]


void FUN_00706210(void)

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
        *in_EAX = CFilterWindow::vftable;
        in_EAX[1] = puVar2[-1];
        in_EAX[2] = *puVar2;
        *(undefined1 *)(in_EAX + 3) = *(undefined1 *)(puVar2 + 1);
        in_EAX[4] = puVar2[2];
      }
      puVar1 = puVar2 + 3;
      in_EAX = in_EAX + 5;
      puVar2 = puVar2 + 5;
    } while (puVar1 != unaff_ESI);
  }
  return;
}


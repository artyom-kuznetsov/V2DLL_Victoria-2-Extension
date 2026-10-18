// FUN_00559e50 @ 00559e50 body=[[00559e50, 00559eee]]


void FUN_00559e50(void)

{
  int in_EAX;
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_ESI;
  
  while( true ) {
    iVar2 = in_EAX * 2 + 2;
    if (in_ECX <= iVar2) break;
    iVar4 = *(int *)(iVar2 * 0x10 + -4 + unaff_ESI);
    iVar3 = iVar2 * 0x10 + unaff_ESI;
    if ((iVar4 <= *(int *)(iVar3 + 0xc)) &&
       ((iVar4 < *(int *)(iVar3 + 0xc) || (*(uint *)(iVar3 + -8) < *(uint *)(iVar3 + 8))))) {
      iVar2 = in_EAX * 2 + 1;
    }
    iVar4 = iVar2 * 0x10 + unaff_ESI;
    puVar1 = (undefined4 *)(in_EAX * 0x10 + unaff_ESI);
    *puVar1 = *(undefined4 *)(iVar2 * 0x10 + unaff_ESI);
    puVar1[1] = *(undefined4 *)(iVar4 + 4);
    puVar1[2] = *(undefined4 *)(iVar4 + 8);
    puVar1[3] = *(undefined4 *)(iVar4 + 0xc);
    in_EAX = iVar2;
  }
  if (iVar2 == in_ECX) {
    iVar2 = unaff_ESI + -0x10 + in_ECX * 0x10;
    puVar1 = (undefined4 *)(in_EAX * 0x10 + unaff_ESI);
    *puVar1 = *(undefined4 *)(unaff_ESI + -0x10 + in_ECX * 0x10);
    puVar1[1] = *(undefined4 *)(iVar2 + 4);
    puVar1[2] = *(undefined4 *)(iVar2 + 8);
    puVar1[3] = *(undefined4 *)(iVar2 + 0xc);
  }
  FUN_0055a5c0();
  return;
}


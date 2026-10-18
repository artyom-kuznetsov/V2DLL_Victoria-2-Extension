// FUN_006125c0 @ 006125c0 body=[[006125c0, 0061266b]]


void FUN_006125c0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int in_EAX;
  int in_ECX;
  int iVar5;
  int unaff_ESI;
  
  while( true ) {
    iVar5 = in_EAX * 2 + 2;
    if (in_ECX <= iVar5) break;
    iVar4 = *(int *)(unaff_ESI + -0xc + iVar5 * 0x18);
    iVar3 = *(int *)(unaff_ESI + 0xc + iVar5 * 0x18);
    iVar1 = unaff_ESI + iVar5 * 0x18;
    if ((iVar4 <= iVar3) && ((iVar4 < iVar3 || (*(uint *)(iVar1 + -0x10) < *(uint *)(iVar1 + 8)))))
    {
      iVar5 = in_EAX * 2 + 1;
    }
    iVar1 = unaff_ESI + iVar5 * 0x18;
    *(undefined4 *)(unaff_ESI + in_EAX * 0x18) = *(undefined4 *)(unaff_ESI + iVar5 * 0x18);
    iVar3 = unaff_ESI + in_EAX * 0x18;
    *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar1 + 8);
    *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
    *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar1 + 0x10);
    *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar1 + 0x14);
    in_EAX = iVar5;
  }
  if (iVar5 == in_ECX) {
    puVar2 = (undefined4 *)(unaff_ESI + in_EAX * 0x18);
    iVar5 = unaff_ESI + -0x18 + in_ECX * 0x18;
    *puVar2 = *(undefined4 *)(unaff_ESI + -0x18 + in_ECX * 0x18);
    puVar2[2] = *(undefined4 *)(iVar5 + 8);
    puVar2[3] = *(undefined4 *)(iVar5 + 0xc);
    puVar2[4] = *(undefined4 *)(iVar5 + 0x10);
    puVar2[5] = *(undefined4 *)(iVar5 + 0x14);
  }
  FUN_00612ec0();
  return;
}


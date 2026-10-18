// FUN_00855400 @ 00855400 body=[[00855400, 00855487]]


void FUN_00855400(void)

{
  int iVar1;
  undefined4 *puVar2;
  int in_EAX;
  int iVar3;
  int in_ECX;
  int unaff_ESI;
  
  while( true ) {
    iVar3 = in_ECX * 2 + 2;
    if (unaff_ESI <= iVar3) break;
    if (*(int *)(in_EAX + -0xc + iVar3 * 0xc) < *(int *)(in_EAX + iVar3 * 0xc)) {
      iVar3 = in_ECX * 2 + 1;
    }
    iVar1 = in_EAX + iVar3 * 0xc;
    puVar2 = (undefined4 *)(in_EAX + in_ECX * 0xc);
    *puVar2 = *(undefined4 *)(in_EAX + iVar3 * 0xc);
    puVar2[1] = *(undefined4 *)(iVar1 + 4);
    puVar2[2] = *(undefined4 *)(iVar1 + 8);
    in_ECX = iVar3;
  }
  if (iVar3 == unaff_ESI) {
    iVar3 = in_EAX + -0xc + unaff_ESI * 0xc;
    puVar2 = (undefined4 *)(in_EAX + in_ECX * 0xc);
    *puVar2 = *(undefined4 *)(in_EAX + -0xc + unaff_ESI * 0xc);
    puVar2[1] = *(undefined4 *)(iVar3 + 4);
    puVar2[2] = *(undefined4 *)(iVar3 + 8);
  }
  FUN_00855490();
  return;
}


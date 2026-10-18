// FUN_00612670 @ 00612670 body=[[00612670, 006126aa]]


void FUN_00612670(void)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  int unaff_ESI;
  
  if (unaff_ESI != in_ECX) {
    puVar1 = in_EAX;
    iVar3 = in_ECX;
    do {
      puVar2 = puVar1 + -6;
      iVar4 = iVar3 + -0x18;
      *puVar2 = *(undefined4 *)(iVar3 + -0x18);
      puVar1[-4] = *(undefined4 *)((in_ECX - (int)in_EAX) + 8 + (int)puVar2);
      puVar1[-3] = *(undefined4 *)((in_ECX - (int)in_EAX) + 0xc + (int)puVar2);
      puVar1[-2] = *(undefined4 *)(iVar3 + -8);
      puVar1[-1] = *(undefined4 *)(iVar3 + -4);
      puVar1 = puVar2;
      iVar3 = iVar4;
    } while (iVar4 != unaff_ESI);
  }
  return;
}


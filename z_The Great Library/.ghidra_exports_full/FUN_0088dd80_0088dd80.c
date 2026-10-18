// FUN_0088dd80 @ 0088dd80 body=[[0088dd80, 0088de5c]]


void FUN_0088dd80(void)

{
  char cVar1;
  int in_EAX;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  undefined4 uVar4;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = *(undefined4 *)(in_EAX + 0x20);
  cVar1 = *(char *)(in_EAX + 0x1c);
  unaff_ESI[1] = *(undefined4 *)(in_EAX + 0x24);
  if (cVar1 == '\0') {
    if (*(char *)(in_EAX + 0x1d) == '\0') {
      uVar4 = *(undefined4 *)(in_EAX + 0x20);
      uVar2 = *(undefined4 *)(in_EAX + 0x24);
    }
    else {
      iVar3 = *(int *)(in_ECX + 0x24);
      if (*(int *)(iVar3 + 0x30) == 0) {
        iVar3 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar3 + 0x34) * 4);
        uVar4 = *(undefined4 *)(iVar3 + 0x128);
        uVar2 = *(undefined4 *)(iVar3 + 300);
      }
      else {
        uVar4 = *(undefined4 *)(iVar3 + 0x2c);
        uVar2 = *(undefined4 *)(iVar3 + 0x30);
      }
    }
  }
  else {
    iVar3 = *(int *)(in_ECX + 0x24);
    if (*(int *)(iVar3 + 0xc) == 0) {
      iVar3 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar3 + 0x10) * 4);
      uVar4 = *(undefined4 *)(iVar3 + 0x128);
      uVar2 = *(undefined4 *)(iVar3 + 300);
    }
    else {
      uVar4 = *(undefined4 *)(iVar3 + 8);
      uVar2 = *(undefined4 *)(iVar3 + 0xc);
    }
  }
  *unaff_ESI = uVar4;
  unaff_ESI[1] = uVar2;
  if ((((char)uVar4 == 'R') && (*(char *)((int)unaff_ESI + 1) == 'E')) &&
     (*(char *)((int)unaff_ESI + 2) == 'B')) {
    iVar3 = DAT_01258a94;
    if (*(uint *)(in_ECX + 0x38) < 0x1269) {
      iVar3 = DAT_01258a98;
    }
    if (iVar3 != 0) {
      iVar3 = FUN_009c1d40(*(uint *)(in_ECX + 0x38),*(undefined4 *)(in_ECX + 0x3c));
      if (iVar3 != 0) {
        uVar4 = *(undefined4 *)(iVar3 + 0x48);
        *unaff_ESI = *(undefined4 *)(iVar3 + 0x44);
        unaff_ESI[1] = uVar4;
      }
    }
  }
  return;
}


// FUN_004d61d0 @ 004d61d0  (requested 004D61D0, first bytes: 56 8B F0 8B 47 04 3B F0)


void FUN_004d61d0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_EAX;
  int iVar3;
  uint *unaff_EDI;
  
  puVar1 = (undefined4 *)unaff_EDI[1];
  if ((in_EAX < puVar1) && ((undefined4 *)*unaff_EDI <= in_EAX)) {
    iVar3 = (int)in_EAX - (int)*unaff_EDI >> 3;
    if (puVar1 == (undefined4 *)unaff_EDI[2]) {
      FUN_00810820();
    }
    puVar1 = (undefined4 *)unaff_EDI[1];
    if (puVar1 != (undefined4 *)0x0) {
      uVar2 = *unaff_EDI;
      *puVar1 = *(undefined4 *)(uVar2 + iVar3 * 8);
      puVar1[1] = *(undefined4 *)(uVar2 + 4 + iVar3 * 8);
      unaff_EDI[1] = unaff_EDI[1] + 8;
      return;
    }
  }
  else {
    if (puVar1 == (undefined4 *)unaff_EDI[2]) {
      FUN_00810820();
    }
    puVar1 = (undefined4 *)unaff_EDI[1];
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *in_EAX;
      puVar1[1] = in_EAX[1];
    }
  }
  unaff_EDI[1] = unaff_EDI[1] + 8;
  return;
}


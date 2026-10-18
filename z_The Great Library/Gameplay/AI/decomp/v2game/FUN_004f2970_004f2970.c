// FUN_004f2970 @ 004f2970 body=[[004f2970, 004f29e8]]


void FUN_004f2970(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint in_EAX;
  int iVar4;
  uint *unaff_EDI;
  
  uVar1 = unaff_EDI[1];
  if ((in_EAX < uVar1) && (uVar2 = *unaff_EDI, uVar2 <= in_EAX)) {
    if (uVar1 == unaff_EDI[2]) {
      FUN_004f29f0();
    }
    puVar3 = (undefined4 *)unaff_EDI[1];
    iVar4 = (in_EAX - uVar2 & 0xfffffff0) + *unaff_EDI;
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[1] = *(undefined4 *)(iVar4 + 4);
      *puVar3 = CPopEmployment::vftable;
      puVar3[2] = *(undefined4 *)(iVar4 + 8);
      puVar3[3] = *(undefined4 *)(iVar4 + 0xc);
      unaff_EDI[1] = unaff_EDI[1] + 0x10;
      return;
    }
  }
  else {
    if (uVar1 == unaff_EDI[2]) {
      FUN_004f29f0();
    }
    puVar3 = (undefined4 *)unaff_EDI[1];
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[1] = *(undefined4 *)(in_EAX + 4);
      *puVar3 = CPopEmployment::vftable;
      puVar3[2] = *(undefined4 *)(in_EAX + 8);
      puVar3[3] = *(undefined4 *)(in_EAX + 0xc);
    }
  }
  unaff_EDI[1] = unaff_EDI[1] + 0x10;
  return;
}


// FUN_0099e960 @ 0099e960 body=[[0099e960, 0099e9eb]]


void FUN_0099e960(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint in_EAX;
  uint *unaff_EDI;
  
  uVar2 = unaff_EDI[1];
  if ((in_EAX < uVar2) && (uVar3 = *unaff_EDI, uVar3 <= in_EAX)) {
    if (uVar2 == unaff_EDI[2]) {
      FUN_0099eab0();
    }
    iVar1 = *unaff_EDI + ((int)(in_EAX - uVar3) / 0xc) * 0xc;
    puVar4 = (undefined4 *)unaff_EDI[1];
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = &PTR_FUN_00e384bc;
      puVar4[1] = *(undefined4 *)(iVar1 + 4);
      *puVar4 = &PTR_FUN_00e40cd8;
      puVar4[2] = *(undefined4 *)(iVar1 + 8);
      unaff_EDI[1] = unaff_EDI[1] + 0xc;
      return;
    }
  }
  else {
    if (uVar2 == unaff_EDI[2]) {
      FUN_0099eab0();
    }
    puVar4 = (undefined4 *)unaff_EDI[1];
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = &PTR_FUN_00e384bc;
      puVar4[1] = *(undefined4 *)(in_EAX + 4);
      *puVar4 = &PTR_FUN_00e40cd8;
      puVar4[2] = *(undefined4 *)(in_EAX + 8);
    }
  }
  unaff_EDI[1] = unaff_EDI[1] + 0xc;
  return;
}


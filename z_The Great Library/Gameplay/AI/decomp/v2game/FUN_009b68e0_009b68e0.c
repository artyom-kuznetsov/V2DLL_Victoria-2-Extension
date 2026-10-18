// FUN_009b68e0 @ 009b68e0 body=[[009b68e0, 009b699a]]


void FUN_009b68e0(void)

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
      FUN_009b6a00();
    }
    iVar1 = *unaff_EDI + ((int)(in_EAX - uVar3) / 0x1c) * 0x1c;
    puVar4 = (undefined4 *)unaff_EDI[1];
    if (puVar4 != (undefined4 *)0x0) {
      puVar4[1] = *(undefined4 *)(iVar1 + 4);
      *puVar4 = CColor::vftable;
      *(undefined8 *)(puVar4 + 2) = *(undefined8 *)(iVar1 + 8);
      *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(iVar1 + 0x10);
      *(undefined1 *)(puVar4 + 6) = *(undefined1 *)(iVar1 + 0x18);
      unaff_EDI[1] = unaff_EDI[1] + 0x1c;
      return;
    }
  }
  else {
    if (uVar2 == unaff_EDI[2]) {
      FUN_009b6a00();
    }
    puVar4 = (undefined4 *)unaff_EDI[1];
    if (puVar4 != (undefined4 *)0x0) {
      puVar4[1] = *(undefined4 *)(in_EAX + 4);
      *puVar4 = CColor::vftable;
      *(undefined8 *)(puVar4 + 2) = *(undefined8 *)(in_EAX + 8);
      *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(in_EAX + 0x10);
      *(undefined1 *)(puVar4 + 6) = *(undefined1 *)(in_EAX + 0x18);
    }
  }
  unaff_EDI[1] = unaff_EDI[1] + 0x1c;
  return;
}


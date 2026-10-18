// FUN_0077ccf0 @ 0077ccf0 body=[[0077ccf0, 0077cd28]]


uint FUN_0077ccf0(void)

{
  uint uVar1;
  int iVar2;
  int in_EDX;
  uint *puVar3;
  uint unaff_ESI;
  
  if (*(int *)(in_EDX + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(in_EDX + 4) + 0x18;
  }
  if ((((unaff_ESI != uVar1) && (unaff_ESI != *(uint *)(in_EDX + 0x50))) &&
      (unaff_ESI != *(uint *)(in_EDX + 0x58))) && (unaff_ESI != *(uint *)(in_EDX + 0x5c))) {
    uVar1 = uVar1 & 0xffffff00;
    iVar2 = 0;
    puVar3 = (uint *)(in_EDX + 8);
    while (unaff_ESI != *puVar3) {
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
      if (5 < iVar2) {
        return uVar1;
      }
    }
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}


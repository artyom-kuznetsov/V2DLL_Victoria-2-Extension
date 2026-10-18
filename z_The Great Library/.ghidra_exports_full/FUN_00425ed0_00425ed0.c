// FUN_00425ed0 @ 00425ed0 body=[[00425ed0, 00425f73]]


uint FUN_00425ed0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int unaff_ESI;
  
  iVar3 = FUN_00425a40();
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != *(int *)(iVar3 + 4)) {
    uVar4 = FUN_00425ac0();
    if (iVar1 != *(int *)(uVar4 + 4)) goto LAB_00425f6a;
  }
  uVar2 = *(uint *)(unaff_ESI + 0x50);
  uVar4 = *(uint *)(unaff_ESI + 0x4c);
  if (uVar4 != uVar2) {
    do {
      if (*(int *)(uVar4 + 4) == *(int *)(param_2 + 4)) break;
      uVar4 = uVar4 + 8;
    } while (uVar4 != uVar2);
    if (uVar4 != uVar2) {
      uVar2 = *(uint *)(unaff_ESI + 0x30);
      uVar4 = *(uint *)(unaff_ESI + 0x2c);
      if (uVar4 != uVar2) {
        do {
          if (*(int *)(uVar4 + 4) == *(int *)(param_2 + 4)) break;
          uVar4 = uVar4 + 8;
        } while (uVar4 != uVar2);
        if (uVar4 != uVar2) goto LAB_00425f6a;
      }
      uVar2 = *(uint *)(unaff_ESI + 0x40);
      uVar4 = *(uint *)(unaff_ESI + 0x3c);
      if (uVar4 != uVar2) {
        do {
          if (*(int *)(uVar4 + 4) == *(int *)(param_2 + 4)) break;
          uVar4 = uVar4 + 8;
        } while (uVar4 != uVar2);
        if (uVar4 != uVar2) goto LAB_00425f6a;
      }
      return CONCAT31((int3)(uVar4 >> 8),1);
    }
  }
LAB_00425f6a:
  return uVar4 & 0xffffff00;
}


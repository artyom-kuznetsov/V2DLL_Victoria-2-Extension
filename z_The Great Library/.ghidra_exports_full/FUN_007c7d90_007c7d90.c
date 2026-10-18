// FUN_007c7d90 @ 007c7d90 body=[[007c7d90, 007c7e08]]


void FUN_007c7d90(void)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int in_ECX;
  uint *unaff_ESI;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  uVar5 = 0;
  iVar2 = *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 8) >> 3;
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  if (0 < iVar2) {
    puVar3 = *(uint **)(in_ECX + 8);
    do {
      uVar6 = __alldiv(*puVar3 << 0xf,puVar3[1] << 0xf | *puVar3 >> 0x11,0x320000,0);
      lVar7 = __allmul(uVar6,uVar5 << 0xf,((int)uVar5 >> 0x1f) << 0xf | uVar5 >> 0x11);
      uVar4 = (uint)(lVar7 >> 0xf);
      uVar1 = *unaff_ESI;
      *unaff_ESI = *unaff_ESI + uVar4;
      unaff_ESI[1] = unaff_ESI[1] + (int)((ulonglong)(lVar7 >> 0xf) >> 0x20) +
                     (uint)CARRY4(uVar1,uVar4);
      uVar5 = uVar5 + 1;
      puVar3 = puVar3 + 2;
    } while ((int)uVar5 < iVar2);
  }
  return;
}


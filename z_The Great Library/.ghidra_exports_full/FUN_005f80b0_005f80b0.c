// FUN_005f80b0 @ 005f80b0 body=[[005f80b0, 005f8102]]


void FUN_005f80b0(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *unaff_ESI;
  int unaff_EDI;
  undefined8 uVar6;
  
  uVar5 = *(int *)(*(int *)(unaff_EDI + 0xbcc) + 0x28c) + *(int *)(unaff_EDI + 0xea0);
  uVar6 = __alldiv(uVar5 * 0x40000000,((int)uVar5 >> 0x1f) << 0x1e | uVar5 >> 2,0x1f40000,0);
  uVar1 = *(uint *)(unaff_EDI + 0x1a0);
  iVar2 = *(int *)(unaff_EDI + 0x1a4);
  iVar3 = *(int *)(unaff_EDI + 0x19c);
  *unaff_ESI = uVar1 + (uint)uVar6;
  uVar4 = *(uint *)(unaff_EDI + 0x198);
  uVar5 = *unaff_ESI;
  *unaff_ESI = *unaff_ESI + uVar4;
  unaff_ESI[1] = iVar2 + (int)((ulonglong)uVar6 >> 0x20) + (uint)CARRY4(uVar1,(uint)uVar6);
  unaff_ESI[1] = unaff_ESI[1] + iVar3 + (uint)CARRY4(uVar5,uVar4);
  return;
}


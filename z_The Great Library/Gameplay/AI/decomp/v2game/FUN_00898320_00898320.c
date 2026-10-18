// FUN_00898320 @ 00898320 body=[[00898320, 008983c9]]


void FUN_00898320(int param_1)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int in_ECX;
  undefined8 uVar7;
  
  iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
  uVar5 = *(uint *)(in_ECX + 0x20);
  uVar7 = __alldiv(uVar5 << 0x1e,((int)uVar5 >> 0x1f) << 0x1e | uVar5 >> 2,0x1f40000,0);
  iVar6 = *(int *)(*(int *)(in_ECX + 0x24) + 8);
  bVar3 = *(byte *)(iVar4 + 0x118c + iVar6);
  if (bVar3 == 0) {
    *(char *)(iVar4 + 0x118c + iVar6) =
         (char)(*(int *)(iVar4 + 0x11d0) - *(int *)(iVar4 + 0x11cc) >> 3);
    FUN_00423920();
  }
  else {
    iVar6 = *(int *)(iVar4 + 0x11cc);
    puVar2 = (uint *)(iVar6 + (uint)bVar3 * 8);
    uVar5 = *puVar2;
    *puVar2 = *puVar2 + (uint)uVar7;
    piVar1 = (int *)(iVar6 + (uint)bVar3 * 8 + 4);
    *piVar1 = *piVar1 + (int)((ulonglong)uVar7 >> 0x20) + (uint)CARRY4(uVar5,(uint)uVar7);
  }
  FUN_0047d9e0(iVar4 + 0x1184,0xc34f8000,0);
  return;
}


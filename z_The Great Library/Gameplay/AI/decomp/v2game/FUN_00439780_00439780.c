// FUN_00439780 @ 00439780 body=[[00439780, 0043987e]]


void FUN_00439780(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int unaff_ESI;
  uint *unaff_EDI;
  longlong lVar9;
  longlong lVar10;
  
  iVar3 = *(int *)(unaff_ESI + 8);
  uVar4 = *(uint *)(*(int *)(iVar3 + 0xa60) + 0xa8);
  lVar9 = __alldiv(uVar4 << 0x1e,((int)uVar4 >> 0x1f) << 0x1e | uVar4 >> 2,0x1f40000,0);
  uVar4 = *(uint *)(*(int *)(DAT_012586dc + 0x40) + 0xc);
  lVar10 = __alldiv(uVar4 << 0x1e,((int)uVar4 >> 0x1f) << 0x1e | uVar4 >> 2,0x1f40000,0);
  lVar9 = __allmul(lVar9 + lVar10 + *(longlong *)(*(int *)(iVar3 + 0xbcc) + 0xd8),param_2,param_3);
  lVar9 = lVar9 >> 0xf;
  uVar8 = (uint)lVar9;
  iVar7 = (int)((ulonglong)lVar9 >> 0x20);
  lVar9 = __allmul(*(undefined4 *)(unaff_ESI + 0x10),*(undefined4 *)(unaff_ESI + 0x14),lVar9);
  iVar3 = *(int *)(*(int *)(param_1 + 0x68) + 0x28);
  *(longlong *)unaff_EDI = lVar9 >> 0xf;
  iVar5 = *(int *)(unaff_ESI + 0x28 + DAT_012586e4 * 0x10);
  puVar2 = (uint *)(iVar5 + iVar3 * 8);
  uVar4 = *puVar2;
  *puVar2 = *puVar2 + uVar8;
  piVar1 = (int *)(iVar5 + iVar3 * 8 + 4);
  *piVar1 = *piVar1 + iVar7 + (uint)CARRY4(uVar4,uVar8);
  puVar2 = (uint *)(*(int *)(unaff_ESI + 0x18) + *(int *)(*(int *)(param_1 + 0x68) + 0x28) * 8);
  uVar6 = *unaff_EDI;
  uVar4 = *puVar2;
  *puVar2 = *puVar2 + uVar6;
  puVar2[1] = puVar2[1] + unaff_EDI[1] + (uint)CARRY4(uVar4,uVar6);
  iVar3 = DAT_012586e4;
  puVar2 = (uint *)(unaff_ESI + 0x48 + DAT_012586e4 * 8);
  uVar4 = *puVar2;
  *puVar2 = *puVar2 + uVar8;
  piVar1 = (int *)(unaff_ESI + iVar3 * 8 + 0x4c);
  *piVar1 = *piVar1 + iVar7 + (uint)CARRY4(uVar4,uVar8);
  return;
}


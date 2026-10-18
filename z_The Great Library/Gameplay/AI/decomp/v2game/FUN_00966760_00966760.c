// FUN_00966760 @ 00966760 body=[[00966760, 00966874]]


void FUN_00966760(int param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint *unaff_ESI;
  int unaff_EDI;
  longlong lVar9;
  
  iVar3 = *(int *)(param_1 + 0x1d4);
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0xb0) != 0)) {
    uVar8 = (uint)*(byte *)(*(int *)(unaff_EDI + 8) + 0x60 + iVar3);
    iVar4 = *(int *)(*(int *)(iVar3 + 0xa0) + 4 + uVar8 * 8);
    if ((-1 < iVar4) && ((0 < iVar4 || (*(int *)(*(int *)(iVar3 + 0xa0) + uVar8 * 8) != 0)))) {
      puVar1 = (uint *)(*(int *)(*(int *)(param_1 + 0x1d4) + 0xa0) +
                       (uint)*(byte *)(*(int *)(unaff_EDI + 8) + 0x60 + *(int *)(param_1 + 0x1d4)) *
                       8);
      uVar6 = *puVar1;
      uVar5 = puVar1[1];
      uVar8 = *unaff_ESI;
      *unaff_ESI = *unaff_ESI + uVar6;
      unaff_ESI[1] = unaff_ESI[1] + uVar5 + (uint)CARRY4(uVar8,uVar6);
      iVar3 = *(int *)(param_1 + 0x1d4);
      puVar2 = (undefined4 *)
               (*(int *)(iVar3 + 0xa0) + (uint)*(byte *)(*(int *)(unaff_EDI + 8) + 0x60 + iVar3) * 8
               );
      lVar9 = __allmul(*(undefined4 *)(iVar3 + 200),*(undefined4 *)(iVar3 + 0xcc),*puVar2,puVar2[1])
      ;
      uVar6 = (uint)(lVar9 >> 0xf);
      puVar1 = unaff_ESI + 2;
      uVar8 = *puVar1;
      *puVar1 = *puVar1 + uVar6;
      unaff_ESI[3] = unaff_ESI[3] + (int)((ulonglong)(lVar9 >> 0xf) >> 0x20) +
                     (uint)CARRY4(uVar8,uVar6);
      puVar2 = (undefined4 *)
               (*(int *)(*(int *)(param_1 + 0x1d4) + 0xa0) +
               (uint)*(byte *)(*(int *)(unaff_EDI + 8) + 0x60 + *(int *)(param_1 + 0x1d4)) * 8);
      uVar8 = (uint)*(byte *)(*(int *)(unaff_EDI + 8) + 8 + *(int *)(param_1 + 0x1d4));
      iVar3 = *(int *)(*(int *)(param_1 + 0x1d4) + 0x48);
      puVar7 = (uint *)FUN_0048bfc0(*(undefined4 *)(iVar3 + uVar8 * 8),
                                    *(undefined4 *)(iVar3 + 4 + uVar8 * 8),*puVar2,puVar2[1]);
      uVar6 = *puVar7;
      puVar1 = unaff_ESI + 4;
      uVar8 = *puVar1;
      *puVar1 = *puVar1 + uVar6;
      unaff_ESI[5] = unaff_ESI[5] + puVar7[1] + (uint)CARRY4(uVar8,uVar6);
    }
  }
  return;
}


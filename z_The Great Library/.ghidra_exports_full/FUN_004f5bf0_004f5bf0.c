// FUN_004f5bf0 @ 004f5bf0 body=[[004f5bf0, 004f5c4c] [004f5c50, 004f5cf7]]


void FUN_004f5bf0(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int unaff_EDI;
  undefined8 uVar8;
  uint local_18;
  int local_14;
  
  local_18 = *(uint *)(unaff_EDI + 0x20);
  local_14 = *(int *)(unaff_EDI + 0x24);
  if ((-1 < local_14) && ((0 < local_14 || (local_18 != 0)))) {
    uVar8 = FUN_00b31c36();
    iVar5 = (int)((ulonglong)uVar8 >> 0x20);
    if ((*(int *)(unaff_EDI + 0x14) < iVar5) ||
       ((*(int *)(unaff_EDI + 0x14) <= iVar5 && (*(uint *)(unaff_EDI + 0x10) <= (uint)uVar8)))) {
      puVar1 = (uint *)(unaff_EDI + 0x10);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 + local_18;
      *(int *)(unaff_EDI + 0x14) =
           *(int *)(unaff_EDI + 0x14) + local_14 + (uint)CARRY4(uVar3,local_18);
    }
    else {
      piVar7 = *(int **)(*(int *)(unaff_EDI + 8) + 0xe44);
      if (piVar7 != (int *)0x0) {
        do {
          iVar5 = *piVar7;
          piVar7 = (int *)piVar7[2];
          uVar8 = __allmul(*(undefined4 *)(iVar5 + 600),*(undefined4 *)(iVar5 + 0x25c),
                           *(undefined4 *)(unaff_EDI + 0x20),*(undefined4 *)(unaff_EDI + 0x24));
          uVar8 = __alldiv((uint)uVar8 & 0xffff8000,(int)((ulonglong)uVar8 >> 0x20),
                           *(undefined4 *)(unaff_EDI + 0x10),*(undefined4 *)(unaff_EDI + 0x14));
          iVar6 = (int)((ulonglong)uVar8 >> 0x20);
          uVar3 = (uint)uVar8;
          iVar4 = (local_14 - iVar6) - (uint)(local_18 < uVar3);
          if ((iVar4 < 1) && (iVar4 < 0)) {
            puVar1 = (uint *)(iVar5 + 0x260);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 + local_18;
            *(int *)(iVar5 + 0x264) =
                 *(int *)(iVar5 + 0x264) + local_14 + (uint)CARRY4(uVar3,local_18);
          }
          else {
            puVar1 = (uint *)(iVar5 + 0x260);
            uVar2 = *puVar1;
            *puVar1 = *puVar1 + uVar3;
            *(int *)(iVar5 + 0x264) = *(int *)(iVar5 + 0x264) + iVar6 + (uint)CARRY4(uVar2,uVar3);
            local_18 = local_18 - uVar3;
            local_14 = iVar4;
          }
        } while (piVar7 != (int *)0x0);
        *(undefined4 *)(unaff_EDI + 0x20) = 0;
        *(undefined4 *)(unaff_EDI + 0x24) = 0;
        return;
      }
    }
  }
  *(undefined4 *)(unaff_EDI + 0x20) = 0;
  *(undefined4 *)(unaff_EDI + 0x24) = 0;
  return;
}


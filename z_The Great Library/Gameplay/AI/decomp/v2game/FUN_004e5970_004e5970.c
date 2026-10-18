// FUN_004e5970 @ 004e5970 body=[[004e5970, 004e5a16]]


void FUN_004e5970(void)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  int in_EDX;
  int iVar5;
  int unaff_EDI;
  longlong lVar6;
  undefined8 uVar7;
  
  for (piVar4 = *(int **)(unaff_EDI + 0x94); (piVar4 != (int *)0x0 && (*piVar4 != in_EDX));
      piVar4 = (int *)piVar4[2]) {
  }
  FUN_005f2ae0(piVar4);
  iVar5 = *(int *)(unaff_EDI + 0x30);
  plVar1 = (longlong *)(*(int *)(DAT_012586dc + 0x50) + 0x1c8);
  lVar6 = *plVar1;
  if (*(int *)(iVar5 + 0xfc) != 0) {
    lVar6 = __allmul(*(undefined4 *)(iVar5 + 0x118),*(undefined4 *)(iVar5 + 0x11c),
                     *(undefined4 *)plVar1,*(undefined4 *)(*(int *)(DAT_012586dc + 0x50) + 0x1cc));
    lVar6 = lVar6 >> 0xf;
  }
  puVar2 = (uint *)(unaff_EDI + 0xb8);
  uVar3 = *puVar2;
  *puVar2 = *puVar2 - (uint)lVar6;
  *(int *)(unaff_EDI + 0xbc) =
       (*(int *)(unaff_EDI + 0xbc) - (int)((ulonglong)lVar6 >> 0x20)) - (uint)(uVar3 < (uint)lVar6);
  uVar7 = FUN_00b31c36();
  iVar5 = (int)((ulonglong)uVar7 >> 0x20);
  if ((*(int *)(unaff_EDI + 0xbc) <= iVar5) &&
     ((*(int *)(unaff_EDI + 0xbc) < iVar5 || (*(uint *)(unaff_EDI + 0xb8) < (uint)uVar7)))) {
    *(undefined8 *)(unaff_EDI + 0xb8) = uVar7;
  }
  return;
}


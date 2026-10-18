// FUN_0047dd30 @ 0047dd30 body=[[0047dd30, 0047dda4]]


void FUN_0047dd30(int param_1)

{
  longlong *plVar1;
  byte bVar2;
  byte bVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int unaff_EDI;
  longlong lVar7;
  
  iVar6 = 0;
  if (0 < DAT_012587f4) {
    do {
      bVar2 = *(byte *)(unaff_EDI + 8 + iVar6);
      if (bVar2 != 0) {
        bVar3 = *(byte *)(iVar6 + 8 + param_1);
        uVar5 = (uint)bVar2;
        if (bVar3 == 0) {
          puVar4 = *(undefined4 **)(unaff_EDI + 0x48);
          puVar4[uVar5 * 2] = *puVar4;
          puVar4[uVar5 * 2 + 1] = puVar4[1];
        }
        else {
          plVar1 = (longlong *)(*(int *)(unaff_EDI + 0x48) + uVar5 * 8);
          lVar7 = __allmul(*(undefined4 *)(*(int *)(param_1 + 0x48) + (uint)bVar3 * 8),
                           *(undefined4 *)(*(int *)(param_1 + 0x48) + 4 + (uint)bVar3 * 8),
                           (int)*plVar1,*(undefined4 *)((int)plVar1 + 4));
          *plVar1 = lVar7 >> 0xf;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < DAT_012587f4);
  }
  return;
}


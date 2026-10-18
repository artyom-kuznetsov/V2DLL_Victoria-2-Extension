// FUN_0047e3e0 @ 0047e3e0 body=[[0047e3e0, 0047e44e]]


void FUN_0047e3e0(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint *unaff_ESI;
  int iVar4;
  longlong lVar5;
  
  iVar4 = 0;
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  if (0 < DAT_012587f4) {
    do {
      bVar1 = *(byte *)(param_1 + 8 + iVar4);
      if (bVar1 != 0) {
        uVar3 = (uint)*(byte *)(iVar4 + 8 + param_2);
        lVar5 = __allmul(*(undefined4 *)(*(int *)(param_2 + 0x48) + uVar3 * 8),
                         *(undefined4 *)(*(int *)(param_2 + 0x48) + 4 + uVar3 * 8),
                         *(undefined4 *)(*(int *)(param_1 + 0x48) + (uint)bVar1 * 8),
                         *(undefined4 *)(*(int *)(param_1 + 0x48) + 4 + (uint)bVar1 * 8));
        uVar2 = (uint)(lVar5 >> 0xf);
        uVar3 = *unaff_ESI;
        *unaff_ESI = *unaff_ESI + uVar2;
        unaff_ESI[1] = unaff_ESI[1] + (int)((ulonglong)(lVar5 >> 0xf) >> 0x20) +
                       (uint)CARRY4(uVar3,uVar2);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_012587f4);
  }
  return;
}


// FUN_005621a0 @ 005621a0 body=[[005621a0, 0056220a]]


void FUN_005621a0(int param_1)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = 0;
  if (0 < DAT_012587f4) {
    do {
      bVar2 = *(byte *)(param_1 + 8 + iVar4);
      if (((bVar2 != 0) &&
          (iVar3 = *(int *)(*(int *)(DAT_012587f0 + 0xc) + iVar4 * 4), iVar3 != DAT_012587f0 + 0x48)
          ) && (iVar3 != 0)) {
        plVar1 = (longlong *)(*(int *)(param_1 + 0x48) + (uint)bVar2 * 8);
        lVar5 = __allmul(*(undefined4 *)(iVar3 + 0x30),*(undefined4 *)(iVar3 + 0x34),(int)*plVar1,
                         *(undefined4 *)((int)plVar1 + 4));
        *plVar1 = lVar5 >> 0xf;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_012587f4);
  }
  return;
}


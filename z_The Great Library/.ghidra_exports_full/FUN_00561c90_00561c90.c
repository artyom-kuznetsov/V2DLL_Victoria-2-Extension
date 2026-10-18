// FUN_00561c90 @ 00561c90 body=[[00561c90, 00561d09]]


uint FUN_00561c90(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  
  iVar6 = 0;
  uVar3 = DAT_012587f4;
  if (0 < (int)DAT_012587f4) {
    do {
      bVar1 = *(byte *)(param_1 + 8 + iVar6);
      uVar3 = CONCAT31((int3)(uVar3 >> 8),bVar1);
      if (bVar1 != 0) {
        lVar7 = __allmul(*(undefined4 *)(*(int *)(param_1 + 0x48) + (uint)bVar1 * 8),
                         *(undefined4 *)(*(int *)(param_1 + 0x48) + 4 + (uint)bVar1 * 8),param_3,
                         param_4);
        uVar5 = (uint)*(byte *)(iVar6 + 8 + param_2);
        uVar3 = (uint)(lVar7 >> 0xf);
        iVar4 = (int)((ulonglong)(lVar7 >> 0xf) >> 0x20);
        iVar2 = *(int *)(*(int *)(param_2 + 0x48) + 4 + uVar5 * 8);
        if ((iVar2 < iVar4) ||
           ((iVar2 <= iVar4 && (*(uint *)(*(int *)(param_2 + 0x48) + uVar5 * 8) < uVar3)))) {
          return (uint)lVar7 >> 0xf & 0xffffff00 | (int)((ulonglong)lVar7 >> 0x20) << 0x11;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)DAT_012587f4);
  }
  return CONCAT31((int3)(uVar3 >> 8),1);
}


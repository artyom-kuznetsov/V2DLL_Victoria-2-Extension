// FUN_00b1aef0 @ 00b1aef0 body=[[00b1aef0, 00b1af18] [00b1af20, 00b1af95]]


uint FUN_00b1aef0(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = 0;
  uVar3 = 0;
  if (param_2 != 0) {
    uVar4 = 4;
    do {
      uVar5 = (uint)*(byte *)(uVar3 + param_1);
      if ((((uVar5 == *(ushort *)(in_ECX + 0x22)) && (uVar4 < param_2)) &&
          (*(byte *)(uVar3 + 1 + param_1) == uVar5)) &&
         ((*(byte *)(uVar3 + 2 + param_1) == uVar5 && (*(byte *)(uVar3 + 3 + param_1) == uVar5)))) {
        bVar1 = *(byte *)(*(int *)(in_ECX + 0x10) + 0x801);
        uVar3 = uVar3 + 3;
        uVar4 = uVar4 + 3;
      }
      else {
        bVar1 = *(byte *)(*(int *)(in_ECX + 0x10) + 1 + uVar5 * 8);
      }
      iVar2 = iVar2 + (uint)bVar1;
      uVar3 = uVar3 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar3 < param_2);
  }
  uVar3 = iVar2 + (uint)*(byte *)(*(int *)(in_ECX + 0x10) + 0x809);
  if ((uVar3 & 7) != 0) {
    return (uVar3 >> 3) + 1;
  }
  return uVar3 >> 3;
}


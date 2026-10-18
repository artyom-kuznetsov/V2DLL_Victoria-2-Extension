// FUN_00538af0 @ 00538af0 body=[[00538af0, 00538c35]]


/* WARNING: Removing unreachable block (ram,0x00538c1d) */

undefined4 FUN_00538af0(char param_1)

{
  uint uVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int in_ECX;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  
  if (DAT_012587e0 != '\0') {
    return 1;
  }
  if (in_EAX == 0) {
    return 0;
  }
  iVar4 = *(int *)(in_EAX + 0x30);
  iVar3 = *(int *)(in_EAX + 0x2c);
  if (iVar3 != iVar4) {
    do {
      if (*(int *)(iVar3 + 4) == *(int *)(in_ECX + 0x20)) break;
      iVar3 = iVar3 + 8;
    } while (iVar3 != iVar4);
    if (iVar3 != iVar4) {
      cVar2 = FUN_0093c4c0(1);
      if (cVar2 != '\0') {
        return 0;
      }
      uVar7 = *(undefined4 *)(in_EAX + 0x3c);
      goto LAB_00538b70;
    }
  }
  cVar2 = FUN_0093c4c0(0);
  if (cVar2 != '\0') {
    return 0;
  }
  uVar7 = *(undefined4 *)(in_EAX + 0x2c);
LAB_00538b70:
  iVar4 = FUN_00936fc0(in_EAX,in_ECX + 0x1c,uVar7,0);
  if (0 < iVar4) {
    uVar1 = *(uint *)(*(int *)(in_ECX + 0x1310) + *(int *)(*(int *)(DAT_01258a48 + 0x8c) + 0x50) * 4
                     );
    lVar5 = __alldiv(uVar1 << 0x1e,uVar1 >> 2,*(uint *)(in_ECX + 0x12e8) << 0xf,
                     *(uint *)(in_ECX + 0x12e8) >> 0x11);
    iVar4 = *(int *)(DAT_012586dc + 0x30);
    uVar1 = *(uint *)(iVar4 + 0x3f4);
    lVar6 = __alldiv(uVar1 << 0x1e,((int)uVar1 >> 0x1f) << 0x1e | uVar1 >> 2,0x1f40000,0);
    if (*(char *)(in_EAX + 0xfc) != '\0') {
      FUN_0043a5b0(*(undefined4 *)(iVar4 + 0x4a4));
      FUN_0043a620();
    }
    if ((param_1 != '\0') || (lVar6 <= lVar5)) {
      return 1;
    }
  }
  return 0;
}


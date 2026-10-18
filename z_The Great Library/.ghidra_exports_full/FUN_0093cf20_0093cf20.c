// FUN_0093cf20 @ 0093cf20 body=[[0093cf20, 0093cfa4]]


uint FUN_0093cf20(int param_1)

{
  int iVar1;
  uint in_EAX;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = in_EAX;
  if ((*(char *)(in_EAX + 0xfc) == '\0') ||
     (uVar3 = DAT_012588e8, *(char *)(DAT_012588e8 + 0xb95) == '\0')) {
    return uVar3 & 0xffffff00;
  }
  iVar2 = FUN_00936fc0(in_EAX,*(undefined4 *)(in_EAX + 0x2c),*(undefined4 *)(in_EAX + 0x3c),0);
  iVar1 = *(int *)(in_EAX + 0x40);
  iVar4 = *(int *)(in_EAX + 0x3c);
  if (iVar4 != iVar1) {
    do {
      if (*(int *)(iVar4 + 4) == *(int *)(param_1 + 4)) break;
      iVar4 = iVar4 + 8;
    } while (iVar4 != iVar1);
    if (iVar4 != iVar1) {
      iVar2 = -iVar2;
    }
  }
  iVar1 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x4b0);
  return CONCAT31((int3)((ulonglong)((longlong)iVar1 * 0x10624dd3) >> 8),iVar1 / 1000 <= iVar2);
}


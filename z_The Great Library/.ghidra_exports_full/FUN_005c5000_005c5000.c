// FUN_005c5000 @ 005c5000 body=[[005c5000, 005c508b]]


uint FUN_005c5000(void)

{
  int *piVar1;
  short *psVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int in_EAX;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 8);
  if ((*(int *)(in_ECX + 0xc) - *piVar1) / 0x1c <= in_EAX) {
    FUN_005c50e0();
  }
  iVar4 = *piVar1;
  iVar6 = in_EAX * 0x1c;
  if ((*(int *)(iVar4 + 0xc + iVar6) - *(int *)(iVar4 + 8 + iVar6) & 0xfffffffeU) == 0) {
    psVar2 = (short *)(iVar4 + iVar6 + 0x18);
    *psVar2 = *psVar2 + 1;
    return CONCAT22((short)((uint)iVar6 >> 0x10),*(undefined2 *)(iVar4 + iVar6 + 0x18));
  }
  iVar4 = *piVar1;
  iVar5 = *(int *)(iVar6 + 8 + iVar4);
  piVar1 = (int *)(iVar6 + 8 + iVar4);
  uVar3 = *(ushort *)(*piVar1 + -2 + (*(int *)(iVar6 + 0xc + iVar4) - *piVar1 >> 1) * 2);
  iVar4 = piVar1[1];
  if (((iVar4 - iVar5 & 0xfffffffeU) != 0) && (iVar5 != iVar4)) {
    piVar1[1] = iVar4 + -2;
  }
  return (uint)uVar3;
}


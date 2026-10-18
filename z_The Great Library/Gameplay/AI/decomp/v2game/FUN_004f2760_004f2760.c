// FUN_004f2760 @ 004f2760 body=[[004f2760, 004f27c7]]


undefined4 FUN_004f2760(void)

{
  int iVar1;
  uint uVar2;
  int *in_EAX;
  int iVar3;
  uint *in_ECX;
  undefined4 *puVar4;
  
  iVar1 = in_EAX[1];
  if ((iVar1 - *in_EAX & 0xfffffff0U) != 0) {
    uVar2 = *in_ECX;
    if ((*(uint *)in_ECX[1] <= uVar2) && (uVar2 < ((uint *)in_ECX[1])[1])) {
      if ((uVar2 != iVar1 - 0x10U) && (iVar3 = uVar2 + 0x10, iVar3 != iVar1)) {
        puVar4 = (undefined4 *)(uVar2 + 8);
        do {
          puVar4[-1] = *(undefined4 *)(iVar3 + 4);
          *puVar4 = *(undefined4 *)(iVar3 + 8);
          puVar4[1] = *(undefined4 *)(iVar3 + 0xc);
          iVar3 = iVar3 + 0x10;
          puVar4 = puVar4 + 4;
        } while (iVar3 != iVar1);
      }
      FUN_004f2b40();
      return 1;
    }
  }
  return 0;
}


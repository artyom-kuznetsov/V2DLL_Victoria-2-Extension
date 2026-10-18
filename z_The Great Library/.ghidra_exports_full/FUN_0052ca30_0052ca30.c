// FUN_0052ca30 @ 0052ca30 body=[[0052ca30, 0052cabb]]


uint FUN_0052ca30(int param_1,undefined4 param_2)

{
  uint *puVar1;
  uint in_EAX;
  int iVar2;
  uint uVar3;
  int iVar4;
  int unaff_ESI;
  
  if (*(char *)(in_EAX + 0x12d0) != '\0') {
    iVar2 = *(int *)(param_1 + 0x60);
    iVar4 = 0;
    if (iVar2 != 0) {
      do {
        if (*(int *)(*(int *)(iVar2 + 0x18) + 0x58) == *(int *)(unaff_ESI + 0x58)) {
          iVar4 = *(int *)(iVar2 + 0x20);
        }
        iVar2 = *(int *)(iVar2 + 0x224);
      } while (iVar2 != 0);
    }
    in_EAX = *(uint *)(in_EAX + 0xbcc);
    if (((*(char *)(*(int *)(unaff_ESI + 0x58) + *(int *)(in_EAX + 0x2fc)) != '\0') ||
        (*(char *)(unaff_ESI + 0x130) != '\0')) &&
       (((*(char *)(unaff_ESI + 0x130) != '\0' && (iVar4 + 1 == 1)) ||
        (puVar1 = (uint *)(in_EAX + 8), in_EAX = *puVar1 & 0xffffff00,
        iVar4 + 1 <= *(int *)(*puVar1 + *(int *)(unaff_ESI + 0x58) * 4))))) {
      uVar3 = FUN_004d04b0(param_1,unaff_ESI,param_2);
      return uVar3;
    }
  }
  return in_EAX & 0xffffff00;
}


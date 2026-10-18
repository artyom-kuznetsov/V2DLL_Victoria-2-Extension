// FUN_00acea90 @ 00acea90 body=[[00acea90, 00aceab7] [00aceac0, 00aceb2f]]


undefined4 FUN_00acea90(int param_1,undefined4 param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  uint uVar5;
  
  uVar1 = *(uint *)(*(int *)(in_ECX + 0x1ac) + 0x84);
  uVar5 = 0;
  if (uVar1 != 0) {
    iVar4 = 0;
    do {
      iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x1ac) + 0x80) + uVar5 * 4) + 0x1c);
      if (((*(int *)(iVar3 + 0xc + param_1 * 0x20) != 0) &&
          (iVar3 = (**(code **)(**(int **)(iVar3 + param_1 * 0x20 + 0xc) + 0x10))(), iVar3 != 0)) &&
         (cVar2 = FUN_00ade320(*(int *)(in_ECX + 0xc) + iVar4,param_2), cVar2 != '\0')) {
        return *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x1ac) + 0x80) + uVar5 * 4);
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0x40;
    } while (uVar5 < uVar1);
  }
  return 0;
}


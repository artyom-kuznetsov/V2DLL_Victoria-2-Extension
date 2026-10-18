// FUN_00aceb30 @ 00aceb30 body=[[00aceb30, 00acebd4]]


int FUN_00aceb30(int param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int in_ECX;
  ushort uVar6;
  uint uVar7;
  
  uVar1 = *(ushort *)(in_ECX + 400);
  iVar2 = *(int *)(in_ECX + 0xc);
  uVar6 = 0;
  if (uVar1 != 0) {
    do {
      uVar7 = (uint)*(ushort *)(*(int *)(in_ECX + 0x18c) + (uint)uVar6 * 2);
      iVar3 = *(int *)(*(int *)(*(int *)(in_ECX + 0x1ac) + 0x80) + uVar7 * 4);
      iVar5 = *(int *)(iVar3 + 0x1c);
      if (((*(int *)(iVar5 + 4 + param_1 * 0x20) != 0) &&
          (iVar5 = (**(code **)(**(int **)(iVar5 + 4 + param_1 * 0x20) + 0x10))(), iVar5 != 0)) &&
         (cVar4 = FUN_00ade320(uVar7 * 0x40 + iVar2,param_2), cVar4 != '\0')) {
        return iVar3;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  return 0;
}


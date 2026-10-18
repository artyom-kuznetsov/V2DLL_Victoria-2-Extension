// FUN_00add220 @ 00add220 body=[[00add220, 00add24f]]


int FUN_00add220(void)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(in_ECX + 0x34);
  iVar3 = 0;
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      iVar2 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x30) + uVar4 * 4) + 4))();
      if (iVar2 == 3) {
        iVar3 = iVar3 + 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return iVar3;
}


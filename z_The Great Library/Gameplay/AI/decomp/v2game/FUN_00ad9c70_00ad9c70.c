// FUN_00ad9c70 @ 00ad9c70 body=[[00ad9c70, 00ad9cb6]]


undefined4 FUN_00ad9c70(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  
  uVar1 = *(uint *)(in_ECX + 0x28);
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      uVar2 = *(undefined4 *)(*(int *)(in_ECX + 0x24) + uVar4 * 4);
      iVar3 = FUN_00aee110();
      if (iVar3 == param_1) {
        iVar3 = FUN_00aee120();
        if (iVar3 == param_2) {
          return uVar2;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return 0;
}


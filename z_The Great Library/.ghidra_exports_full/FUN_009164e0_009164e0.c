// FUN_009164e0 @ 009164e0 body=[[009164e0, 009165ba]]


uint FUN_009164e0(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  int in_ECX;
  
  uVar4 = *(uint *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0xc) * 4);
  iVar1 = *(int *)(*(int *)(uVar4 + 0xbe8) + *(int *)(in_ECX + 0x14) * 4);
  if (*(int *)(iVar1 + 0x34) != 0) {
    if (*(int *)(in_ECX + 0x34) != 0) {
      cVar2 = (**(code **)(**(int **)(in_ECX + 0x34) + 0x1c))();
      if (cVar2 != '\0') {
        uVar3 = FUN_0092eec0(iVar1,in_ECX + 8,in_ECX + 0x10);
        uVar4 = FUN_00538af0(uVar3);
        if ((char)uVar4 == '\0') goto LAB_0091651d;
      }
      if (*(int *)(in_ECX + 0x34) != 0) {
        cVar2 = (**(code **)(**(int **)(in_ECX + 0x34) + 0x1c))();
        if (cVar2 != '\0') goto LAB_009165a7;
      }
    }
    uVar3 = FUN_0092ede0(iVar1,in_ECX + 8,in_ECX + 0x10);
    uVar4 = FUN_00538af0(uVar3);
    if ((char)uVar4 != '\0') {
LAB_009165a7:
      uVar4 = FUN_00913370(param_1);
      return uVar4;
    }
  }
LAB_0091651d:
  return uVar4 & 0xffffff00;
}


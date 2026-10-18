// FUN_00ad61b0 @ 00ad61b0 body=[[00ad61b0, 00ad6208]]


void FUN_00ad61b0(int *param_1)

{
  uint uVar1;
  int in_ECX;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_1[1];
  uVar1 = *(uint *)(in_ECX + 0x84);
  if (((uVar1 != uVar3) && (param_1[1] = uVar1, uVar3 < uVar1)) && ((uint)param_1[2] < uVar1)) {
    FUN_00ad8720(uVar1);
  }
  uVar3 = 0;
  if (uVar1 != 0) {
    iVar2 = 0;
    do {
      FUN_00ad5410(uVar3,*(undefined4 *)(in_ECX + 0x1c),*param_1 + iVar2);
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x40;
    } while (uVar3 < uVar1);
  }
  return;
}


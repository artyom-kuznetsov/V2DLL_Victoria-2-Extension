// FUN_00b280b0 @ 00b280b0 body=[[00b280b0, 00b28116]]


int FUN_00b280b0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined4 uVar3;
  
  iVar1 = FUN_00b2a1b0();
  if (iVar1 == 0) {
    FUN_00b1f840(0);
    return 0;
  }
  iVar2 = FUN_00b27360(iVar1,param_1);
  if (iVar2 != 0) {
    if (*(int *)(in_ECX + 4) == 0) {
      uVar3 = *(undefined4 *)(in_ECX + 0xc);
    }
    else {
      uVar3 = *(undefined4 *)(*(int *)(in_ECX + 4) + 0xc);
    }
    iVar2 = FUN_00b2a2f0(iVar1,uVar3,0);
    if (iVar2 != 0) {
      return iVar1;
    }
  }
  FUN_00b2a4f0(iVar1);
  return 0;
}


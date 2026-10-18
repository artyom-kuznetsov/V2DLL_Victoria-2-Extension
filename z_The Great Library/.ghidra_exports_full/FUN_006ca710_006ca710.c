// FUN_006ca710 @ 006ca710 body=[[006ca710, 006ca79d]]


undefined4 FUN_006ca710(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint *in_ECX;
  
  uVar1 = *(uint *)in_ECX[1];
  FUN_00a46a60((uint *)in_ECX[1]);
  if (*in_ECX < uVar1) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(in_ECX[1] + 4);
    FUN_00a46a60(in_ECX[1]);
    if (*in_ECX < uVar1) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}


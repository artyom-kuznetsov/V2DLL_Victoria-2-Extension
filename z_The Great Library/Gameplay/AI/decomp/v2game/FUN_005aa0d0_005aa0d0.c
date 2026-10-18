// FUN_005aa0d0 @ 005aa0d0  (requested 005AA0D0, first bytes: 55 8B EC 53 8B 5D 08 56)


void FUN_005aa0d0(int param_1,int param_2)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (param_2 == 0x45f) {
    uVar1 = FUN_00aaf0c5(param_1 + 0x22c);
    *(undefined4 *)(in_ECX + 0x34) = uVar1;
  }
  FUN_0059bf00(param_1,param_2);
  return;
}


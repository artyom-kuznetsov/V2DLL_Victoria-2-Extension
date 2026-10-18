// FUN_00ae36e0 @ 00ae36e0 body=[[00ae36e0, 00ae3722]]


undefined4 FUN_00ae36e0(int param_1,undefined4 param_2)

{
  uint uVar1;
  int in_ECX;
  int *piVar2;
  
  uVar1 = 0;
  if (*(uint *)(in_ECX + 0x14) != 0) {
    piVar2 = *(int **)(in_ECX + 0x10);
    while (*piVar2 != param_1) {
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
      if (*(uint *)(in_ECX + 0x14) <= uVar1) {
        return 0;
      }
    }
    if (uVar1 != 0xffffffff) {
      FUN_00ae3610(uVar1,param_2);
      return 1;
    }
  }
  return 0;
}


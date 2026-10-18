// FUN_00b08870 @ 00b08870 body=[[00b08870, 00b0889c]]


void FUN_00b08870(undefined4 param_1)

{
  uint uVar1;
  int in_ECX;
  uint uVar2;
  
  uVar1 = *(uint *)(in_ECX + 4);
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      FUN_00b07e40(param_1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return;
}


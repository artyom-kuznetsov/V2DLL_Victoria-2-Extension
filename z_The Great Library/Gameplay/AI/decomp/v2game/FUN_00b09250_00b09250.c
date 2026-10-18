// FUN_00b09250 @ 00b09250 body=[[00b09250, 00b09283]]


void FUN_00b09250(undefined4 param_1)

{
  uint uVar1;
  int in_ECX;
  uint uVar2;
  
  FUN_00b09a60();
  uVar1 = *(uint *)(in_ECX + 8);
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      FUN_00b07e40(param_1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return;
}


// FUN_00aeaf60 @ 00aeaf60 body=[[00aeaf60, 00aeaf8b]]


void FUN_00aeaf60(undefined4 param_1)

{
  uint uVar1;
  int *in_ECX;
  uint uVar2;
  
  uVar1 = in_ECX[1];
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      (**(code **)(**(int **)(*in_ECX + uVar2 * 4) + 8))(param_1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return;
}


// FUN_00aeaef0 @ 00aeaef0 body=[[00aeaef0, 00aeaf5f]]


void FUN_00aeaef0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int *in_ECX;
  uint uVar4;
  
  uVar1 = in_ECX[1];
  if ((uVar1 != 0) && (uVar4 = 0, uVar1 != 0)) {
    bVar2 = true;
    do {
      cVar3 = FUN_00b0ef40();
      if (cVar3 != '\0') {
        if (bVar2) {
          bVar2 = false;
          FUN_00add090();
        }
        (**(code **)(**(int **)(uVar4 * 4 + *in_ECX) + 4))(param_1,param_2,param_3);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return;
}


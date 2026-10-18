// FUN_00aeb040 @ 00aeb040 body=[[00aeb040, 00aeb083]]


undefined4 FUN_00aeb040(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  uint uVar4;
  
  uVar1 = in_ECX[1];
  iVar3 = 0;
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      iVar2 = (**(code **)(**(int **)(*in_ECX + uVar4 * 4) + 0x10))();
      if (iVar2 == param_1) {
        if (iVar3 == param_2) {
          return *(undefined4 *)(*in_ECX + uVar4 * 4);
        }
        iVar3 = iVar3 + 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return 0;
}


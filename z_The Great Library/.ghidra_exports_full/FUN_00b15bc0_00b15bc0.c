// FUN_00b15bc0 @ 00b15bc0 body=[[00b15bc0, 00b15bf5]]


void FUN_00b15bc0(undefined4 param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  int *in_ECX;
  uint uVar3;
  
  uVar1 = in_ECX[1];
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      piVar2 = *(int **)(*in_ECX + uVar3 * 4);
      if ((piVar2[1] & param_2) != 0) {
        (**(code **)(*piVar2 + 4))(param_1,param_2);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return;
}


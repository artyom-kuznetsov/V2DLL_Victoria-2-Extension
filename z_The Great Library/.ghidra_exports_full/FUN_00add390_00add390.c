// FUN_00add390 @ 00add390 body=[[00add390, 00add3ce]]


void FUN_00add390(int param_1,int param_2)

{
  uint uVar1;
  int in_ECX;
  uint uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(in_ECX + 0x34);
    uVar2 = 0;
    if (uVar1 != 0) {
      do {
        (**(code **)(**(int **)(*(int *)(in_ECX + 0x30) + uVar2 * 4) + 0x1c))(param_1,param_2);
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar1);
    }
  }
  return;
}


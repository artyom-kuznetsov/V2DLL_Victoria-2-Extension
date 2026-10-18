// FUN_005fe5a0 @ 005fe5a0 body=[[005fe5a0, 005fe5fc]]


void FUN_005fe5a0(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = *(uint *)(in_ECX + 0xa4);
  if (((int)param_3 <= (int)uVar1) &&
     (((int)param_3 < (int)uVar1 || (param_2 < *(uint *)(in_ECX + 0xa0))))) {
    *param_1 = param_2;
    param_1[1] = param_3;
    return;
  }
  *param_1 = *(uint *)(in_ECX + 0xa0);
  param_1[1] = uVar1;
  return;
}


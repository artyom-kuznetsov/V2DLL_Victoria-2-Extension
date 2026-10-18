// FUN_009b2b60 @ 009b2b60 body=[[009b2b60, 009b2bcd]]


void FUN_009b2b60(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  
  (**(code **)(*(int *)(in_ECX + 0x70) + 0x1c))(param_1,param_2,param_3);
  if (*param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2 + 0x1c;
  }
  if (param_1 == 0) {
    param_3 = 0;
  }
  else {
    param_3 = param_1 + 0x1c;
  }
  for (piVar1 = *(int **)(in_ECX + 0x60); (piVar1 != (int *)0x0 && (*piVar1 != iVar2));
      piVar1 = (int *)piVar1[2]) {
  }
  FUN_009b3cf0(&param_3,piVar1);
  return;
}


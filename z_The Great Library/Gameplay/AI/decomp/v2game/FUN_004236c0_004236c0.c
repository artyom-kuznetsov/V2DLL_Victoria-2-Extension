// FUN_004236c0 @ 004236c0 body=[[004236c0, 004236dd]]


void FUN_004236c0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *in_ECX;
  uint *in_EDX;
  
  uVar1 = *in_EDX;
  param_1[1] = in_EDX[1];
  uVar2 = *in_ECX;
  uVar3 = in_ECX[1];
  *param_1 = uVar1;
  uVar1 = *param_1;
  *param_1 = *param_1 + uVar2;
  param_1[1] = param_1[1] + uVar3 + (uint)CARRY4(uVar1,uVar2);
  return;
}


// FUN_007dbdd0 @ 007dbdd0 body=[[007dbdd0, 007dbeb9]]


void FUN_007dbdd0(int param_1,int param_2)

{
  int in_EAX;
  int in_ECX;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_24;
  
  uVar1 = param_2 - in_ECX >> 0x1f;
  uVar2 = in_EAX - param_1 >> 0x1f;
  iVar3 = in_ECX;
  iVar6 = in_EAX;
  if ((int)((param_2 - in_ECX ^ uVar1) - uVar1) < (int)((in_EAX - param_1 ^ uVar2) - uVar2)) {
    iVar3 = param_1;
    param_1 = in_ECX;
    iVar6 = param_2;
    param_2 = in_EAX;
  }
  iVar5 = iVar3;
  iVar4 = param_1;
  if (param_2 < iVar3) {
    iVar5 = param_2;
    iVar4 = iVar6;
    iVar6 = param_1;
    param_2 = iVar3;
  }
  uVar1 = iVar6 - iVar4 >> 0x1f;
  iVar3 = param_2 - iVar5;
  local_24 = 0;
  for (; iVar5 <= param_2; iVar5 = iVar5 + 1) {
    FUN_0044ed90();
    local_24 = local_24 + ((iVar6 - iVar4 ^ uVar1) - uVar1);
    if (iVar3 <= local_24 * 2) {
      local_24 = local_24 - iVar3;
    }
  }
  return;
}


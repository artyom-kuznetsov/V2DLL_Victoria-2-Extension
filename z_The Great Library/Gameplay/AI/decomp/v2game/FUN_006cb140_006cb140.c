// FUN_006cb140 @ 006cb140 body=[[006cb140, 006cb19c]]


int FUN_006cb140(void)

{
  int iVar1;
  int in_ECX;
  undefined4 local_8;
  
  iVar1 = FUN_0061ac60();
  local_8 = *(uint *)(in_ECX + 8) >> 2;
  if (*(uint *)(iVar1 + 8) <= local_8) {
    local_8 = local_8 - *(int *)(iVar1 + 8);
  }
  return *(int *)(*(int *)(iVar1 + 4) + local_8 * 4) + (*(uint *)(in_ECX + 8) & 3) * 4;
}


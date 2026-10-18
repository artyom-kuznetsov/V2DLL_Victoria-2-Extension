// FUN_008fcf10 @ 008fcf10 body=[[008fcf10, 008fcf63]]


undefined4 FUN_008fcf10(int param_1)

{
  uint *puVar1;
  int in_ECX;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar1 = (uint *)FUN_004b9bd0();
    if ((*(int *)(in_ECX + 0x24) <= (int)puVar1[1]) &&
       ((*(int *)(in_ECX + 0x24) < (int)puVar1[1] || (*(uint *)(in_ECX + 0x20) <= *puVar1)))) {
      return 1;
    }
  }
  return 0;
}


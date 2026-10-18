// FUN_00900020 @ 00900020 body=[[00900020, 00900051]]


bool FUN_00900020(int param_1)

{
  int in_ECX;
  
  return *(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) + 0x120) ==
         *(char *)(in_ECX + 0x1c);
}


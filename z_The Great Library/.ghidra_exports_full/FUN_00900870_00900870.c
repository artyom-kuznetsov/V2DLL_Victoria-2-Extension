// FUN_00900870 @ 00900870 body=[[00900870, 00900885]]


undefined4 FUN_00900870(void)

{
  int in_ECX;
  
  return CONCAT31((int3)((uint)*(int *)(in_ECX + 0x1c) >> 8),
                  *(int *)(*(int *)(DAT_012588e8 + 8) + *(int *)(in_ECX + 0x1c) * 4) != 0);
}


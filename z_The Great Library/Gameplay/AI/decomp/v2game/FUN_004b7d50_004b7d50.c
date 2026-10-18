// FUN_004b7d50 @ 004b7d50 body=[[004b7d50, 004b7d77] [004b7d80, 004b7da2]]


void FUN_004b7d50(void)

{
  int iVar1;
  int in_EAX;
  
  iVar1 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EAX + 4) * 4) + 0x9e8);
  while (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 8);
    FUN_004b7c50();
  }
  return;
}


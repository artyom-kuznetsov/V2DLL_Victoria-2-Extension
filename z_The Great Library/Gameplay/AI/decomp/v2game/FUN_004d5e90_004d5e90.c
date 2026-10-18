// FUN_004d5e90 @ 004d5e90 body=[[004d5e90, 004d5f06]]


int FUN_004d5e90(void)

{
  int in_EAX;
  int iVar1;
  
  FUN_00401000(((float)(*(int *)(in_EAX + 0x4c) - *(int *)(in_EAX + 0x48) >> 2) + 0.0005) * 1000.0);
  iVar1 = FUN_00b31c00();
  iVar1 = __alldiv((longlong)*(int *)(*(int *)(DAT_012586dc + 0x40) + 0x140) * (longlong)iVar1,1000,
                   0);
  return iVar1 / 1000;
}


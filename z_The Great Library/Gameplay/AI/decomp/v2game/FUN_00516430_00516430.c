// FUN_00516430 @ 00516430 body=[[00516430, 00516466]]


uint FUN_00516430(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint in_EAX;
  
  if (DAT_0125873e != '\0') {
    return in_EAX & 0xffffff00;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0xbe8) + param_3 * 4);
  return CONCAT31((int3)((uint)iVar1 >> 8),*(int *)(DAT_012588e8 + 0xb0c) <= *(int *)(iVar1 + 100));
}


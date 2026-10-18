// FUN_00541b90 @ 00541b90 body=[[00541b90, 00541bed]]


undefined4 FUN_00541b90(int param_1)

{
  int iVar1;
  
  FUN_00401000(0x47c35040);
  iVar1 = FUN_00b31c00();
  iVar1 = __alldiv((longlong)*(int *)(*(int *)(param_1 + 0xa60) + 0x378) * (longlong)iVar1,1000,0);
  return CONCAT31((int3)((uint)(iVar1 / 1000) >> 8),99 < iVar1 / 1000);
}


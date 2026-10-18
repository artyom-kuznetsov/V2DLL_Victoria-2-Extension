// FUN_00a4eb80 @ 00a4eb80 body=[[00a4eb80, 00a4eb9f]]


undefined4 FUN_00a4eb80(ushort param_1)

{
  longlong lVar1;
  int in_ECX;
  
  lVar1 = (longlong)*(int *)(*(int *)(in_ECX + 0x154) + 0xa0);
  *(int *)(in_ECX + 0x14c) = (int)((longlong)(ulonglong)param_1 % lVar1);
  return (int)((longlong)(ulonglong)param_1 / lVar1);
}


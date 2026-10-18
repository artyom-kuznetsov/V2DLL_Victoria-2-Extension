// FUN_00a87fd0 @ 00a87fd0 body=[[00a87fd0, 00a88052]]


void FUN_00a87fd0(undefined4 param_1)

{
  int in_ECX;
  float local_10;
  float fStack_c;
  undefined4 local_8;
  
  local_10 = (float)(int)(short)param_1;
  fStack_c = (float)(int)(short)((uint)param_1 >> 0x10);
  *(ulonglong *)(in_ECX + 0xa4) = CONCAT44(fStack_c,local_10);
  *(undefined4 *)(in_ECX + 0xac) = 0;
  local_8 = 0;
  (**(code **)(**(int **)(in_ECX + 0xb0) + 0xa8))(0,0,0,&local_10);
  return;
}


// FUN_009f66c0 @ 009f66c0 body=[[009f66c0, 009f66e8]]


void FUN_009f66c0(void)

{
  undefined2 uVar1;
  int *in_ECX;
  
  uVar1 = FUN_009f77c0();
  *(undefined2 *)((int)in_ECX + 0x3a) = uVar1;
  (**(code **)(*in_ECX + 0x80))();
  FUN_00409350(&DAT_00ded94d,0);
  return;
}


// thunk_FUN_0075bb50 @ 00761c80 body=[[00761c80, 00761c84]]


void thunk_FUN_0075bb50(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  float10 fVar3;
  
  fVar3 = (float10)(**(code **)(*(int *)(*(int *)(in_ECX + 0x328) + 0x54) + 0x10))();
  iVar1 = FUN_00475500();
  iVar2 = *(int *)(in_ECX + 0x32c);
  *(float *)(iVar1 + 0x80) = (float)fVar3;
  fVar3 = (float10)(**(code **)(*(int *)(iVar2 + 0x54) + 0x10))();
  iVar1 = FUN_00475500();
  iVar2 = *(int *)(in_ECX + 0x330);
  *(float *)(iVar1 + 0x84) = (float)fVar3;
  fVar3 = (float10)(**(code **)(*(int *)(iVar2 + 0x54) + 0x10))();
  iVar2 = FUN_00475500();
  *(float *)(iVar2 + 0x88) = (float)fVar3;
  return;
}


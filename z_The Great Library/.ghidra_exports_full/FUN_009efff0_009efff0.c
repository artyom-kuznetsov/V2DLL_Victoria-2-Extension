// FUN_009efff0 @ 009efff0 body=[[009efff0, 009f000f]]


int FUN_009efff0(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = (**(code **)(**(int **)(in_ECX + 0xa0) + 0x154))();
  if (iVar1 == -1) {
    iVar1 = *(int *)(in_ECX + 0x154);
  }
  return iVar1;
}


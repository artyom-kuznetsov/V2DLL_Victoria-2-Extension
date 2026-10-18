// FUN_00ab09c3 @ 00ab09c3 body=[[00ab09c3, 00ab09d8]]


int FUN_00ab09c3(void)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar2 = (int)in_ECX - *(int *)(*(int *)(*in_ECX + -4) + 4);
  iVar1 = *(int *)(*(int *)(*in_ECX + -4) + 8);
  if (iVar1 != 0) {
    iVar2 = iVar2 - *(int *)((int)in_ECX - iVar1);
  }
  return iVar2;
}


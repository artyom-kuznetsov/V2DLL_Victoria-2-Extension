// FUN_008df810 @ 008df810 body=[[008df810, 008df85b]]


bool FUN_008df810(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x1c);
  iVar2 = FUN_005dba20();
  return iVar1 / 1000 <= iVar2;
}


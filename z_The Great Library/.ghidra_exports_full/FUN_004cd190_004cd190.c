// FUN_004cd190 @ 004cd190 body=[[004cd190, 004cd1cd]]


bool FUN_004cd190(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EAX + 4) * 4);
  iVar2 = FUN_004cd300(in_EAX);
  return iVar2 <= *(int *)(iVar1 + 0x15c4) - *(int *)(iVar1 + 0x15c0);
}


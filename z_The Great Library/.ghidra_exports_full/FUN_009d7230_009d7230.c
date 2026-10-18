// FUN_009d7230 @ 009d7230 body=[[009d7230, 009d728d]]


void FUN_009d7230(int param_1)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00aad56b(((int)(*(int *)(param_1 + 0x10) + (*(int *)(param_1 + 0x10) >> 0x1f & 3U)) >>
                       2) * 3);
  iVar2 = FUN_00a6f340(iVar1);
  FUN_009d7490(*(undefined4 *)(in_EAX + 4),iVar1,iVar2 + iVar1,param_1);
  FUN_00aaea59(iVar1);
  return;
}


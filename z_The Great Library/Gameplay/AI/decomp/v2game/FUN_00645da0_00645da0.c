// FUN_00645da0 @ 00645da0 body=[[00645da0, 00645dd5]]


void FUN_00645da0(void)

{
  int iVar1;
  int in_ECX;
  int in_EDX;
  
  iVar1 = *(int *)(*(int *)(*(int *)(in_EDX + 0x20d8) + in_ECX * 4) + 8);
  FUN_007f18b0(in_EDX + 0x20bc,in_ECX,iVar1 + 0x3c,*(undefined4 *)(iVar1 + 0x6c),
               *(undefined4 *)(iVar1 + 0x70));
  return;
}


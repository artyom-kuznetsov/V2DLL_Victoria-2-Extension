// FUN_00895480 @ 00895480 body=[[00895480, 008954e8]]


void FUN_00895480(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = *(int *)(in_ECX + 0x20);
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
  if (0 < iVar2) {
    iVar2 = __alldiv((longlong)(*(int *)(*(int *)(iVar1 + 0xbcc) + 0x288) + 1000) * (longlong)iVar2,
                     1000,0);
  }
  *(int *)(iVar1 + 0xea0) = *(int *)(iVar1 + 0xea0) + iVar2;
  if (*(int *)(iVar1 + 0xea0) < 0) {
    *(undefined4 *)(iVar1 + 0xea0) = 0;
  }
  return;
}


// FUN_00895df0 @ 00895df0 body=[[00895df0, 00895e8e]]


void FUN_00895df0(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = *(int *)(DAT_012587e4 + 4);
  iVar2 = *(int *)(iVar1 + *(int *)(param_1 + 0xc) * 4);
  iVar2 = __alldiv((longlong)*(int *)(in_ECX + 0x20) *
                   (longlong)(*(int *)(*(int *)(iVar2 + 0xbcc) + 0x28c) + *(int *)(iVar2 + 0xea0)),
                   1000,0);
  iVar1 = *(int *)(iVar1 + *(int *)(param_1 + 0xc) * 4);
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


// FUN_00950050 @ 00950050 body=[[00950050, 009500d5]]


void FUN_00950050(int param_1)

{
  int iVar1;
  int in_EDX;
  int iVar2;
  int *unaff_EDI;
  
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EDX + 4) * 4);
  iVar2 = -*(int *)(*(int *)(DAT_012586dc + 0x30) + 0x2e0);
  iVar1 = __alldiv((longlong)(*(int *)(*(int *)(iVar1 + 0xbcc) + 0x28c) + *(int *)(iVar1 + 0xea0)) *
                   (longlong)-*(int *)(*(int *)(DAT_012586dc + 0x30) + 0x2e4),1000,0);
  if (iVar1 < iVar2) {
    iVar1 = iVar2;
  }
  iVar1 = __alldiv((longlong)*(int *)(*(int *)(param_1 + 0xc) + 0x100) * (longlong)iVar1,1000,0);
  *unaff_EDI = -iVar1;
  return;
}


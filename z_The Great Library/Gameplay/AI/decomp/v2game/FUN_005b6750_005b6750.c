// FUN_005b6750 @ 005b6750 body=[[005b6750, 005b67e5]]


void FUN_005b6750(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 *unaff_EDI;
  
  if (0 < *(int *)(in_EAX + 0xd8)) {
    iVar1 = *(int *)(DAT_012587e4 + 4);
    if (*(char *)(*(int *)(iVar1 + *(int *)(in_ECX + 4) * 4) + 0x67c) != '\0') {
      iVar2 = __alldiv((longlong)*(int *)(*(int *)(DAT_012586dc + 0x20) + 0x50) *
                       (longlong)*(int *)(in_EAX + 0xd8),1000,0);
      iVar1 = *(int *)(iVar1 + *(int *)(in_ECX + 4) * 4);
      uVar3 = __alldiv((longlong)
                       (*(int *)(*(int *)(iVar1 + 0xbcc) + 0x28c) + *(int *)(iVar1 + 0xea0)) *
                       (longlong)iVar2,1000,0);
      *unaff_EDI = uVar3;
      return;
    }
  }
  *unaff_EDI = 0;
  return;
}


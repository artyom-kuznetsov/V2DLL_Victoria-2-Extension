// FUN_00531d50 @ 00531d50 body=[[00531d50, 00531de8]]


undefined4 FUN_00531d50(int param_1,char param_2)

{
  int iVar1;
  char cVar2;
  int in_EDX;
  
  iVar1 = *(int *)(*(int *)(in_EDX + 0xbe8) + *(int *)(param_1 + 4) * 4);
  if ((((*(int *)(iVar1 + 0x9c) < *(int *)(DAT_012588e8 + 0xb0c)) && (*(int *)(iVar1 + 0x34) == 0))
      && ((*(int *)(iVar1 + 0x6c) <= *(int *)(DAT_012588e8 + 0xb0c) ||
          (((*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar1 + 0xc) * 4) + 0x31) ==
             '\0' && (4 < *(int *)(iVar1 + 0x40))) ||
           (*(int *)(in_EDX + 0xcfc) == *(int *)(param_1 + 4))))))) &&
     ((param_2 == '\0' || (cVar2 = FUN_00531cb0(), cVar2 != '\0')))) {
    return 1;
  }
  return 0;
}


// FUN_00548060 @ 00548060 body=[[00548060, 005480e7]]


int FUN_00548060(char *param_1,size_t param_2,int param_3)

{
  int iVar1;
  int in_ECX;
  
  if (*(FILE **)(in_ECX + 0x54) != (FILE *)0x0) {
    if ((param_1 == (char *)0x0) && (param_2 == 0 && param_3 == 0)) {
      iVar1 = 4;
    }
    else {
      iVar1 = 0;
    }
    iVar1 = _setvbuf(*(FILE **)(in_ECX + 0x54),param_1,iVar1,param_2);
    if (iVar1 == 0) {
      iVar1 = *(int *)(in_ECX + 0x54);
      *(undefined1 *)(in_ECX + 0x50) = 1;
      *(undefined1 *)(in_ECX + 0x49) = 0;
      FUN_00549030();
      if (iVar1 != 0) {
        *(int *)(in_ECX + 0x10) = iVar1 + 8;
        *(int *)(in_ECX + 0x14) = iVar1 + 8;
        *(int *)(in_ECX + 0x20) = iVar1;
        *(int *)(in_ECX + 0x24) = iVar1;
        *(int *)(in_ECX + 0x30) = iVar1 + 4;
        *(int *)(in_ECX + 0x34) = iVar1 + 4;
      }
      *(int *)(in_ECX + 0x54) = iVar1;
      *(undefined4 *)(in_ECX + 0x4c) = DAT_013f0824;
      *(undefined4 *)(in_ECX + 0x44) = 0;
      return in_ECX;
    }
  }
  return 0;
}


// FUN_009f77c0 @ 009f77c0 body=[[009f77c0, 009f7839] [009f783d, 009f7844]]


int FUN_009f77c0(void)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  undefined4 local_28 [5];
  uint local_14;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  
  iVar2 = 0;
  (**(code **)(*in_ECX + 0x5c))(local_28);
  local_8[0] = 10;
  iVar1 = FUN_005484e0(local_28,local_8,1);
  if (iVar1 != -1) {
    local_c[0] = 10;
    local_8[0] = 10;
    do {
      iVar2 = iVar2 + 1;
      FUN_005484e0(local_28,local_c,1);
      iVar1 = FUN_005484e0(local_28,local_8,1);
    } while (iVar1 != -1);
  }
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_28[0]);
  }
  return iVar2;
}


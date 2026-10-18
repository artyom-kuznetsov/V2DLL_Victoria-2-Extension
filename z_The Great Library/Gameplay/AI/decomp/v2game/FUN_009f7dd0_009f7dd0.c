// FUN_009f7dd0 @ 009f7dd0 body=[[009f7dd0, 009f7e5f]]


int FUN_009f7dd0(void)

{
  undefined1 uVar1;
  int iVar2;
  int unaff_ESI;
  int iVar3;
  undefined4 local_10;
  int local_c;
  undefined1 local_8 [4];
  
  local_10 = 0x210020;
  iVar3 = *(int *)(unaff_ESI + 0x10) + 1;
  local_c = 0;
  do {
    uVar1 = *(undefined1 *)((int)&local_10 + local_c * 2);
    local_8[0] = uVar1;
    iVar2 = FUN_005484e0(unaff_ESI,local_8,1);
    if (iVar2 < iVar3) {
      local_8[0] = uVar1;
      iVar2 = FUN_005484e0(unaff_ESI,local_8,1);
      if (iVar2 != -1) {
        local_8[0] = uVar1;
        iVar3 = FUN_005484e0(unaff_ESI,local_8,1);
      }
    }
    local_c = local_c + 1;
  } while (local_c < 2);
  if (iVar3 == *(int *)(unaff_ESI + 0x10) + 1) {
    return -1;
  }
  return iVar3;
}


// FUN_009293c0 @ 009293c0 body=[[009293c0, 0092947d]]


int FUN_009293c0(void)

{
  int *piVar1;
  int iVar2;
  int unaff_ESI;
  int iVar3;
  undefined1 local_10 [4];
  int local_c;
  int local_8;
  
  iVar2 = 0;
  iVar3 = *(int *)(unaff_ESI + 0x30) - *(int *)(unaff_ESI + 0x2c) >> 6;
  local_8 = 0;
  if (0 < iVar3) {
    local_c = 0;
    do {
      if (*(int *)(*(int *)(unaff_ESI + 0xc) + iVar2 * 4) != 0) {
        piVar1 = (int *)FUN_00951920(*(int *)(unaff_ESI + 0x2c) + local_c,local_10,0);
        local_8 = local_8 + *piVar1;
      }
      local_c = local_c + 0x40;
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  iVar2 = *(int *)(unaff_ESI + 0x40) - *(int *)(unaff_ESI + 0x3c) >> 6;
  local_c = 0;
  if (0 < iVar2) {
    iVar3 = 0;
    do {
      if (*(int *)(*(int *)(unaff_ESI + 0x1c) + local_c * 4) != 0) {
        piVar1 = (int *)FUN_00951920(*(int *)(unaff_ESI + 0x3c) + iVar3,local_10,0);
        local_8 = local_8 + *piVar1;
      }
      local_c = local_c + 1;
      iVar3 = iVar3 + 0x40;
    } while (local_c < iVar2);
  }
  FUN_00401000(0x43fa4001);
  iVar2 = FUN_00b31c00();
  return (local_8 + iVar2) / 1000;
}


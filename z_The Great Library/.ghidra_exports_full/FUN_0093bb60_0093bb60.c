// FUN_0093bb60 @ 0093bb60 body=[[0093bb60, 0093bc0a]]


void FUN_0093bb60(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *unaff_EDI;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined1 local_c [8];
  
  iVar1 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x2c);
  *unaff_EDI = 0;
  local_10 = iVar1 - iVar3 >> 3;
  local_1c = 0;
  if (0 < local_10) {
    do {
      local_18 = *(int *)(*(int *)(param_1 + 0x2c) + 4 + local_1c * 8);
      FUN_0093d080(&local_18);
      iVar1 = local_14;
      if ((local_14 != *(int *)(param_1 + 0xe0)) &&
         (local_18 = *(int *)(local_14 + 0x14) - *(int *)(local_14 + 0x10) >> 6, 0 < local_18)) {
        iVar3 = 0;
        do {
          piVar2 = (int *)FUN_00951920(*(int *)(iVar1 + 0x10) + iVar3,local_c,0);
          *unaff_EDI = *unaff_EDI + *piVar2;
          iVar3 = iVar3 + 0x40;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
      }
      local_1c = local_1c + 1;
    } while (local_1c < local_10);
  }
  return;
}


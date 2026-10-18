// FUN_004ee650 @ 004ee650 body=[[004ee650, 004ee771]]


void FUN_004ee650(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int unaff_EDI;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  piVar1 = (int *)(unaff_EDI + 0x10);
  iVar5 = 0;
  iVar3 = *(int *)(unaff_EDI + 0x14) - *(int *)(unaff_EDI + 0x10) >> 4;
  local_c = 0;
  local_8 = iVar3;
  if (0 < iVar3) {
    do {
      if (param_2 == 0) {
        return;
      }
      if (*(int *)(*(int *)(*piVar1 + 8 + iVar5) + 0x68) == param_1) {
        iVar3 = *(int *)(*piVar1 + iVar5 + 0xc);
        if (param_2 <= iVar3) {
          iVar3 = param_2;
        }
        piVar4 = (int *)(*(int *)(iVar5 + 8 + *piVar1) + 0x60);
        *piVar4 = *piVar4 - iVar3;
        param_2 = param_2 - iVar3;
        piVar4 = (int *)(iVar5 + 0xc + *piVar1);
        *piVar4 = *piVar4 - iVar3;
        iVar2 = *piVar1;
        if (*(int *)(iVar5 + 0xc + iVar2) < 1) {
          local_10 = *(int *)(iVar5 + 8 + iVar2);
          FUN_004f2680(&local_10);
          if (local_14 != *(int *)(unaff_EDI + 0x50)) {
            *(int *)(unaff_EDI + 0x48) = *(int *)(unaff_EDI + 0x48) - *(int *)(local_14 + 0x10);
            piVar4 = (int *)(*(int *)(unaff_EDI + 0x5c) +
                            *(int *)(*(int *)(*(int *)(local_14 + 0xc) + 0x68) + 0x28) * 4);
            *piVar4 = *piVar4 - *(int *)(local_14 + 0x10);
            *(undefined4 *)(local_14 + 0x10) = 0;
          }
          FUN_004f2760();
          local_8 = *(int *)(unaff_EDI + 0x14) - *piVar1 >> 4;
          iVar3 = local_8;
        }
        else {
          local_10 = *(int *)(iVar5 + 8 + iVar2);
          iVar3 = -iVar3;
          piVar4 = (int *)FUN_004c8d10();
          *piVar4 = *piVar4 + iVar3;
          *(int *)(unaff_EDI + 0x48) = *(int *)(unaff_EDI + 0x48) + iVar3;
          piVar4 = (int *)(*(int *)(unaff_EDI + 0x5c) +
                          *(int *)(*(int *)(local_10 + 0x68) + 0x28) * 4);
          *piVar4 = *piVar4 + iVar3;
          iVar3 = local_8;
        }
      }
      else {
        local_c = local_c + 1;
        iVar5 = iVar5 + 0x10;
      }
    } while (local_c < iVar3);
  }
  return;
}


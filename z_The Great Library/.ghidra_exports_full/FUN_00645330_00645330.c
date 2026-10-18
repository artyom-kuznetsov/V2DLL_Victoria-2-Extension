// FUN_00645330 @ 00645330 body=[[00645330, 006453cd]]


void FUN_00645330(int *param_1,undefined4 param_2)

{
  int iVar1;
  int unaff_ESI;
  
  if (*(float *)(unaff_ESI + 0x348) < 100.0) {
    iVar1 = FUN_00475500();
    if (*(char *)(iVar1 + 0x58) != '\0') {
      iVar1 = FUN_00475500();
      if (((*(uint *)(iVar1 + 0xec) & *(uint *)(iVar1 + 0xe8) & 4) != 0) &&
         (*(char *)(*param_1 + 0x6bc4c) != '\0')) {
        FUN_0099c700(param_2,(*(float *)(unaff_ESI + 0x348) - (float)*(int *)(unaff_ESI + 0x34c)) /
                             (float)(*(int *)(unaff_ESI + 0x350) - *(int *)(unaff_ESI + 0x34c)));
      }
    }
  }
  return;
}


// FUN_00855bb0 @ 00855bb0 body=[[00855bb0, 00855d09]]


void FUN_00855bb0(void)

{
  char cVar1;
  int unaff_ESI;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  FUN_00542bc0(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_ESI + 0x38) * 4),
               &local_10);
  local_c = *(undefined4 *)(unaff_ESI + 0x34);
  FUN_00543470(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_ESI + 0x38) * 4),&local_8
              );
  if (local_10 < local_8) {
    cVar1 = FUN_00855d10(unaff_ESI,
                         *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_ESI + 0x38) * 4) +
                         0x870,1);
    if (cVar1 == '\0') {
      local_8 = 0;
      local_10 = 0;
      FUN_00547100(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_ESI + 0x38) * 4),
                   &local_8,&local_10);
      if (local_8 == local_10) {
        FUN_00855d10(unaff_ESI,
                     *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_ESI + 0x38) * 4) + 0x880,0
                    );
        return;
      }
    }
  }
  else {
    cVar1 = FUN_00855d10(unaff_ESI,
                         *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_ESI + 0x38) * 4) +
                         0x880,0);
    if (cVar1 == '\0') {
      local_10 = 0;
      local_8 = 0;
      FUN_00547030(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_ESI + 0x38) * 4),
                   &local_10,&local_8);
      if (local_10 == local_8) {
        FUN_00855d10(unaff_ESI,
                     *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_ESI + 0x38) * 4) + 0x870,1
                    );
      }
    }
  }
  return;
}


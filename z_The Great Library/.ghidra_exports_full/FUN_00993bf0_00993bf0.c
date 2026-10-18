// FUN_00993bf0 @ 00993bf0 body=[[00993bf0, 00993c52]]


void FUN_00993bf0(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = (DAT_0131c8f0 - DAT_0131c8ec) / 0x38;
  if (0x4924923 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)((DAT_0131c8f4 - DAT_0131c8ec) / 0x38) < uVar1 + 1) {
    uVar2 = FUN_00993d90();
    FUN_00993c60(uVar2);
  }
  return;
}


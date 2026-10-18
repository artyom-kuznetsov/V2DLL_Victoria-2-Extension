// FUN_00640b50 @ 00640b50 body=[[00640b50, 00640b81] [00640b85, 00640b8b]]


void FUN_00640b50(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = CEU3DialogGuiType::vftable;
  in_ECX[0x19] = CEU3DialogGuiType::vftable;
  FUN_004097a0(in_ECX + 0xa9);
  FUN_009cdb70();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}


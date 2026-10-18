// FUN_009cdb70 @ 009cdb70 body=[[009cdb70, 009cdbda] [009cdbde, 009cdc09] [009cdc0d, 009cdcd6] [009cdcda, 009cdd0f] [009cdd13, 009cdd39] [009cdd3d, 009cdd63] [009cdd67, 009cdd8d] [009cdd91, 009cddb7] [009cddbb, 009cdde1] [009cdde5, 009cde05] [009cde09, 009cde2e]]


void FUN_009cdb70(void)

{
  undefined4 *in_ECX;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3bc10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e3b2cc;
  in_ECX[0x19] = &PTR_LAB_00e3b2f8;
  local_8 = 0x1a;
  local_14 = local_14 & 0xffffff00;
  if (in_ECX[0x55] != 0) {
    FUN_009a4a60(in_ECX[0x55],local_14);
  }
  if (0xf < (uint)in_ECX[0xa7]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0xa2]);
  }
  in_ECX[0xa7] = 0xf;
  in_ECX[0xa6] = 0;
  *(undefined1 *)(in_ECX + 0xa2) = 0;
  if (0xf < (uint)in_ECX[0xa0]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x9b]);
  }
  in_ECX[0xa0] = 0xf;
  in_ECX[0x9f] = 0;
  *(undefined1 *)(in_ECX + 0x9b) = 0;
  FUN_004097a0(in_ECX + 0x97);
  FUN_004097a0(in_ECX + 0x91);
  FUN_004097a0(in_ECX + 0x8d);
  FUN_004097a0(in_ECX + 0x89);
  FUN_004097a0(in_ECX + 0x85);
  FUN_004097a0(in_ECX + 0x81);
  FUN_004097a0(in_ECX + 0x7d);
  FUN_004097a0(in_ECX + 0x79);
  FUN_004097a0(in_ECX + 0x75);
  FUN_004097a0(in_ECX + 0x71);
  FUN_004097a0(in_ECX + 0x6d);
  FUN_004097a0(in_ECX + 0x69);
  FUN_004097a0(in_ECX + 0x65);
  FUN_004097a0(in_ECX + 0x61);
  if (in_ECX[0x5d] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x5d]);
  }
  in_ECX[0x5d] = 0;
  in_ECX[0x5e] = 0;
  in_ECX[0x5f] = 0;
  local_8 = CONCAT31(local_8._1_3_,8);
  FUN_00a5c580();
  if (0xf < (uint)in_ECX[0x50]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x4b]);
  }
  in_ECX[0x50] = 0xf;
  in_ECX[0x4f] = 0;
  *(undefined1 *)(in_ECX + 0x4b) = 0;
  if (0xf < (uint)in_ECX[0x46]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x41]);
  }
  in_ECX[0x46] = 0xf;
  in_ECX[0x45] = 0;
  *(undefined1 *)(in_ECX + 0x41) = 0;
  if (0xf < (uint)in_ECX[0x3f]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x3a]);
  }
  in_ECX[0x3f] = 0xf;
  in_ECX[0x3e] = 0;
  *(undefined1 *)(in_ECX + 0x3a) = 0;
  if (0xf < (uint)in_ECX[0x38]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x33]);
  }
  in_ECX[0x38] = 0xf;
  in_ECX[0x37] = 0;
  *(undefined1 *)(in_ECX + 0x33) = 0;
  if (0xf < (uint)in_ECX[0x31]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x2c]);
  }
  in_ECX[0x31] = 0xf;
  in_ECX[0x30] = 0;
  *(undefined1 *)(in_ECX + 0x2c) = 0;
  if (0xf < (uint)in_ECX[0x26]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x21]);
  }
  in_ECX[0x26] = 0xf;
  in_ECX[0x25] = 0;
  *(undefined1 *)(in_ECX + 0x21) = 0;
  if (0xf < (uint)in_ECX[0x1f]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x1a]);
  }
  in_ECX[0x1f] = 0xf;
  in_ECX[0x1e] = 0;
  *(undefined1 *)(in_ECX + 0x1a) = 0;
  in_ECX[0x19] = &PTR_FUN_00e38318;
  FUN_006467c0();
  ExceptionList = local_10;
  return;
}


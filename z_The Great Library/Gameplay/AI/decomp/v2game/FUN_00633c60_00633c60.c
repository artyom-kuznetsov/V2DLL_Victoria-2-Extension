// FUN_00633c60 @ 00633c60 body=[[00633c60, 00633cf7] [00633cfb, 00633d06]]


/* WARNING: Removing unreachable block (ram,0x00633cef) */

void FUN_00633c60(void)

{
  undefined4 *in_ECX;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00bb90e0;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  *in_ECX = CEU3Application::vftable;
  in_ECX[2] = CEU3Application::vftable;
  local_8 = 7;
  FUN_0063ef30(1,DAT_01259abc);
  *(undefined1 *)(DAT_012588e8 + 0xd1d) = 1;
  FUN_00409350("defines",7);
  local_8._0_1_ = 8;
  FUN_009a4ca0(in_ECX[0x5c]);
  local_8 = CONCAT31(local_8._1_3_,7);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(in_ECX[0x5c]);
}


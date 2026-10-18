// FUN_0087ca60 @ 0087ca60 body=[[0087ca60, 0087ca8b]]


void FUN_0087ca60(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b3aacb;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  *param_1 = CContextEffect::vftable;
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_1[8]);
}


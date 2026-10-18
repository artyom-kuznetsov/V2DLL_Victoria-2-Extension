// FUN_006a8a40 @ 006a8a40 body=[[006a8a40, 006a8a71]]


void FUN_006a8a40(int param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b44c8a;
  pvStack_10 = ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x006a8a6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ExceptionList = &pvStack_10;
  (*(code *)(&PTR_LAB_006a8d28)[param_1])();
  return;
}


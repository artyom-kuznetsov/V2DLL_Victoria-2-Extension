// FUN_00593e7a @ 00593e7a body=[[00593e7a, 00593ed8] [00593ff2, 00594005]]


void FUN_00593e7a(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined1 *puStack00000010;
  undefined4 in_stack_0000003c;
  uint in_stack_00000050;
  void *in_stack_0000005c;
  undefined1 auStack_1c [20];
  undefined *puStack_8;
  undefined4 uStack_4;
  
  puStack00000010 = auStack_1c;
  FUN_009885d0();
  FUN_005ab780();
  uStack_4 = 0x593ea6;
  FUN_0072d580();
  uStack_4 = 0x593eab;
  iVar1 = FUN_005ab7f0();
  if (iVar1 != 0) {
    iVar1 = *param_3;
    uStack_4 = 0x593eba;
    uStack_4 = FUN_005ab7f0();
    puStack_8 = (undefined *)0x593ec4;
    (**(code **)(iVar1 + 0x2c))();
  }
  if (0xf < in_stack_00000050) {
    uStack_4 = in_stack_0000003c;
                    /* WARNING: Subroutine does not return */
    puStack_8 = &UNK_00593ed9;
    FUN_00aae91b();
  }
  ExceptionList = in_stack_0000005c;
  return;
}


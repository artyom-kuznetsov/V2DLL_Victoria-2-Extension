// FUN_007b8f10 @ 007b8f10 body=[[007b8f10, 007b90bc] [007b90c0, 007b90da] [007b90de, 007b9107]]


undefined4 * FUN_007b8f10(undefined4 *param_1,uint param_2)

{
  FARPROC pFVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 in_stack_00000018;
  uint in_stack_0000001c;
  uint in_stack_00000024;
  undefined4 in_stack_00000034;
  uint in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined4 *in_stack_00000044;
  uint in_stack_00000058;
  undefined4 *in_stack_0000009c;
  uint in_stack_000000b0;
  undefined4 *in_stack_000000f0;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3eee7;
  local_10 = ExceptionList;
  local_8 = 2;
  ExceptionList = &local_10;
  *param_1 = CMicroDownloader::vftable;
  FUN_007b47e0(param_1 + 1);
  local_8._0_1_ = 3;
  param_1[0x31] = 0xf;
  param_1[0x30] = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  FUN_00408ed0(&param_2,0,0xffffffff);
  local_8._0_1_ = 4;
  param_1[0x38] = 0xf;
  param_1[0x37] = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  FUN_00408ed0(&stack0x00000024,0,0xffffffff);
  param_1[0x3a] = in_stack_00000040;
  param_1[0x40] = in_stack_000000f0;
  *(undefined1 *)(param_1 + 0x42) = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x50] = 0xf;
  param_1[0x4f] = 0;
  *(undefined1 *)(param_1 + 0x4b) = 0;
  local_8 = CONCAT31(local_8._1_3_,6);
  param_1[0x52] = 0;
  pFVar1 = GetProcAddress((HMODULE)param_1[0x40],"ggcoins_fopen");
  param_1[0x3b] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)param_1[0x40],"ggcoins_fclose");
  param_1[0x3d] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)param_1[0x40],"ggcoins_fread");
  param_1[0x3c] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)param_1[0x40],"ggcoins_free");
  param_1[0x3e] = pFVar1;
  uVar2 = FUN_00aae9af(0x18);
  param_1[0x3f] = uVar2;
  if (in_stack_000000b0 < 0x10) {
    in_stack_000000f0 = &stack0x0000009c;
  }
  else {
    in_stack_000000f0 = in_stack_0000009c;
  }
  puVar4 = in_stack_00000044;
  if (in_stack_00000058 < 0x10) {
    puVar4 = &stack0x00000044;
  }
  piVar3 = param_1 + 0x33;
  if (0xf < (uint)param_1[0x38]) {
    piVar3 = (int *)*piVar3;
  }
  uVar2 = (*(code *)param_1[0x3b])(piVar3,puVar4,in_stack_000000f0,uVar2);
  param_1[0x41] = uVar2;
  if (0xf < in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_stack_00000024);
  }
  in_stack_00000038 = 0xf;
  in_stack_00000034 = 0;
  in_stack_00000024 = in_stack_00000024 & 0xffffff00;
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_2);
  }
  in_stack_0000001c = 0xf;
  in_stack_00000018 = 0;
  param_2 = param_2 & 0xffffff00;
  FUN_007b46e0();
  ExceptionList = local_10;
  return param_1;
}


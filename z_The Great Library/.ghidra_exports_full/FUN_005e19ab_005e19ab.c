// FUN_005e19ab @ 005e19ab body=[[005e19ab, 005e1a6f] [005e1a73, 005e1a86]]


void FUN_005e19ab(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EDI;
  undefined1 *puStack00000010;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  uint in_stack_00000038;
  void *in_stack_00000044;
  undefined4 in_stack_0000004c;
  undefined1 local_1c [12];
  undefined4 uStack_10;
  undefined4 *local_c;
  undefined *local_8;
  undefined4 uStack_4;
  
  puStack00000010 = local_1c;
  local_8 = (undefined *)0xf;
  local_c = (undefined4 *)0x0;
  local_1c[0] = 0;
  FUN_00409350(&DAT_00ded94d,0);
  FUN_005ab780();
  in_stack_0000004c = 0;
  uStack_4 = 0x5e19e2;
  FUN_0072d580();
  puStack00000010 = *(undefined1 **)(unaff_EDI + 0x40);
  uStack_4 = 0x34;
  local_8 = (undefined *)0x5e19f0;
  puVar2 = (undefined4 *)FUN_00aae9af();
  in_stack_0000004c = CONCAT31(in_stack_0000004c._1_3_,1);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = in_stack_00000018;
    puVar2[1] = in_stack_0000001c;
    puVar2[2] = in_stack_00000020;
    uStack_4 = 0xffffffff;
    local_8 = (undefined *)0x0;
    local_c = &stack0x00000024;
    puVar2[8] = 0xf;
    puVar2[7] = 0;
    *(undefined1 *)(puVar2 + 3) = 0;
    uStack_10 = 0x5e1a32;
    FUN_00408ed0();
    puVar2[10] = puStack00000010;
    puVar2[0xb] = 0;
    *(undefined1 *)(puVar2 + 0xc) = 0;
  }
  iVar1 = *(int *)(unaff_EDI + 0x44);
  *(undefined4 **)(unaff_EDI + 0x40) = puVar2;
  *(int *)(unaff_EDI + 0x44) = iVar1 + 1;
  if (iVar1 == 0) {
    *(undefined4 **)(unaff_EDI + 0x3c) = puVar2;
  }
  else {
    *(undefined4 **)((int)puStack00000010 + 0x2c) = puVar2;
  }
  if (0xf < in_stack_00000038) {
    uStack_4 = in_stack_00000024;
                    /* WARNING: Subroutine does not return */
    local_8 = &UNK_005e1a70;
    FUN_00aae91b();
  }
  ExceptionList = in_stack_00000044;
  return;
}


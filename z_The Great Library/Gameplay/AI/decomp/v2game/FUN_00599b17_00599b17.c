// FUN_00599b17 @ 00599b17 body=[[00599b17, 00599bbf]]


void FUN_00599b17(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int unaff_EDI;
  undefined1 *puStack00000014;
  undefined4 in_stack_0000002c;
  uint in_stack_00000040;
  void *in_stack_000001bc;
  undefined1 local_1c [16];
  undefined4 local_c;
  undefined *local_8;
  undefined4 uStack_4;
  
  puStack00000014 = local_1c;
  local_8 = (undefined *)0xf;
  local_c = 0;
  local_1c[0] = 0;
  FUN_00409350(&DAT_00ded94d,0);
  FUN_005ab780();
  uStack_4 = 0x599b51;
  FUN_0072d580();
  uStack_4 = 0x599b56;
  iVar2 = FUN_00967f50();
  if (iVar2 != 0) {
    uStack_4 = 0x599b63;
    uVar3 = FUN_00967f50();
    iVar2 = *(int *)(unaff_EDI + 0x180);
    uStack_4 = 0x10;
    local_8 = (undefined *)0x599b76;
    puVar4 = (undefined4 *)FUN_00aae9af();
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = uVar3;
      puVar4[1] = iVar2;
      puVar4[2] = 0;
      *(undefined1 *)(puVar4 + 3) = 0;
    }
    iVar1 = *(int *)(unaff_EDI + 0x184);
    *(undefined4 **)(unaff_EDI + 0x180) = puVar4;
    *(int *)(unaff_EDI + 0x184) = iVar1 + 1;
    if (iVar1 == 0) {
      *(undefined4 **)(unaff_EDI + 0x17c) = puVar4;
    }
    else {
      *(undefined4 **)(iVar2 + 8) = puVar4;
    }
  }
  if (0xf < in_stack_00000040) {
    uStack_4 = in_stack_0000002c;
                    /* WARNING: Subroutine does not return */
    local_8 = &UNK_00599e3f;
    FUN_00aae91b();
  }
  ExceptionList = in_stack_000001bc;
  return;
}


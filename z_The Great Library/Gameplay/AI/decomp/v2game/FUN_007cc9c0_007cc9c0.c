// FUN_007cc9c0 @ 007cc9c0 body=[[007cc9c0, 007ccaf6] [007ccafa, 007ccb2c]]


/* WARNING: Removing unreachable block (ram,0x007ccaee) */

void FUN_007cc9c0(void)

{
  int in_ECX;
  undefined8 *puVar1;
  undefined4 *unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b41e78;
  local_10 = ExceptionList;
  if (1 < (in_ECX - (int)unaff_EDI) / 0x44) {
    puVar1 = (undefined8 *)(in_ECX + -0x14);
    ExceptionList = &local_10;
    do {
      local_8 = 0xffffffff;
      FUN_00408ed0((int)puVar1 + -0x24,0,0xffffffff);
      local_8 = 0;
      *(undefined4 *)(puVar1 + -6) = *unaff_EDI;
      *(undefined4 *)((int)puVar1 + -0x2c) = unaff_EDI[1];
      *(undefined4 *)(puVar1 + -5) = unaff_EDI[2];
      FUN_00408ed0(unaff_EDI + 3,0,0xffffffff);
      *(undefined4 *)((int)puVar1 + -4) = unaff_EDI[0xb];
      *puVar1 = *(undefined8 *)(unaff_EDI + 0xc);
      puVar1[1] = *(undefined8 *)(unaff_EDI + 0xe);
      *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(unaff_EDI + 0x10);
      FUN_007d04d0();
      puVar1 = (undefined8 *)((int)puVar1 + -0x44);
    } while (1 < ((0x14 - (int)unaff_EDI) + (int)puVar1) / 0x44);
  }
  ExceptionList = local_10;
  return;
}


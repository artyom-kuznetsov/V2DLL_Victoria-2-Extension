// FUN_009a6ea0 @ 009a6ea0 body=[[009a6ea0, 009a6f34]]


undefined4 * FUN_009a6ea0(void)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b3e3b9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_00aae9af(0x40);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined1 *)(puVar1 + 4) = 0;
    DAT_013f0940 = DAT_013f0940 + 1;
    *(undefined1 *)(puVar1 + 5) = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    *(undefined1 *)(puVar1 + 10) = 0;
    DAT_013f0948 = DAT_013f0948 + 1;
    *(undefined1 *)(puVar1 + 0xb) = 0;
    puVar1[6] = &PTR_FUN_00e388f0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    *puVar1 = &PTR_FUN_00e3894c;
    puVar1[6] = &PTR_LAB_00e3893c;
    ExceptionList = local_10;
    return puVar1;
  }
  ExceptionList = local_10;
  return (undefined4 *)0x0;
}


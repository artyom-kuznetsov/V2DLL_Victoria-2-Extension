// FUN_0047d7b0 @ 0047d7b0 body=[[0047d7b0, 0047d7fe]]


undefined1 * FUN_0047d7b0(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int *unaff_EDI;
  
  puVar1 = (undefined1 *)FUN_00aae9af(0x20);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 0x14) = 0xf;
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 0x1c) = 0;
  }
  *(undefined4 *)(puVar1 + 0x1c) = param_2;
  FUN_00408ed0(param_1,0,0xffffffff);
  (**(code **)(*unaff_EDI + 0x18))(puVar1,puVar1);
  return puVar1;
}


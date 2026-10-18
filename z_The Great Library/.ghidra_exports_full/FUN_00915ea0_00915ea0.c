// FUN_00915ea0 @ 00915ea0 body=[[00915ea0, 00915ed6]]


undefined4 * FUN_00915ea0(void)

{
  undefined4 *puVar1;
  int in_ECX;
  
  puVar1 = (undefined4 *)FUN_00aae9af(0x6c);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00913320();
    *puVar1 = CDeclareWarAction::vftable;
    *(undefined1 *)(puVar1 + 0x1a) = *(undefined1 *)(in_ECX + 0x68);
    *(undefined1 *)((int)puVar1 + 0x69) = *(undefined1 *)(in_ECX + 0x69);
    return puVar1;
  }
  return (undefined4 *)0x0;
}


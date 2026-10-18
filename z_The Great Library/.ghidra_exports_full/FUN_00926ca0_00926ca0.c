// FUN_00926ca0 @ 00926ca0 body=[[00926ca0, 00926cfd]]


undefined4 * FUN_00926ca0(void)

{
  undefined4 *puVar1;
  int in_ECX;
  
  puVar1 = (undefined4 *)FUN_00aae9af(0x2c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = CDiplomaticAction::vftable;
    puVar1[1] = 0x18d;
    puVar1[2] = *(undefined4 *)(in_ECX + 8);
    puVar1[3] = *(undefined4 *)(in_ECX + 0xc);
    puVar1[4] = *(undefined4 *)(in_ECX + 0x10);
    puVar1[5] = *(undefined4 *)(in_ECX + 0x14);
    puVar1[6] = *(undefined4 *)(in_ECX + 0x18);
    puVar1[7] = *(undefined4 *)(in_ECX + 0x1c);
    *(undefined1 *)(puVar1 + 8) = 0;
    puVar1[9] = *(undefined4 *)(in_ECX + 0x24);
    *puVar1 = CMakeCBAction::vftable;
    puVar1[10] = *(undefined4 *)(in_ECX + 0x28);
    return puVar1;
  }
  return (undefined4 *)0x0;
}


// FUN_005ea720 @ 005ea720 body=[[005ea720, 005ea7c0]]


void FUN_005ea720(char param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined4 uVar2;
  undefined1 local_20 [4];
  undefined1 *local_1c;
  undefined4 local_14;
  
  if (param_1 == '\0') {
    uVar2 = *(undefined4 *)(in_ECX + 0xc);
    FUN_00414cc0(in_ECX + 0x14);
    FUN_0041a360(uVar2);
  }
  else {
    local_14 = *(undefined4 *)(in_ECX + 0xc);
    puVar1 = (undefined4 *)FUN_004f6500();
    local_1c = local_20;
    *(undefined4 *)(in_ECX + 0x14) = *puVar1;
    uVar2 = *(undefined4 *)(in_ECX + 0xc);
    FUN_00414cc0(in_ECX + 0x10);
    FUN_0041a360(uVar2);
  }
  return;
}


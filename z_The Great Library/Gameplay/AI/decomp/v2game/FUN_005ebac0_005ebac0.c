// FUN_005ebac0 @ 005ebac0 body=[[005ebac0, 005ebb6c]]


void FUN_005ebac0(char param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  undefined4 local_4c;
  undefined4 local_38;
  undefined1 local_20 [4];
  undefined1 *local_1c;
  undefined4 local_14;
  
  if (param_1 == '\0') {
    iVar1 = *(int *)(in_ECX + 0xc);
    FUN_00414cc0(in_ECX + 0x14);
    *(undefined4 *)(iVar1 + 0xea0) = local_4c;
  }
  else {
    local_14 = *(undefined4 *)(in_ECX + 0xc);
    puVar2 = (undefined4 *)FUN_005341f0();
    local_1c = local_20;
    *(undefined4 *)(in_ECX + 0x14) = *puVar2;
    iVar1 = *(int *)(in_ECX + 0xc);
    FUN_00414cc0(in_ECX + 0x10);
    *(undefined4 *)(iVar1 + 0xea0) = local_38;
  }
  return;
}


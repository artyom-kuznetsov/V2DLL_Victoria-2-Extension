// FUN_007e0960 @ 007e0960 body=[[007e0960, 007e0bf5]]


undefined4 * FUN_007e0960(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b61ddc;
  local_10 = ExceptionList;
  if (param_2 < 0x269) {
    if (param_2 == 0x268) {
      ExceptionList = &local_10;
      iVar1 = FUN_00aae9af(0x90);
      if (iVar1 != 0) {
        puVar2 = (undefined4 *)FUN_0080e430(in_ECX);
        ExceptionList = local_10;
        return puVar2;
      }
    }
    else if (param_2 == 0x136) {
      ExceptionList = &local_10;
      iVar1 = FUN_00aae9af(0x250);
      local_8 = 0;
      if (iVar1 != 0) {
        puVar2 = (undefined4 *)FUN_007e8dc0(iVar1);
        ExceptionList = local_10;
        return puVar2;
      }
    }
    else if (param_2 == 0x14e) {
      ExceptionList = &local_10;
      puVar2 = (undefined4 *)FUN_00aae9af(0x26bc);
      local_8 = 1;
      if (puVar2 != (undefined4 *)0x0) {
        FUN_00a20db0(puVar2);
        *puVar2 = CEU3BitmapFont::vftable;
        puVar2[10] = CEU3BitmapFont::vftable;
        puVar2[0x9ac] = in_ECX;
        puVar2[0x9ad] = 0;
        *(undefined1 *)(puVar2 + 0x9ae) = 0;
        ExceptionList = local_10;
        return puVar2;
      }
    }
    else {
      if (param_2 != 0x171) goto LAB_007e0b66;
      ExceptionList = &local_10;
      iVar1 = FUN_00aae9af(0x164);
      local_8 = 2;
      if (iVar1 != 0) {
        puVar2 = (undefined4 *)FUN_00a29f10(iVar1,in_ECX);
        ExceptionList = local_10;
        return puVar2;
      }
    }
  }
  else if (param_2 < 0x270) {
    if (param_2 == 0x26f) {
      ExceptionList = &local_10;
      iVar1 = FUN_00aae9af(0xd8);
      if (iVar1 != 0) {
        puVar2 = (undefined4 *)FUN_007ea5c0(in_ECX);
        ExceptionList = local_10;
        return puVar2;
      }
    }
    else if (param_2 == 0x26a) {
      ExceptionList = &local_10;
      iVar1 = FUN_00aae9af(0xa8);
      if (iVar1 != 0) {
        puVar2 = (undefined4 *)FUN_007e6860(in_ECX);
        ExceptionList = local_10;
        return puVar2;
      }
    }
    else {
      if (param_2 != 0x26d) goto LAB_007e0b66;
      ExceptionList = &local_10;
      iVar1 = FUN_00aae9af(0xb8);
      if (iVar1 != 0) {
        puVar2 = (undefined4 *)FUN_0080e5f0(in_ECX);
        ExceptionList = local_10;
        return puVar2;
      }
    }
  }
  else if (param_2 == 0x7ab) {
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x20c);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)FUN_007da3b0(in_ECX);
      ExceptionList = local_10;
      return puVar2;
    }
  }
  else {
    if (param_2 != 0x830) {
LAB_007e0b66:
      ExceptionList = &local_10;
      puVar2 = (undefined4 *)FUN_00996b80(param_1,param_2);
      ExceptionList = local_10;
      return puVar2;
    }
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x154);
    local_8 = 3;
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)FUN_00819240(iVar1);
      ExceptionList = local_10;
      return puVar2;
    }
  }
  ExceptionList = local_10;
  return (undefined4 *)0x0;
}


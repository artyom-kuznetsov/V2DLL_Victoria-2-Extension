// FUN_00646220 @ 00646220 body=[[00646220, 006463d4]]


undefined4 * FUN_00646220(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5318c;
  local_10 = ExceptionList;
  if (param_2 < 0xc1) {
    if (param_2 == 0xc0) {
      ExceptionList = &local_10;
      puVar2 = (undefined4 *)FUN_00aae9af(0x29c);
      local_8 = 3;
      if (puVar2 != (undefined4 *)0x0) {
        FUN_009f1d30(puVar2,*(undefined4 *)(in_ECX + 0x24));
        *puVar2 = CEU3ButtonType::vftable;
        ExceptionList = local_10;
        return puVar2;
      }
    }
    else if (param_2 == 0x7c) {
      ExceptionList = &local_10;
      puVar2 = (undefined4 *)FUN_00aae9af(0x29c);
      local_8 = 2;
      if (puVar2 != (undefined4 *)0x0) {
        FUN_009f1d30(puVar2,*(undefined4 *)(in_ECX + 0x24));
        *puVar2 = CEU3ButtonType::vftable;
        ExceptionList = local_10;
        return puVar2;
      }
    }
    else {
      if (param_2 != 0xb2) goto LAB_00646334;
      ExceptionList = &local_10;
      iVar1 = FUN_00aae9af(0xb0);
      local_8 = 1;
      if (iVar1 != 0) {
        puVar2 = (undefined4 *)FUN_006466d0(iVar1);
        ExceptionList = local_10;
        return puVar2;
      }
    }
  }
  else {
    if (param_2 != 0x26c) {
LAB_00646334:
      ExceptionList = &local_10;
      puVar2 = (undefined4 *)FUN_009a41c0(param_1,param_2);
      ExceptionList = local_10;
      return puVar2;
    }
    ExceptionList = &local_10;
    puVar2 = (undefined4 *)FUN_00aae9af(0x2b4);
    local_8 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_009cd7c0(puVar2);
      *puVar2 = CEU3DialogGuiType::vftable;
      puVar2[0x19] = CEU3DialogGuiType::vftable;
      puVar2[0xa9] = 0;
      puVar2[0xaa] = 0;
      puVar2[0xab] = 0;
      *(undefined1 *)(puVar2 + 0xac) = 0;
      ExceptionList = local_10;
      return puVar2;
    }
  }
  ExceptionList = local_10;
  return (undefined4 *)0x0;
}


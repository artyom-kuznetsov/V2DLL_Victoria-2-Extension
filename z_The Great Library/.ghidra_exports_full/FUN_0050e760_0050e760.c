// FUN_0050e760 @ 0050e760 body=[[0050e760, 0050e837]]


void FUN_0050e760(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int unaff_ESI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b524bb;
  local_10 = ExceptionList;
  iVar3 = *(int *)(unaff_ESI + 0xbd4);
  ExceptionList = &local_10;
  puVar2 = (undefined4 *)FUN_00aae9af(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = param_1;
    puVar2[1] = 0;
    puVar2[2] = iVar3;
    *(undefined1 *)(puVar2 + 3) = 0;
  }
  iVar1 = *(int *)(unaff_ESI + 0xbdc);
  *(undefined4 **)(unaff_ESI + 0xbd4) = puVar2;
  *(int *)(unaff_ESI + 0xbdc) = iVar1 + 1;
  if (iVar1 == 0) {
    *(undefined4 **)(unaff_ESI + 0xbd8) = puVar2;
  }
  else {
    *(undefined4 **)(iVar3 + 4) = puVar2;
  }
  if (param_2 != '\0') {
    iVar3 = FUN_00aae9af(0x14);
    local_8 = 0;
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_005e9ae0(unaff_ESI);
    }
    local_8 = 0xffffffff;
    FUN_005e9b90(param_1);
    *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
    (**(code **)(*(int *)(unaff_ESI + 0x9b4) + 0x18))(iVar3);
  }
  ExceptionList = local_10;
  return;
}


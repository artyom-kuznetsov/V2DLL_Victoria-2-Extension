// FUN_009c4470 @ 009c4470 body=[[009c4470, 009c4570]]


void FUN_009c4470(undefined4 param_1)

{
  int in_ECX;
  bool bVar1;
  undefined **local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined8 local_14;
  undefined8 local_c;
  
  *(undefined1 *)(in_ECX + 0xf4) = 0;
  if (*(char *)(in_ECX + 0xd5) != '\0') {
    bVar1 = *(char *)(in_ECX + 0x38) != '\0';
    *(bool *)(in_ECX + 0xf4) = bVar1;
    if ((*(char *)(in_ECX + 0xf5) == '\0') && (!bVar1)) {
      local_14 = *(undefined8 *)(in_ECX + 0xe0);
      local_c = *(undefined8 *)(in_ECX + 0xe8);
      if ((float)local_c != 0.8) {
        (**(code **)(**(int **)(in_ECX + 0x94) + 0x110))(in_ECX + 0xd8,1);
      }
      (**(code **)(**(int **)(in_ECX + 0x94) + 0x110))(in_ECX + 0xd8,1);
      FUN_009ee180(param_1);
      return;
    }
    local_1c = 0x18d;
    local_20 = CColor::vftable;
    local_18 = DAT_00f092fc;
    local_14 = CONCAT44(DAT_00f092fc,DAT_00f092fc);
    local_c._0_5_ = CONCAT14(1,DAT_00f092fc);
    (**(code **)(**(int **)(in_ECX + 0x94) + 0x110))(&local_20,1);
  }
  FUN_009ee180(param_1);
  return;
}


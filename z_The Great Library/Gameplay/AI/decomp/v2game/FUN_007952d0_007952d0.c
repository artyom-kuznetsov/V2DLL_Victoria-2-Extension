// FUN_007952d0 @ 007952d0 body=[[007952d0, 00795383] [00795387, 007953fd] [00795401, 007954c3]]


undefined4 FUN_007952d0(void)

{
  undefined4 uVar1;
  int *unaff_EDI;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b44610;
  local_10 = ExceptionList;
  if (*(int *)(unaff_EDI[1] + 0xdc) != *(int *)(unaff_EDI[2] + 0xdc)) {
    return 0;
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("unitname_1",10);
  local_8 = 0;
  uVar1 = (**(code **)(*(int *)unaff_EDI[1] + 0x20))();
  (**(code **)(*(int *)*unaff_EDI + 0x3c))(local_48);
  FUN_00408ed0(uVar1,0,0xffffffff);
  FUN_00a5ecc0(uVar1,0);
  local_8 = 0xffffffff;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("unitname_2",10);
  local_8 = 1;
  uVar1 = (**(code **)(*(int *)unaff_EDI[2] + 0x20))();
  (**(code **)(*(int *)*unaff_EDI + 0x3c))(local_2c);
  FUN_00408ed0(uVar1,0,0xffffffff);
  FUN_00a5ecc0(uVar1,0);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  if (((unaff_EDI[0x2b] - unaff_EDI[0x2a]) / 0x28 == *(int *)(unaff_EDI[2] + 0x40)) &&
     ((unaff_EDI[0x21] - unaff_EDI[0x20]) / 0x28 == *(int *)(unaff_EDI[1] + 0x40))) {
    FUN_00795a50(unaff_EDI,unaff_EDI + 0x1a,0);
    FUN_00795a50(unaff_EDI,unaff_EDI + 0x24,1);
    FUN_00795af0();
    FUN_00795af0();
    ExceptionList = local_10;
    return 1;
  }
  (**(code **)(*(int *)(*unaff_EDI + 0x18) + 0x38))();
  FUN_007956d0();
  ExceptionList = local_10;
  return 1;
}


// FUN_006336e0 @ 006336e0 body=[[006336e0, 00633761] [00633765, 00633782] [00633786, 006337f9]]


bool FUN_006336e0(void)

{
  undefined4 uVar1;
  uint *puVar2;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30;
  undefined4 local_20;
  uint local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6250b;
  local_10 = ExceptionList;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 0;
  local_1c = 0xf;
  local_20 = 0;
  local_30 = local_30 & 0xffffff00;
  FUN_00409350("common/defines.lua",0x12);
  puVar2 = local_4c;
  local_8 = CONCAT31(local_8._1_3_,1);
  uVar1 = FUN_009be180(puVar2);
  FUN_009be210(uVar1,puVar2);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30);
  }
  local_8 = 0xffffffff;
  local_1c = 0xf;
  local_20 = 0;
  local_30 = local_30 & 0xffffff00;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (DAT_012586dc != (undefined4 *)0x0) {
    (**(code **)*DAT_012586dc)(1);
    DAT_012586dc = (undefined4 *)0x0;
  }
  local_14 = FUN_00aae9af(0x80);
  local_8 = 2;
  if (local_14 == 0) {
    DAT_012586dc = (undefined4 *)0x0;
  }
  else {
    DAT_012586dc = (undefined4 *)FUN_0042d820(local_14);
  }
  local_8 = 0xffffffff;
  FUN_0042e410(DAT_012586dc);
  ExceptionList = local_10;
  return DAT_012586dc != (undefined4 *)0x0;
}


// FUN_009d5450 @ 009d5450 body=[[009d5450, 009d54ec] [009d54f0, 009d5507] [009d550b, 009d5578]]


undefined4 *
FUN_009d5450(undefined4 *param_1,undefined4 param_2,char param_3,int param_4,undefined1 param_5)

{
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34;
  undefined4 local_24;
  uint local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b49988;
  local_10 = ExceptionList;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 0;
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = CONCAT31(local_8._1_3_,1);
  param_1[1] = 1;
  param_1[2] = 1;
  *(undefined1 *)((int)param_1 + 0xe) = 1;
  *param_1 = &PTR_FUN_00e3b540;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[10] = 0xf;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  FUN_00408ed0(local_50,0,0xffffffff);
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  if (local_3c < 0x10) {
    param_1[0xc] = param_2;
    *(undefined1 *)(param_1 + 0xe) = param_5;
    *param_1 = &PTR_FUN_00e3b4f8;
    param_1[0xd] = 0;
    param_1[1] = param_4;
    *(undefined1 *)(param_1 + 3) = 0;
    *(char *)((int)param_1 + 0x11) = param_3;
    *(undefined1 *)((int)param_1 + 0x12) = 0;
    if (param_4 == 0) {
      *(undefined2 *)((int)param_1 + 0x12) = 0x100;
    }
    else if (param_4 == 1) {
      *(undefined2 *)((int)param_1 + 0x12) = 0;
      if (param_3 == '\0') {
        *(undefined1 *)(param_1 + 3) = 0;
        param_1[0xd] = 0;
        ExceptionList = local_10;
        return param_1;
      }
    }
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_50[0]);
}


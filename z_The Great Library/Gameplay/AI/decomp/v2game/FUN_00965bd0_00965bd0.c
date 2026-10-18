// FUN_00965bd0 @ 00965bd0 body=[[00965bd0, 00965d01] [00965d05, 00965d24] [00965d28, 00965d3a]]


void FUN_00965bd0(int param_1)

{
  int in_ECX;
  uint local_84 [4];
  undefined4 local_74;
  uint local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  uint local_5c [4];
  undefined4 local_4c;
  uint local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34 [5];
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b42008;
  local_14 = ExceptionList;
  if (param_1 == 0) {
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    ExceptionList = &local_14;
    FUN_00409350(&DAT_00ded94d,0);
    local_c = 1;
    local_60 = DAT_01268ff0;
    local_68 = 0;
    local_64 = DAT_01268fec;
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    FUN_00408ed0(local_84,0,0xffffffff);
    local_c = CONCAT31(local_c._1_3_,2);
    *(undefined4 *)(in_ECX + 0x220) = local_68;
    *(undefined4 *)(in_ECX + 0x224) = local_64;
    *(undefined4 *)(in_ECX + 0x228) = local_60;
    FUN_00408ed0(local_5c,0,0xffffffff);
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_5c[0]);
    }
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    local_34[0] = local_84[0];
    local_20 = local_70;
  }
  else {
    ExceptionList = &local_14;
    FUN_0072d4e0(&local_40,param_1);
    local_c = 0;
    *(undefined4 *)(in_ECX + 0x220) = local_40;
    *(undefined4 *)(in_ECX + 0x224) = local_3c;
    *(undefined4 *)(in_ECX + 0x228) = local_38;
    FUN_00408ed0(local_34,0,0xffffffff);
  }
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  ExceptionList = local_14;
  return;
}


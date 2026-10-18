// FUN_00475750 @ 00475750 body=[[00475750, 0047594c] [00475950, 00475980] [00475997, 00475aef]]


/* WARNING: Removing unreachable block (ram,0x00475944) */

void FUN_00475750(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 ***pppuVar3;
  int iVar4;
  int in_ECX;
  undefined4 **local_30 [3];
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  undefined1 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b53bc0;
  local_10 = ExceptionList;
  if (param_2 < 0x46f) {
    if (param_2 != 0x46e) {
      if (param_2 < 0x27f) {
        if (param_2 == 0x27e) {
          ExceptionList = &local_10;
          FUN_009a1750(in_ECX + 0x108,0);
          ExceptionList = local_10;
          return;
        }
        if (param_2 == 0x148) {
          ExceptionList = &local_10;
          FUN_009a1bb0(in_ECX + 0x17c);
          ExceptionList = local_10;
          return;
        }
        if (param_2 == 0x277) {
          ExceptionList = &local_10;
          (**(code **)(*(int *)(in_ECX + 0xdc) + 0xc))(param_1);
          ExceptionList = local_10;
          return;
        }
      }
      else {
        if (param_2 == 0x27f) {
          ExceptionList = &local_10;
          FUN_009a1750(in_ECX + 0x124,0);
          ExceptionList = local_10;
          return;
        }
        if (param_2 == 0x280) {
          ExceptionList = &local_10;
          FUN_00401320();
          local_8 = 2;
          FUN_009a1750(in_ECX + 0x140,0);
          cVar1 = FUN_0040b360();
          if (cVar1 != '\0') {
            FUN_00408ed0(local_30,0,0xffffffff);
          }
          FUN_00408ad0();
          ExceptionList = local_10;
          return;
        }
        if (param_2 == 0x283) {
          local_24 = 0;
          local_20 = 0;
          local_1c = 0;
          local_18 = 0;
          local_8 = 5;
          ExceptionList = &local_10;
          FUN_00409810(param_1,&local_24);
          FUN_00849e90();
          ExceptionList = local_10;
          return;
        }
      }
LAB_00475a15:
      ExceptionList = &local_10;
      FUN_009d7a90(param_1,param_2);
      ExceptionList = local_10;
      return;
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = (undefined4 **)((uint)local_30[0]._1_3_ << 8);
    local_8 = 3;
    ExceptionList = &local_10;
    local_14 = in_ECX;
    FUN_009a1750(local_30,0);
    FUN_00409350(&DAT_00ded94d,0);
    local_8 = CONCAT31(local_8._1_3_,4);
    cVar1 = FUN_00416db0();
    if (cVar1 == '\0') {
      uVar2 = FUN_00475580();
      *(undefined4 *)(local_14 + 0x160) = uVar2;
    }
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
  }
  else if (param_2 < 0x808) {
    if (param_2 == 0x807) {
      ExceptionList = &local_10;
      FUN_009a1bb0(in_ECX + 0x165);
      ExceptionList = local_10;
      return;
    }
    if (((param_2 != 0x4cf) && (param_2 != 0x6b6)) && (param_2 != 0x6b7)) {
      ExceptionList = &local_10;
      FUN_009d7a90(param_1,param_2);
      ExceptionList = local_10;
      return;
    }
  }
  else {
    if (param_2 != 0x924) {
      if (param_2 == 0x99c) {
        local_1c = 0xf;
        local_20 = 0;
        local_30[0] = (undefined4 **)((uint)local_30[0]._1_3_ << 8);
        local_8 = 0;
        ExceptionList = &local_10;
        FUN_009a1750(local_30,0);
        FUN_009885d0();
        local_8 = CONCAT31(local_8._1_3_,1);
        cVar1 = FUN_00416db0();
        FUN_00408ad0();
        if (cVar1 == '\0') {
          pppuVar3 = (undefined4 ***)local_30[0];
          if (local_1c < 0x10) {
            pppuVar3 = local_30;
          }
          uVar2 = FUN_00aaf0c5(pppuVar3);
          *(undefined4 *)(in_ECX + 0x15c) = uVar2;
        }
        FUN_00408ad0();
        ExceptionList = local_10;
        return;
      }
      goto LAB_00475a15;
    }
    ExceptionList = &local_10;
    iVar4 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%f",in_ECX + 0x178);
    if (iVar4 == 0) {
      FUN_009a1140();
    }
  }
  ExceptionList = local_10;
  return;
}

